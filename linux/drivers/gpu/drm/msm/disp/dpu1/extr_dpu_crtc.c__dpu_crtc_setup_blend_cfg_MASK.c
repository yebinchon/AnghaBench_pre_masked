
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct drm_format_name_buf {int dummy; } ;
struct dpu_plane_state {int stage; } ;
struct TYPE_4__ {int (* setup_blend_config ) (struct dpu_hw_mixer*,int ,int,int ,int) ;} ;
struct dpu_hw_mixer {TYPE_2__ ops; } ;
struct TYPE_3__ {int pixel_format; } ;
struct dpu_format {int alpha_enable; TYPE_1__ base; } ;
struct dpu_crtc_mixer {struct dpu_hw_mixer* hw_lm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int ,int ,int) ;
 int FUNC_1 (int ,struct drm_format_name_buf*) ;
 int FUNC_2 (struct dpu_hw_mixer*,int ,int,int ,int) ;

__attribute__((used)) static void FUNC_3(struct dpu_crtc_mixer *VAR_5,
  struct dpu_plane_state *VAR_6, struct dpu_format *VAR_7)
{
 struct dpu_hw_mixer *VAR_8 = VAR_5->hw_lm;
 uint32_t VAR_9;
 struct drm_format_name_buf VAR_10;


 VAR_9 = VAR_3 |
  VAR_0;

 if (VAR_7->alpha_enable) {

  VAR_9 = VAR_4 |
   VAR_1 |
   VAR_2;
 }

 VAR_8->ops.setup_blend_config(VAR_8, VAR_6->stage,
    0xFF, 0, VAR_9);

 FUNC_0("format:%s, alpha_en:%u blend_op:0x%x\n",
  FUNC_1(VAR_7->base.pixel_format, &VAR_10),
  VAR_7->alpha_enable, VAR_9);
}
