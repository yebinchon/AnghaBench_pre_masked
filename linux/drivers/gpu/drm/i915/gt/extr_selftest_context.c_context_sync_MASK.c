
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int request; } ;
struct intel_timeline {int mutex; TYPE_1__ last_request; } ;
struct intel_context {struct intel_timeline* timeline; } ;
struct i915_request {int dummy; } ;


 int VAR_0 ;
 struct i915_request* FUNC_0 (struct i915_request*) ;
 int FUNC_1 (struct i915_request*) ;
 int FUNC_2 (struct i915_request*) ;
 long FUNC_3 (struct i915_request*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct i915_request* FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 () ;

__attribute__((used)) static int FUNC_9(struct intel_context *VAR_1)
{
 struct intel_timeline *VAR_2 = VAR_1->timeline;
 int VAR_3 = 0;

 FUNC_4(&VAR_2->mutex);
 do {
  struct i915_request *VAR_4;
  long VAR_5;

  FUNC_7();
  VAR_4 = FUNC_6(VAR_2->last_request.request);
  if (VAR_4)
   VAR_4 = FUNC_0(VAR_4);
  FUNC_8();
  if (!VAR_4)
   break;

  VAR_5 = FUNC_3(VAR_4, 0, VAR_0 / 10);
  if (VAR_5 < 0)
   VAR_3 = VAR_5;
  else
   FUNC_2(VAR_4);

  FUNC_1(VAR_4);
 } while (!VAR_3);
 FUNC_5(&VAR_2->mutex);

 return VAR_3;
}
