
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_gt {TYPE_1__* i915; } ;
typedef int intel_wakeref_t ;
struct TYPE_2__ {int runtime_pm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct intel_gt*) ;
 int FUNC_2 (struct intel_gt*) ;
 scalar_t__ FUNC_3 (struct intel_gt*) ;
 int FUNC_4 (struct intel_gt*,int ,int *) ;
 int FUNC_5 (struct intel_gt*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static int FUNC_8(void *VAR_2)
{
 struct intel_gt *VAR_3 = VAR_2;
 intel_wakeref_t VAR_4;



 FUNC_1(VAR_3);
 VAR_4 = FUNC_6(&VAR_3->i915->runtime_pm);

 FUNC_5(VAR_3);

 FUNC_0(!FUNC_3(VAR_3));
 FUNC_4(VAR_3, VAR_0, ((void*)0));

 FUNC_7(&VAR_3->i915->runtime_pm, VAR_4);
 FUNC_2(VAR_3);

 return FUNC_3(VAR_3) ? -VAR_1 : 0;
}
