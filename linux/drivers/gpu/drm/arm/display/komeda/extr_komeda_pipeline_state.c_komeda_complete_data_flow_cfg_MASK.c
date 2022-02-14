
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct komeda_scaler {int hsize; } ;
struct TYPE_5__ {TYPE_1__* pipeline; } ;
struct komeda_layer {TYPE_2__ base; } ;
struct komeda_data_flow_cfg {int in_w; int in_h; int total_in_w; int total_in_h; int total_out_w; int out_w; int en_scaling; int out_h; int en_img_enhancement; int en_split; int is_yuv; int rot; int pixel_blend_mode; } ;
struct drm_framebuffer {TYPE_3__* format; } ;
struct TYPE_6__ {int is_yuv; int has_alpha; } ;
struct TYPE_4__ {struct komeda_scaler** scalers; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int,int) ;

void FUNC_3(struct komeda_layer *VAR_1,
       struct komeda_data_flow_cfg *VAR_2,
       struct drm_framebuffer *VAR_3)
{
 struct komeda_scaler *VAR_4 = VAR_1->base.pipeline->scalers[0];
 u32 VAR_5 = VAR_2->in_w;
 u32 VAR_6 = VAR_2->in_h;

 VAR_2->total_in_w = VAR_2->in_w;
 VAR_2->total_in_h = VAR_2->in_h;
 VAR_2->total_out_w = VAR_2->out_w;


 if (!VAR_3->format->has_alpha)
  VAR_2->pixel_blend_mode = VAR_0;

 if (FUNC_0(VAR_2->rot))
  FUNC_2(VAR_5, VAR_6);

 VAR_2->en_scaling = (VAR_5 != VAR_2->out_w) || (VAR_6 != VAR_2->out_h);
 VAR_2->is_yuv = VAR_3->format->is_yuv;


 VAR_2->en_img_enhancement = VAR_2->out_w >= 2 * VAR_5 ||
        VAR_2->out_h >= 2 * VAR_6;




 if (VAR_2->en_scaling && VAR_4)
  VAR_2->en_split = !FUNC_1(&VAR_4->hsize, VAR_2->in_w) ||
      !FUNC_1(&VAR_4->hsize, VAR_2->out_w);
}
