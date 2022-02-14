
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {int * dev_private; } ;
typedef int drm_via_private_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

int FUNC_1(struct drm_device *VAR_1)
{
 drm_via_private_t *VAR_2 = VAR_1->dev_private;

 if (!FUNC_0(VAR_2))
  return -VAR_0;
 return 0;
}
