
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int hactive; int hsync_len; int hback_porch; int hfront_porch; int vactive; int vsync_len; int vback_porch; int vfront_porch; } ;
struct ipu_di_signal_cfg {int v_to_h_sync; int hsync_pin; int vsync_pin; TYPE_1__ mode; } ;
struct ipu_di {int dummy; } ;
struct di_sync_config {int run_count; int offset_count; int cnt_polarity_gen_en; int cnt_down; int repeat_count; int cnt_clr_src; int cnt_polarity_trigger_src; int offset_src; int run_src; } ;


 int FUNC_0 (struct di_sync_config*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct ipu_di*,struct di_sync_config*,int ,int ) ;
 int FUNC_2 (struct ipu_di*,int,int ) ;

__attribute__((used)) static void FUNC_3(struct ipu_di *VAR_5,
  struct ipu_di_signal_cfg *VAR_6, int VAR_7)
{
 u32 VAR_8 = VAR_6->mode.hactive + VAR_6->mode.hsync_len +
  VAR_6->mode.hback_porch + VAR_6->mode.hfront_porch;
 u32 VAR_9 = VAR_6->mode.vactive + VAR_6->mode.vsync_len +
  VAR_6->mode.vback_porch + VAR_6->mode.vfront_porch;
 struct di_sync_config VAR_10[] = {
  {

   .run_count = VAR_8 - 1,
   .run_src = VAR_1,
  } , {

   .run_count = VAR_8 - 1,
   .run_src = VAR_1,
   .offset_count = VAR_7 * VAR_6->v_to_h_sync,
   .offset_src = VAR_1,
   .cnt_polarity_gen_en = 1,
   .cnt_polarity_trigger_src = VAR_1,
   .cnt_down = VAR_6->mode.hsync_len * 2,
  } , {

   .run_count = VAR_9 - 1,
   .run_src = VAR_3,
   .cnt_polarity_gen_en = 1,
   .cnt_polarity_trigger_src = VAR_3,
   .cnt_down = VAR_6->mode.vsync_len * 2,
  } , {

   .run_src = VAR_2,
   .offset_count = VAR_6->mode.vsync_len +
     VAR_6->mode.vback_porch,
   .offset_src = VAR_2,
   .repeat_count = VAR_6->mode.vactive,
   .cnt_clr_src = VAR_4,
  } , {

   .run_src = VAR_1,
   .offset_count = VAR_6->mode.hsync_len +
     VAR_6->mode.hback_porch,
   .offset_src = VAR_1,
   .repeat_count = VAR_6->mode.hactive,
   .cnt_clr_src = 5,
  } , {

  } , {

  } , {

  } , {

  },
 };

 struct di_sync_config VAR_11[] = {
  {

   .run_count = VAR_8 - 1,
   .run_src = VAR_1,
  } , {

   .run_count = VAR_9 - 1,
   .run_src = VAR_3,
  } , {

   .run_src = VAR_3,
   .offset_count = VAR_6->mode.vsync_len +
     VAR_6->mode.vback_porch,
   .offset_src = VAR_3,
   .repeat_count = VAR_6->mode.vactive,
   .cnt_clr_src = 3 ,
  } , {

   .run_count = VAR_8 - 1,
   .run_src = VAR_1,
   .offset_count = VAR_7 * VAR_6->v_to_h_sync + 18,
   .offset_src = VAR_1,
   .cnt_polarity_gen_en = 1,
   .cnt_polarity_trigger_src = VAR_1,
   .cnt_down = VAR_6->mode.hsync_len * 2,
  } , {

   .run_src = VAR_1,
   .offset_count = VAR_6->mode.hsync_len +
     VAR_6->mode.hback_porch,
   .offset_src = VAR_1,
   .repeat_count = VAR_6->mode.hactive,
   .cnt_clr_src = 4,
  } , {

   .run_count = VAR_9 - 1,
   .run_src = VAR_3,
   .offset_count = 1,
   .offset_src = VAR_3,
   .cnt_polarity_gen_en = 1,
   .cnt_polarity_trigger_src = VAR_3,
   .cnt_down = VAR_6->mode.vsync_len * 2,
  } , {

   .run_count = VAR_8 - 1,
   .run_src = VAR_1,
   .offset_count = VAR_7 * VAR_6->v_to_h_sync + 18,
   .offset_src = VAR_1,
   .cnt_polarity_gen_en = 1,
   .cnt_polarity_trigger_src = VAR_1,
   .cnt_down = VAR_6->mode.hsync_len * 2,
  } , {

   .run_count = VAR_9 - 1,
   .run_src = VAR_3,
   .offset_count = 1,
   .offset_src = VAR_3,
   .cnt_polarity_gen_en = 1,
   .cnt_polarity_trigger_src = VAR_3,
   .cnt_down = VAR_6->mode.vsync_len * 2,
  } , {

  },
 };

 FUNC_2(VAR_5, VAR_9 - 1, VAR_0);
 if (VAR_6->hsync_pin == 2 && VAR_6->vsync_pin == 3)
  FUNC_1(VAR_5, VAR_10, 0, FUNC_0(VAR_10));
 else
  FUNC_1(VAR_5, VAR_11, 0, FUNC_0(VAR_11));
}
