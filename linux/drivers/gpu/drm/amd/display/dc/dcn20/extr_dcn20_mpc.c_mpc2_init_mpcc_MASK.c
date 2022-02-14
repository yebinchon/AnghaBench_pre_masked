
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int enable; } ;
struct TYPE_3__ {int overlap_only; int global_alpha; int global_gain; int background_color_bpc; int top_gain; int bottom_inside_gain; int bottom_outside_gain; scalar_t__ bottom_gain_mode; } ;
struct mpcc {int mpcc_id; int dpp_id; TYPE_2__ sm_cfg; TYPE_1__ blnd_cfg; int * mpcc_bot; } ;



__attribute__((used)) static void FUNC_0(struct mpcc *VAR_0, int VAR_1)
{
 VAR_0->mpcc_id = VAR_1;
 VAR_0->dpp_id = 0xf;
 VAR_0->mpcc_bot = ((void*)0);
 VAR_0->blnd_cfg.overlap_only = 0;
 VAR_0->blnd_cfg.global_alpha = 0xff;
 VAR_0->blnd_cfg.global_gain = 0xff;
 VAR_0->blnd_cfg.background_color_bpc = 4;
 VAR_0->blnd_cfg.bottom_gain_mode = 0;
 VAR_0->blnd_cfg.top_gain = 0x1f000;
 VAR_0->blnd_cfg.bottom_inside_gain = 0x1f000;
 VAR_0->blnd_cfg.bottom_outside_gain = 0x1f000;
 VAR_0->sm_cfg.enable = 0;
}
