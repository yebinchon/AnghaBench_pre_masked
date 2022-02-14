
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


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 struct omap_crtc* FUNC_1 (struct drm_crtc*) ;

__attribute__((used)) static int FUNC_2(
  struct omap_drm_private *VAR_1, enum omap_channel VAR_2,
  void (*VAR_3)(void *), void *VAR_4)
{
 struct drm_crtc *VAR_5 = VAR_1->channels[VAR_2]->crtc;
 struct omap_crtc *VAR_6 = FUNC_1(VAR_5);
 struct drm_device *VAR_7 = VAR_6->base.dev;

 if (VAR_6->framedone_handler)
  return -VAR_0;

 FUNC_0(VAR_7->dev, "register framedone %s", VAR_6->name);

 VAR_6->framedone_handler = VAR_3;
 VAR_6->framedone_handler_data = VAR_4;

 return 0;
}
