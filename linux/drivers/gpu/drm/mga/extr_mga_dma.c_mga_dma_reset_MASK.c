
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_file {int dummy; } ;
struct drm_device {scalar_t__ dev_private; } ;
typedef int drm_mga_private_t ;


 int FUNC_0 (struct drm_device*,struct drm_file*) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct drm_device *VAR_0, void *VAR_1,
    struct drm_file *VAR_2)
{
 drm_mga_private_t *VAR_3 = (drm_mga_private_t *) VAR_0->dev_private;

 FUNC_0(VAR_0, VAR_2);

 return FUNC_1(VAR_3);
}
