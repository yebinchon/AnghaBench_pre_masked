
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct videomode {int dummy; } ;
struct omap_drm_private {TYPE_1__** channels; } ;
struct omap_crtc {struct videomode vm; int name; } ;
struct drm_crtc {int dummy; } ;
typedef enum omap_channel { ____Placeholder_omap_channel } omap_channel ;
struct TYPE_2__ {struct drm_crtc* crtc; } ;


 int FUNC_0 (char*,int ) ;
 struct omap_crtc* FUNC_1 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_2(struct omap_drm_private *VAR_0,
  enum omap_channel VAR_1,
  const struct videomode *VAR_2)
{
 struct drm_crtc *VAR_3 = VAR_0->channels[VAR_1]->crtc;
 struct omap_crtc *VAR_4 = FUNC_1(VAR_3);

 FUNC_0("%s", VAR_4->name);
 VAR_4->vm = *VAR_2;
}
