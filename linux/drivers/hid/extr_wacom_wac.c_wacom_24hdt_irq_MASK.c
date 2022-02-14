
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ type; } ;
struct wacom_wac {unsigned char* data; int num_contacts_left; TYPE_2__* shared; TYPE_1__ features; struct input_dev* touch_input; } ;
struct input_dev {int dummy; } ;
struct TYPE_4__ {scalar_t__ touch_down; int is_touch_on; scalar_t__ has_mute_touch_switch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (unsigned char*) ;
 int FUNC_1 (struct input_dev*,unsigned char) ;
 int FUNC_2 (struct input_dev*,int ,int) ;
 int FUNC_3 (struct input_dev*,int) ;
 int FUNC_4 (struct input_dev*) ;
 int FUNC_5 (struct input_dev*,int ,int) ;
 int FUNC_6 (int,int,int,int) ;
 int FUNC_7 (int,int) ;
 scalar_t__ FUNC_8 (struct wacom_wac*) ;
 scalar_t__ FUNC_9 (struct wacom_wac*) ;

__attribute__((used)) static int FUNC_10(struct wacom_wac *VAR_10)
{
 struct input_dev *VAR_11 = VAR_10->touch_input;
 unsigned char *VAR_12 = VAR_10->data;
 int VAR_13;
 int VAR_14 = VAR_12[61];
 int VAR_15 = 0;
 int VAR_16 = 4;
 int VAR_17 = VAR_8;
 int VAR_18 = 2;

 if (VAR_10->shared->has_mute_touch_switch &&
     !VAR_10->shared->is_touch_on) {
  if (!VAR_10->shared->touch_down)
   return 0;
 }

 if (VAR_10->features.type == VAR_7) {
  VAR_14 = VAR_12[63];
  VAR_16 = 10;
  VAR_17 = VAR_9;
  VAR_18 = 0;
 }





 if (VAR_14)
  VAR_10->num_contacts_left = VAR_14;

 VAR_15 = FUNC_7(VAR_16, VAR_10->num_contacts_left);

 for (VAR_13 = 0; VAR_13 < VAR_15; VAR_13++) {
  int VAR_19 = (VAR_17 * VAR_13) + 1;
  bool VAR_20 = (VAR_12[VAR_19] & 0x1) && FUNC_8(VAR_10);
  int VAR_21 = FUNC_1(VAR_11, VAR_12[VAR_19 + 1]);

  if (VAR_21 < 0)
   continue;
  FUNC_3(VAR_11, VAR_21);
  FUNC_2(VAR_11, VAR_6, VAR_20);

  if (VAR_20) {
   int VAR_22 = FUNC_0(&VAR_12[VAR_19 + 2]);
   int VAR_23 = FUNC_0(&VAR_12[VAR_19 + 4 + VAR_18]);

   FUNC_5(VAR_11, VAR_1, VAR_22);
   FUNC_5(VAR_11, VAR_2, VAR_23);

   if (VAR_10->features.type != VAR_7) {
    int VAR_24 = FUNC_0(&VAR_12[VAR_19 + 4]);
    int VAR_25 = FUNC_0(&VAR_12[VAR_19 + 8]);
    int VAR_26 = FUNC_0(&VAR_12[VAR_19 + 10]);
    int VAR_27 = FUNC_0(&VAR_12[VAR_19 + 12]);

    FUNC_5(VAR_11, VAR_3, FUNC_7(VAR_26,VAR_27));
    FUNC_5(VAR_11, VAR_4,
       FUNC_7(VAR_26, VAR_27) + FUNC_6(VAR_22, VAR_23, VAR_24, VAR_25));
    FUNC_5(VAR_11, VAR_5, FUNC_7(VAR_26, VAR_27));
    FUNC_5(VAR_11, VAR_0, VAR_26 > VAR_27);
   }
  }
 }
 FUNC_4(VAR_11);

 VAR_10->num_contacts_left -= VAR_15;
 if (VAR_10->num_contacts_left <= 0) {
  VAR_10->num_contacts_left = 0;
  VAR_10->shared->touch_down = FUNC_9(VAR_10);
 }
 return 1;
}
