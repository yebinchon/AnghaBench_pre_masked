
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ipu_di {int id; TYPE_1__* ipu; } ;
struct di_sync_config {int run_count; int offset_count; int repeat_count; int cnt_up; int cnt_down; int cnt_polarity_clr_src; int cnt_polarity_trigger_src; int cnt_clr_src; int cnt_polarity_gen_en; int offset_src; int run_src; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int VAR_0 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int ,char*,int ) ;
 int FUNC_14 (struct ipu_di*,int ) ;
 int FUNC_15 (struct ipu_di*,int,int ) ;

__attribute__((used)) static void FUNC_16(struct ipu_di *VAR_1, struct di_sync_config *VAR_2,
  int VAR_3, int VAR_4)
{
 u32 VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  struct di_sync_config *VAR_7 = &VAR_2[VAR_6];
  int VAR_8 = VAR_3 + VAR_6 + 1;

  if ((VAR_7->run_count >= 0x1000) || (VAR_7->offset_count >= 0x1000) ||
    (VAR_7->repeat_count >= 0x1000) ||
    (VAR_7->cnt_up >= 0x400) ||
    (VAR_7->cnt_down >= 0x400)) {
   FUNC_13(VAR_1->ipu->dev, "DI%d counters out of range.\n",
     VAR_1->id);
   return;
  }

  VAR_5 = FUNC_4(VAR_7->run_count) |
   FUNC_5(VAR_7->run_src) |
   FUNC_2(VAR_7->offset_count) |
   FUNC_3(VAR_7->offset_src);
  FUNC_15(VAR_1, VAR_5, FUNC_1(VAR_8));

  VAR_5 = FUNC_10(VAR_7->cnt_polarity_gen_en) |
   FUNC_7(VAR_7->cnt_clr_src) |
   FUNC_11(
     VAR_7->cnt_polarity_trigger_src) |
   FUNC_9(VAR_7->cnt_polarity_clr_src) |
   FUNC_8(VAR_7->cnt_down) |
   FUNC_12(VAR_7->cnt_up);


  if (VAR_7->repeat_count == 0)
   VAR_5 |= VAR_0;

  FUNC_15(VAR_1, VAR_5, FUNC_6(VAR_8));

  VAR_5 = FUNC_14(VAR_1, FUNC_0(VAR_8));
  VAR_5 &= ~(0xffff << (16 * ((VAR_8 - 1) & 0x1)));
  VAR_5 |= VAR_7->repeat_count << (16 * ((VAR_8 - 1) & 0x1));
  FUNC_15(VAR_1, VAR_5, FUNC_0(VAR_8));
 }
}
