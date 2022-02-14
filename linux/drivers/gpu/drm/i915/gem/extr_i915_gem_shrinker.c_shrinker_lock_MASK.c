
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mutex {int dummy; } ;
struct TYPE_2__ {struct mutex struct_mutex; } ;
struct drm_i915_private {TYPE_1__ drm; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 unsigned int VAR_1 ;



 int FUNC_1 (struct mutex*,int ) ;
 int FUNC_2 (struct mutex*) ;

__attribute__((used)) static bool FUNC_3(struct drm_i915_private *VAR_2,
     unsigned int VAR_3,
     bool *VAR_4)
{
 struct mutex *VAR_5 = &VAR_2->drm.struct_mutex;

 switch (FUNC_2(VAR_5)) {
 case 129:
  *VAR_4 = 0;
  return 1;

 case 130:
  *VAR_4 = 0;
  if (VAR_3 & VAR_1 &&
      FUNC_1(VAR_5, VAR_0) == 0)
   *VAR_4 = 1;
  return *VAR_4;

 case 128:
  *VAR_4 = 1;
  return 1;
 }

 FUNC_0();
}
