
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_engine_cs {int i915; int sseu; int pool; int barrier_tasks; } ;
struct TYPE_2__ {int sseu; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct intel_engine_cs*) ;
 int FUNC_3 (struct intel_engine_cs*) ;
 int FUNC_4 (struct intel_engine_cs*,int ) ;
 int FUNC_5 (struct intel_engine_cs*) ;
 int FUNC_6 (struct intel_engine_cs*) ;
 int FUNC_7 (struct intel_engine_cs*) ;
 int FUNC_8 (struct intel_engine_cs*) ;
 int FUNC_9 (struct intel_engine_cs*) ;
 int FUNC_10 (struct intel_engine_cs*) ;
 int FUNC_11 (struct intel_engine_cs*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(struct intel_engine_cs *VAR_1)
{
 int VAR_2;

 FUNC_1(&VAR_1->barrier_tasks);

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2)
  return VAR_2;

 FUNC_4(VAR_1, VAR_0);
 FUNC_5(VAR_1);
 FUNC_8(VAR_1);
 FUNC_9(VAR_1);
 FUNC_6(VAR_1);
 FUNC_3(VAR_1);

 FUNC_12(&VAR_1->pool);


 VAR_1->sseu =
  FUNC_13(&FUNC_0(VAR_1->i915)->sseu);

 FUNC_11(VAR_1);
 FUNC_10(VAR_1);
 FUNC_7(VAR_1);

 return 0;
}
