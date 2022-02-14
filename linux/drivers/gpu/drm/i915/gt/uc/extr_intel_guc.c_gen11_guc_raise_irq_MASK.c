
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_guc {int dummy; } ;
struct intel_gt {int uncore; } ;


 int VAR_0 ;
 struct intel_gt* FUNC_0 (struct intel_guc*) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct intel_guc *VAR_1)
{
 struct intel_gt *VAR_2 = FUNC_0(VAR_1);

 FUNC_1(VAR_2->uncore, VAR_0, 0);
}
