
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tilcdc_drm_private {int wq; } ;
struct drm_crtc {int port; TYPE_1__* dev; } ;
struct TYPE_2__ {struct tilcdc_drm_private* dev_private; } ;


 int FUNC_0 (struct drm_crtc*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_4(struct drm_crtc *VAR_0)
{
 struct tilcdc_drm_private *VAR_1 = VAR_0->dev->dev_private;

 FUNC_3(VAR_0);

 FUNC_1(VAR_1->wq);

 FUNC_2(VAR_0->port);
 FUNC_0(VAR_0);
}
