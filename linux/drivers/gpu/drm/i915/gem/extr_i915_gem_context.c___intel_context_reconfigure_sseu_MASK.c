
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_sseu {int dummy; } ;
struct intel_context {struct intel_sseu sseu; TYPE_1__* engine; } ;
typedef int sseu ;
struct TYPE_2__ {int i915; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct intel_context*,struct intel_sseu) ;
 int FUNC_3 (struct intel_context*) ;
 int FUNC_4 (struct intel_context*) ;
 int FUNC_5 (struct intel_sseu*,struct intel_sseu*,int) ;

__attribute__((used)) static int
FUNC_6(struct intel_context *VAR_0,
     struct intel_sseu VAR_1)
{
 int VAR_2;

 FUNC_0(FUNC_1(VAR_0->engine->i915) < 8);

 VAR_2 = FUNC_3(VAR_0);
 if (VAR_2)
  return VAR_2;


 if (!FUNC_5(&VAR_0->sseu, &VAR_1, sizeof(VAR_1)))
  goto unlock;

 VAR_2 = FUNC_2(VAR_0, VAR_1);
 if (!VAR_2)
  VAR_0->sseu = VAR_1;

unlock:
 FUNC_4(VAR_0);
 return VAR_2;
}
