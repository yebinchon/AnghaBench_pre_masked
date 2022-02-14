
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sunxi_engine {TYPE_1__* ops; } ;
struct sun4i_crtc {struct sunxi_engine* engine; } ;
struct drm_crtc_state {int dummy; } ;
struct drm_crtc {int dummy; } ;
struct TYPE_2__ {int (* atomic_check ) (struct sunxi_engine*,struct drm_crtc_state*) ;} ;


 struct sun4i_crtc* FUNC_0 (struct drm_crtc*) ;
 int FUNC_1 (struct sunxi_engine*,struct drm_crtc_state*) ;

__attribute__((used)) static int FUNC_2(struct drm_crtc *VAR_0,
        struct drm_crtc_state *VAR_1)
{
 struct sun4i_crtc *VAR_2 = FUNC_0(VAR_0);
 struct sunxi_engine *VAR_3 = VAR_2->engine;
 int VAR_4 = 0;

 if (VAR_3 && VAR_3->ops && VAR_3->ops->atomic_check)
  VAR_4 = VAR_3->ops->atomic_check(VAR_3, VAR_1);

 return VAR_4;
}
