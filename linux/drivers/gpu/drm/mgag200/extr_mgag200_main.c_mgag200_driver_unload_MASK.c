
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mga_device {int dummy; } ;
struct drm_device {struct mga_device* dev_private; } ;


 int FUNC_0 (struct drm_device*) ;
 int FUNC_1 (struct mga_device*) ;
 int FUNC_2 (struct mga_device*) ;

void FUNC_3(struct drm_device *VAR_0)
{
 struct mga_device *VAR_1 = VAR_0->dev_private;

 if (VAR_1 == ((void*)0))
  return;
 FUNC_2(VAR_1);
 FUNC_0(VAR_0);
 FUNC_1(VAR_1);
 VAR_0->dev_private = ((void*)0);
}
