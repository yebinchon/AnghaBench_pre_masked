
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {int struct_mutex; } ;


 int FUNC_0 () ;



 int FUNC_1 (int *) ;

__attribute__((used)) static bool FUNC_2(struct drm_device *VAR_0, bool *VAR_1)
{
 switch (FUNC_1(&VAR_0->struct_mutex)) {
 case 130:
  return 0;

 case 128:
  *VAR_1 = 1;
  return 1;

 case 129:
  *VAR_1 = 0;
  return 1;
 }

 FUNC_0();
}
