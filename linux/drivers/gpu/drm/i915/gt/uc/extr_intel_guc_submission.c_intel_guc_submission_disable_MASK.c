
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_guc {int dummy; } ;
struct intel_gt {int awake; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct intel_guc*) ;
 int FUNC_2 (struct intel_gt*) ;
 struct intel_gt* FUNC_3 (struct intel_guc*) ;

void FUNC_4(struct intel_guc *VAR_0)
{
 struct intel_gt *VAR_1 = FUNC_3(VAR_0);

 FUNC_0(VAR_1->awake);

 FUNC_2(VAR_1);
 FUNC_1(VAR_0);
}
