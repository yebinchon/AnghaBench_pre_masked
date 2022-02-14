
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_uncore {int dummy; } ;
struct intel_gt {struct intel_uncore* uncore; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct intel_uncore*,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct intel_gt *VAR_0, u32 VAR_1)
{
 struct intel_uncore *VAR_2 = VAR_0->uncore;

 FUNC_4(VAR_2, FUNC_0(VAR_1), 0);
 FUNC_4(VAR_2, FUNC_1(VAR_1), 0);
 FUNC_4(VAR_2, FUNC_3(VAR_1), 0);
 FUNC_4(VAR_2, FUNC_2(VAR_1), 0);
}
