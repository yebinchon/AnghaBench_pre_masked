
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_fbdev {int cookie; } ;
struct drm_device {int dummy; } ;
struct TYPE_2__ {struct intel_fbdev* fbdev; } ;


 int FUNC_0 (int ,struct intel_fbdev*) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (struct drm_device*) ;

void FUNC_2(struct drm_device *VAR_1)
{
 struct intel_fbdev *VAR_2 = FUNC_1(VAR_1)->fbdev;

 if (!VAR_2)
  return;

 VAR_2->cookie = FUNC_0(VAR_0, VAR_2);
}
