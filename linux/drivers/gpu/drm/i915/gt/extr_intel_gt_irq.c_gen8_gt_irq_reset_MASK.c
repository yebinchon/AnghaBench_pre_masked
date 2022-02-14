
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_uncore {int dummy; } ;
struct intel_gt {struct intel_uncore* uncore; } ;


 int FUNC_0 (struct intel_uncore*,int ,int) ;
 int VAR_0 ;

void FUNC_1(struct intel_gt *VAR_1)
{
 struct intel_uncore *VAR_2 = VAR_1->uncore;

 FUNC_0(VAR_2, VAR_0, 0);
 FUNC_0(VAR_2, VAR_0, 1);
 FUNC_0(VAR_2, VAR_0, 2);
 FUNC_0(VAR_2, VAR_0, 3);
}
