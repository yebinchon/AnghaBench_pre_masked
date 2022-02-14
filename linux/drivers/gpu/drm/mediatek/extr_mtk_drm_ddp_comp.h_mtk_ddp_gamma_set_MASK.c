
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtk_ddp_comp {TYPE_1__* funcs; } ;
struct drm_crtc_state {int dummy; } ;
struct TYPE_2__ {int (* gamma_set ) (struct mtk_ddp_comp*,struct drm_crtc_state*) ;} ;


 int FUNC_0 (struct mtk_ddp_comp*,struct drm_crtc_state*) ;

__attribute__((used)) static inline void FUNC_1(struct mtk_ddp_comp *VAR_0,
         struct drm_crtc_state *VAR_1)
{
 if (VAR_0->funcs && VAR_0->funcs->gamma_set)
  VAR_0->funcs->gamma_set(VAR_0, VAR_1);
}
