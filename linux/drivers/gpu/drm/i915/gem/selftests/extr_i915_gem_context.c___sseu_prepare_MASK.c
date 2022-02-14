
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_context {TYPE_1__* engine; } ;
struct igt_spinner {int dummy; } ;
struct i915_request {int dummy; } ;
struct TYPE_2__ {int gt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct i915_request*) ;
 int VAR_3 ;
 int FUNC_1 (struct i915_request*) ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_2 (struct igt_spinner**) ;
 int FUNC_3 (struct i915_request*) ;
 struct i915_request* FUNC_4 (struct igt_spinner*,struct intel_context*,int ) ;
 int FUNC_5 (struct igt_spinner*) ;
 int FUNC_6 (struct igt_spinner*) ;
 int FUNC_7 (struct igt_spinner*,int ) ;
 int FUNC_8 (struct igt_spinner*,struct i915_request*) ;
 int FUNC_9 (int ) ;
 struct igt_spinner* FUNC_10 (int,int ) ;
 int FUNC_11 (char*,char const*) ;

__attribute__((used)) static int
FUNC_12(const char *VAR_6,
        unsigned int VAR_7,
        struct intel_context *VAR_8,
        struct igt_spinner **VAR_9)
{
 struct i915_request *VAR_10;
 int VAR_11;

 *VAR_9 = ((void*)0);
 if (!(VAR_7 & (VAR_4 | VAR_5)))
  return 0;

 *VAR_9 = FUNC_10(sizeof(**VAR_9), VAR_2);
 if (!*VAR_9)
  return -VAR_0;

 VAR_11 = FUNC_7(*VAR_9, VAR_8->engine->gt);
 if (VAR_11)
  goto err_free;

 VAR_10 = FUNC_4(*VAR_9, VAR_8, VAR_3);
 if (FUNC_0(VAR_10)) {
  VAR_11 = FUNC_1(VAR_10);
  goto err_fini;
 }

 FUNC_3(VAR_10);

 if (!FUNC_8(*VAR_9, VAR_10)) {
  FUNC_11("%s: Spinner failed to start!\n", VAR_6);
  VAR_11 = -VAR_1;
  goto err_end;
 }

 return 0;

err_end:
 FUNC_5(*VAR_9);
err_fini:
 FUNC_6(*VAR_9);
err_free:
 FUNC_9(FUNC_2(VAR_9));
 return VAR_11;
}
