
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_uncore {int dummy; } ;
struct intel_uc {int dummy; } ;
struct intel_gt {struct intel_uncore* uncore; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct intel_uncore*,int ) ;
 struct intel_gt* FUNC_1 (struct intel_uc*) ;

__attribute__((used)) static bool FUNC_2(struct intel_uc *VAR_4)
{
 struct intel_gt *VAR_5 = FUNC_1(VAR_4);
 struct intel_uncore *VAR_6 = VAR_5->uncore;

 return (FUNC_0(VAR_6, VAR_2) & VAR_3) ||
        (FUNC_0(VAR_6, VAR_0) & VAR_1);
}
