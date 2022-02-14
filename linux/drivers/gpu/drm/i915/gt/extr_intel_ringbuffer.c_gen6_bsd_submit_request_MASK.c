
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_uncore {int dummy; } ;
struct i915_request {TYPE_1__* engine; } ;
struct TYPE_2__ {struct intel_uncore* uncore; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct intel_uncore*,int ,int ,int ,int,int ,int *) ;
 int FUNC_4 (struct i915_request*) ;
 int FUNC_5 (struct intel_uncore*,int ) ;
 int FUNC_6 (struct intel_uncore*,int ) ;
 int FUNC_7 (struct intel_uncore*,int ,int) ;
 int FUNC_8 (struct intel_uncore*,int ,int ) ;

__attribute__((used)) static void FUNC_9(struct i915_request *VAR_5)
{
 struct intel_uncore *VAR_6 = VAR_5->engine->uncore;

 FUNC_5(VAR_6, VAR_0);






 FUNC_8(VAR_6, VAR_4,
         FUNC_2(VAR_3));


 FUNC_7(VAR_6, VAR_1, 0x0);


 if (FUNC_3(VAR_6,
      VAR_4,
      VAR_2,
      0,
      1000, 0, ((void*)0)))
  FUNC_0("timed out waiting for the BSD ring to wake up\n");


 FUNC_4(VAR_5);




 FUNC_8(VAR_6, VAR_4,
         FUNC_1(VAR_3));

 FUNC_6(VAR_6, VAR_0);
}
