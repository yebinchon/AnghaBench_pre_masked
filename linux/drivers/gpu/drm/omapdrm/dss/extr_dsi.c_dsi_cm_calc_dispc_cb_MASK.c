
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct videomode {unsigned long pixelclock; int hsync_len; int hfront_porch; int hback_porch; int vsync_len; scalar_t__ vback_porch; scalar_t__ vfront_porch; int vactive; int hactive; } ;
struct TYPE_3__ {int lck_div; int pck_div; unsigned long lck; unsigned long pck; } ;
struct dsi_clk_calc_ctx {TYPE_2__* config; TYPE_1__ dispc_cinfo; struct videomode vm; } ;
struct TYPE_4__ {struct videomode* vm; } ;



__attribute__((used)) static bool FUNC_0(int VAR_0, int VAR_1, unsigned long VAR_2,
  unsigned long VAR_3, void *VAR_4)
{
 struct dsi_clk_calc_ctx *VAR_5 = VAR_4;
 struct videomode *VAR_6 = &VAR_5->vm;

 VAR_5->dispc_cinfo.lck_div = VAR_0;
 VAR_5->dispc_cinfo.pck_div = VAR_1;
 VAR_5->dispc_cinfo.lck = VAR_2;
 VAR_5->dispc_cinfo.pck = VAR_3;

 *VAR_6 = *VAR_5->config->vm;
 VAR_6->pixelclock = VAR_3;
 VAR_6->hactive = VAR_5->config->vm->hactive;
 VAR_6->vactive = VAR_5->config->vm->vactive;
 VAR_6->hsync_len = VAR_6->hfront_porch = VAR_6->hback_porch = VAR_6->vsync_len = 1;
 VAR_6->vfront_porch = VAR_6->vback_porch = 0;

 return 1;
}
