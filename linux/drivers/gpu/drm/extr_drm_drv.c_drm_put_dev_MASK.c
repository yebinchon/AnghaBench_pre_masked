
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_device*) ;

void FUNC_4(struct drm_device *VAR_0)
{
 FUNC_0("\n");

 if (!VAR_0) {
  FUNC_1("cleanup called no dev\n");
  return;
 }

 FUNC_3(VAR_0);
 FUNC_2(VAR_0);
}
