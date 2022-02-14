
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int clock; } ;
struct TYPE_4__ {TYPE_1__ mode; } ;
struct nv17_tv_norm_params {scalar_t__ kind; TYPE_2__ ctv_enc_mode; } ;
struct drm_encoder {int dummy; } ;
struct drm_display_mode {int clock; } ;


 scalar_t__ VAR_0 ;
 struct nv17_tv_norm_params* FUNC_0 (struct drm_encoder*) ;
 scalar_t__ FUNC_1 (struct drm_encoder*) ;

__attribute__((used)) static bool FUNC_2(struct drm_encoder *VAR_1,
          const struct drm_display_mode *VAR_2,
          struct drm_display_mode *VAR_3)
{
 struct nv17_tv_norm_params *VAR_4 = FUNC_0(VAR_1);

 if (FUNC_1(VAR_1))
  return 0;

 if (VAR_4->kind == VAR_0)
  VAR_3->clock = VAR_4->ctv_enc_mode.mode.clock;
 else
  VAR_3->clock = 90000;

 return 1;
}
