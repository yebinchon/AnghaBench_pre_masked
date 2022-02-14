
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct videomode {int dummy; } ;
struct omap_crtc {struct videomode vm; } ;
struct drm_crtc {int dummy; } ;


 struct omap_crtc* FUNC_0 (struct drm_crtc*) ;

struct videomode *FUNC_1(struct drm_crtc *VAR_0)
{
 struct omap_crtc *VAR_1 = FUNC_0(VAR_0);
 return &VAR_1->vm;
}
