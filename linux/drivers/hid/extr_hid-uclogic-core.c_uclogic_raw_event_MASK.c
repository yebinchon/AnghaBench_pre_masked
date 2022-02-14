
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int id; int dev_id_byte; int re_lsb; } ;
struct TYPE_3__ {int id; scalar_t__ inrange; scalar_t__ fragmented_hires; } ;
struct uclogic_params {int pen_frame_flag; TYPE_2__ frame; TYPE_1__ pen; int pen_unused; } ;
struct uclogic_drvdata {int re_state; int inrange_timer; struct uclogic_params params; } ;
struct hid_report {scalar_t__ type; int id; } ;
struct hid_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct uclogic_drvdata* FUNC_0 (struct hid_device*) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct hid_device *VAR_4,
    struct hid_report *VAR_5,
    u8 *VAR_6, int VAR_7)
{
 struct uclogic_drvdata *VAR_8 = FUNC_0(VAR_4);
 struct uclogic_params *VAR_9 = &VAR_8->params;


 if (!VAR_9->pen_unused &&
     (VAR_5->type == VAR_0) &&
     (VAR_5->id == VAR_9->pen.id) &&
     (VAR_7 >= 2)) {

  if (VAR_9->frame.id != 0 &&
      VAR_6[1] & VAR_9->pen_frame_flag) {

   VAR_6[0] = VAR_9->frame.id;
   return 0;
  }

  if (VAR_9->pen.inrange ==
   VAR_1) {

   VAR_6[1] ^= 0x40;
  }




  if (VAR_7 >= 10 && VAR_9->pen.fragmented_hires) {
   u8 VAR_10;
   u8 VAR_11;


   VAR_10 = VAR_6[6];
   VAR_11 = VAR_6[7];




   VAR_6[6] = VAR_6[5];
   VAR_6[5] = VAR_6[4];

   VAR_6[4] = VAR_6[8];

   VAR_6[7] = VAR_6[9];

   VAR_6[8] = VAR_10;
   VAR_6[9] = VAR_11;
  }

  if (VAR_9->pen.inrange == VAR_2) {

   VAR_6[1] |= 0x40;

   FUNC_1(&VAR_8->inrange_timer,
     VAR_3 + FUNC_2(100));
  }
 }


 if ((VAR_5->type == VAR_0) &&
     (VAR_5->id == VAR_9->frame.id)) {

  if (VAR_9->frame.dev_id_byte > 0 &&
      VAR_9->frame.dev_id_byte < VAR_7) {
   VAR_6[VAR_9->frame.dev_id_byte] = 0xf;
  }

  if (VAR_9->frame.re_lsb > 0 &&
      VAR_9->frame.re_lsb / 8 < VAR_7) {
   unsigned int VAR_12 = VAR_9->frame.re_lsb / 8;
   unsigned int VAR_13 = VAR_9->frame.re_lsb % 8;

   u8 VAR_14;
   u8 VAR_15 = VAR_8->re_state;

   u8 VAR_16 = (VAR_6[VAR_12] >> VAR_13) & 0x3;

   if ((VAR_15 == 1 && VAR_16 == 0) ||
       (VAR_15 == 2 && VAR_16 == 3)) {
    VAR_14 = 1;
   } else if ((VAR_15 == 2 && VAR_16 == 0) ||
       (VAR_15 == 1 && VAR_16 == 3)) {
    VAR_14 = 3;
   } else {
    VAR_14 = 0;
   }

   VAR_6[VAR_12] = (VAR_6[VAR_12] & ~((u8)3 << VAR_13)) |
     (VAR_14 << VAR_13);

   VAR_8->re_state = VAR_16;
  }
 }

 return 0;
}
