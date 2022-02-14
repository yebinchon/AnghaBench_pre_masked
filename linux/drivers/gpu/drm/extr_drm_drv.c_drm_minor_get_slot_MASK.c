
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_minor {int dummy; } ;
struct drm_device {struct drm_minor* render; struct drm_minor* primary; } ;


 int FUNC_0 () ;



__attribute__((used)) static struct drm_minor **FUNC_1(struct drm_device *VAR_0,
          unsigned int VAR_1)
{
 switch (VAR_1) {
 case 129:
  return &VAR_0->primary;
 case 128:
  return &VAR_0->render;
 default:
  FUNC_0();
 }
}
