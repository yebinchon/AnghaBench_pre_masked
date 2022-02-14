
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct i915_gpu_state {char const* error_msg; TYPE_2__* engine; int i915; } ;
typedef int intel_engine_mask_t ;
struct TYPE_3__ {int pid; int comm; } ;
struct TYPE_4__ {TYPE_1__ context; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct i915_gpu_state*) ;
 int FUNC_2 (char const*,int,char*,char const*,...) ;

__attribute__((used)) static const char *
FUNC_3(struct i915_gpu_state *VAR_0,
   intel_engine_mask_t VAR_1, const char *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_2(VAR_0->error_msg, sizeof(VAR_0->error_msg),
   "GPU HANG: ecode %d:%x:0x%08x",
   FUNC_0(VAR_0->i915), VAR_1,
   FUNC_1(VAR_0));
 if (VAR_0->engine) {

  VAR_3 += FUNC_2(VAR_0->error_msg + VAR_3,
     sizeof(VAR_0->error_msg) - VAR_3,
     ", in %s [%d]",
     VAR_0->engine->context.comm,
     VAR_0->engine->context.pid);
 }
 if (VAR_2)
  VAR_3 += FUNC_2(VAR_0->error_msg + VAR_3,
     sizeof(VAR_0->error_msg) - VAR_3,
     ", %s", VAR_2);

 return VAR_0->error_msg;
}
