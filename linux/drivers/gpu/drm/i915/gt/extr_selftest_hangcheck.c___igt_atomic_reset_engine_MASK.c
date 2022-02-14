
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tasklet_struct {int dummy; } ;
struct TYPE_2__ {struct tasklet_struct tasklet; } ;
struct intel_engine_cs {int name; TYPE_1__ execlists; } ;
struct igt_atomic_section {int name; int (* critical_section_end ) () ;int (* critical_section_begin ) () ;} ;


 int FUNC_0 (char*,int ,char const*,int ) ;
 int FUNC_1 (struct intel_engine_cs*,int *) ;
 int FUNC_2 (char*,int ,char const*,int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct tasklet_struct* const) ;
 int FUNC_6 (struct tasklet_struct* const) ;

__attribute__((used)) static int FUNC_7(struct intel_engine_cs *VAR_0,
         const struct igt_atomic_section *VAR_1,
         const char *VAR_2)
{
 struct tasklet_struct * const VAR_3 = &VAR_0->execlists.tasklet;
 int VAR_4;

 FUNC_0("i915_reset_engine(%s:%s) under %s\n",
    VAR_0->name, VAR_2, VAR_1->name);

 FUNC_5(VAR_3);
 VAR_1->critical_section_begin();

 VAR_4 = FUNC_1(VAR_0, ((void*)0));

 VAR_1->critical_section_end();
 FUNC_6(VAR_3);

 if (VAR_4)
  FUNC_2("i915_reset_engine(%s:%s) failed under %s\n",
         VAR_0->name, VAR_2, VAR_1->name);

 return VAR_4;
}
