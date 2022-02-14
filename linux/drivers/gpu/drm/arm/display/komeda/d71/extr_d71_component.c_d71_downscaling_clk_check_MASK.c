
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
typedef int u32 ;
struct komeda_pipeline {int dummy; } ;
struct komeda_data_flow_cfg {int in_w; int in_h; int out_h; } ;
struct drm_display_mode {unsigned long hdisplay; int htotal; int crtc_clock; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct komeda_pipeline *VAR_1,
         struct drm_display_mode *VAR_2,
         unsigned long VAR_3,
         struct komeda_data_flow_cfg *VAR_4)
{
 u32 VAR_5 = VAR_4->in_w;
 u32 VAR_6 = VAR_4->in_h;
 u32 VAR_7 = VAR_4->out_h;
 u64 VAR_8, VAR_9;
 if (VAR_6 == VAR_7) {
  VAR_8 = VAR_5;
  VAR_9 = VAR_2->hdisplay - 3;
 } else {
  VAR_8 = VAR_5 * VAR_6;
  VAR_9 = (VAR_2->htotal - 1) * VAR_7 - 2 * VAR_6;
 }

 return VAR_3 * VAR_9 >= VAR_2->crtc_clock * 1000 * VAR_8 ?
        0 : -VAR_0;
}
