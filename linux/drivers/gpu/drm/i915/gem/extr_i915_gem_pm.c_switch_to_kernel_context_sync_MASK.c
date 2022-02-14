
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct intel_gt {TYPE_2__* i915; } ;
struct TYPE_7__ {scalar_t__ reset; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_6__ {TYPE_1__ drm; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (TYPE_2__*,int,int ) ;
 TYPE_3__ VAR_4 ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (struct intel_gt*) ;
 scalar_t__ FUNC_5 (struct intel_gt*) ;
 int FUNC_6 (struct intel_gt*) ;

__attribute__((used)) static bool FUNC_7(struct intel_gt *VAR_5)
{
 bool VAR_6 = !FUNC_4(VAR_5);

 do {
  if (FUNC_2(VAR_5->i915,
        VAR_3 |
        VAR_2,
        VAR_1) == -VAR_0) {

   if (VAR_4.reset) {
    FUNC_1(VAR_5->i915->drm.dev,
     "Failed to idle engines, declaring wedged!\n");
    FUNC_0();
   }





   FUNC_6(VAR_5);
   VAR_6 = 0;
  }
 } while (FUNC_3(VAR_5->i915) && VAR_6);

 if (FUNC_5(VAR_5))
  VAR_6 = 0;

 return VAR_6;
}
