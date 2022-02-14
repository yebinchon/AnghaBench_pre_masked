
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_timeline {int mutex; } ;
struct intel_context {TYPE_1__* engine; } ;
struct i915_request {int dummy; } ;
struct i915_execbuffer {struct intel_context* context; TYPE_1__* engine; } ;
struct TYPE_2__ {int gt; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct intel_timeline*) ;
 int VAR_2 ;
 int FUNC_1 (struct intel_timeline*) ;
 int FUNC_2 (struct i915_execbuffer*,struct intel_context*) ;
 int FUNC_3 (struct i915_execbuffer*,struct intel_context*) ;
 struct i915_request* FUNC_4 (struct intel_context*) ;
 int FUNC_5 (struct i915_request*) ;
 scalar_t__ FUNC_6 (struct i915_request*,int ,int ) ;
 int FUNC_7 (struct intel_context*) ;
 int FUNC_8 (struct intel_context*) ;
 struct intel_timeline* FUNC_9 (struct intel_context*) ;
 int FUNC_10 (struct intel_timeline*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct i915_execbuffer *VAR_3, struct intel_context *VAR_4)
{
 struct intel_timeline *VAR_5;
 struct i915_request *VAR_6;
 int VAR_7;





 VAR_7 = FUNC_11(VAR_4->engine->gt);
 if (VAR_7)
  return VAR_7;






 VAR_7 = FUNC_2(VAR_3, VAR_4);
 if (VAR_7)
  return VAR_7;
 VAR_5 = FUNC_9(VAR_4);
 if (FUNC_0(VAR_5)) {
  VAR_7 = FUNC_1(VAR_5);
  goto err_unpin;
 }

 FUNC_7(VAR_4);
 VAR_6 = FUNC_4(VAR_4);

 FUNC_10(VAR_5);

 if (VAR_6) {
  if (FUNC_6(VAR_6,
          VAR_1,
          VAR_2) < 0) {
   FUNC_5(VAR_6);
   VAR_7 = -VAR_0;
   goto err_exit;
  }

  FUNC_5(VAR_6);
 }

 VAR_3->engine = VAR_4->engine;
 VAR_3->context = VAR_4;
 return 0;

err_exit:
 FUNC_12(&VAR_5->mutex);
 FUNC_8(VAR_4);
 FUNC_10(VAR_5);
err_unpin:
 FUNC_3(VAR_3, VAR_4);
 return VAR_7;
}
