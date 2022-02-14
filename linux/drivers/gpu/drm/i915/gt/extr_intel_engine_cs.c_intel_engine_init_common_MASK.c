
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_engine_cs {int emit_fini_breadcrumb_dw; struct intel_context* kernel_context; int (* set_default_submission ) (struct intel_engine_cs*) ;} ;
struct intel_context {int dummy; } ;


 scalar_t__ FUNC_0 (struct intel_context*) ;
 int FUNC_1 (struct intel_context*) ;
 struct intel_context* FUNC_2 (struct intel_engine_cs*) ;
 int FUNC_3 (struct intel_context*) ;
 int FUNC_4 (struct intel_context*) ;
 int FUNC_5 (struct intel_engine_cs*) ;
 int FUNC_6 (struct intel_engine_cs*) ;

int FUNC_7(struct intel_engine_cs *VAR_0)
{
 struct intel_context *VAR_1;
 int VAR_2;

 VAR_0->set_default_submission(VAR_0);
 VAR_1 = FUNC_2(VAR_0);
 if (FUNC_0(VAR_1))
  return FUNC_1(VAR_1);

 VAR_0->kernel_context = VAR_1;

 VAR_2 = FUNC_5(VAR_0);
 if (VAR_2 < 0)
  goto err_unpin;

 VAR_0->emit_fini_breadcrumb_dw = VAR_2;

 return 0;

err_unpin:
 FUNC_4(VAR_1);
 FUNC_3(VAR_1);
 return VAR_2;
}
