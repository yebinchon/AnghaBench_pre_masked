
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct omap_drm_private {TYPE_1__** channels; } ;
struct TYPE_4__ {struct drm_device* dev; } ;
struct omap_crtc {void (* framedone_handler ) (void*) ;void* framedone_handler_data; int name; TYPE_2__ base; } ;
struct drm_device {int dev; } ;
struct drm_crtc {int dummy; } ;
typedef enum omap_channel { ____Placeholder_omap_channel } omap_channel ;
struct TYPE_3__ {struct drm_crtc* crtc; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int ) ;
 struct omap_crtc* FUNC_2 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_3(
  struct omap_drm_private *VAR_0, enum omap_channel VAR_1,
  void (*VAR_2)(void *), void *VAR_3)
{
 struct drm_crtc *VAR_4 = VAR_0->channels[VAR_1]->crtc;
 struct omap_crtc *VAR_5 = FUNC_2(VAR_4);
 struct drm_device *VAR_6 = VAR_5->base.dev;

 FUNC_1(VAR_6->dev, "unregister framedone %s", VAR_5->name);

 FUNC_0(VAR_5->framedone_handler != VAR_2);
 FUNC_0(VAR_5->framedone_handler_data != VAR_3);

 VAR_5->framedone_handler = ((void*)0);
 VAR_5->framedone_handler_data = ((void*)0);
}
