
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_uncore {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (struct intel_uncore*) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static void FUNC_3(struct intel_uncore *VAR_0)
{




 FUNC_0(FUNC_2(FUNC_1(VAR_0) == 0, 5000),
    "GT thread status wait timed out\n");
}
