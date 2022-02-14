
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_engine_cs {TYPE_1__* i915; } ;
struct intel_context {int ring; } ;
struct TYPE_2__ {int kernel_context; } ;


 struct intel_context* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct intel_context*) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 struct intel_context* FUNC_3 (int ,struct intel_engine_cs*) ;
 int FUNC_4 (struct intel_context*) ;
 int FUNC_5 (struct intel_context*) ;

__attribute__((used)) static struct intel_context *
FUNC_6(struct intel_engine_cs *VAR_1)
{
 struct intel_context *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_3(VAR_1->i915->kernel_context, VAR_1);
 if (FUNC_1(VAR_2))
  return VAR_2;

 VAR_2->ring = FUNC_2(VAR_0);

 VAR_3 = FUNC_4(VAR_2);
 if (VAR_3) {
  FUNC_5(VAR_2);
  return FUNC_0(VAR_3);
 }

 return VAR_2;
}
