
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_uncore {int dummy; } ;
struct intel_guc {int * params; } ;
struct TYPE_2__ {struct intel_uncore* uncore; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (struct intel_guc*) ;
 int FUNC_2 (struct intel_uncore*,int ) ;
 int FUNC_3 (struct intel_uncore*,int ) ;
 int FUNC_4 (struct intel_uncore*,int ,int ) ;

void FUNC_5(struct intel_guc *VAR_2)
{
 struct intel_uncore *VAR_3 = FUNC_1(VAR_2)->uncore;
 int VAR_4;






 FUNC_2(VAR_3, VAR_0);

 FUNC_4(VAR_3, FUNC_0(0), 0);

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
  FUNC_4(VAR_3, FUNC_0(1 + VAR_4), VAR_2->params[VAR_4]);

 FUNC_3(VAR_3, VAR_0);
}
