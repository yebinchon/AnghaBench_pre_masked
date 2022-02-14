
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct drm_device* dev; } ;
struct intel_crtc {scalar_t__ overlay; TYPE_1__ base; } ;
struct drm_device {int struct_mutex; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct intel_crtc *VAR_0)
{
 if (VAR_0->overlay) {
  struct drm_device *VAR_1 = VAR_0->base.dev;

  FUNC_1(&VAR_1->struct_mutex);
  (void) FUNC_0(VAR_0->overlay);
  FUNC_2(&VAR_1->struct_mutex);
 }




}
