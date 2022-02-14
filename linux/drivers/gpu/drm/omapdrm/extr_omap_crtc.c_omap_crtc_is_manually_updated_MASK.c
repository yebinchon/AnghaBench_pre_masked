
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct omap_dss_device {int caps; } ;
struct omap_crtc {TYPE_2__* pipe; } ;
struct drm_crtc {int dummy; } ;
struct TYPE_4__ {TYPE_1__* output; } ;
struct TYPE_3__ {struct omap_dss_device* next; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 struct omap_crtc* FUNC_1 (struct drm_crtc*) ;

__attribute__((used)) static bool FUNC_2(struct drm_crtc *VAR_1)
{
 struct omap_crtc *VAR_2 = FUNC_1(VAR_1);
 struct omap_dss_device *VAR_3 = VAR_2->pipe->output->next;

 if (!VAR_3)
  return 0;

 if (VAR_3->caps & VAR_0) {
  FUNC_0("detected manually updated display!");
  return 1;
 }

 return 0;
}
