
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_engine_cs {struct intel_context* kernel_context; int pool; } ;
struct intel_context {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct intel_context*) ;
 struct intel_context* FUNC_1 (struct intel_engine_cs*) ;
 int FUNC_2 (struct intel_engine_cs*) ;
 int FUNC_3 (struct intel_engine_cs*) ;
 int FUNC_4 (struct intel_engine_cs*,int ) ;
 int FUNC_5 (struct intel_engine_cs*) ;
 int FUNC_6 (struct intel_engine_cs*) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct intel_engine_cs *VAR_2)
{
 struct intel_context *VAR_3;

 FUNC_4(VAR_2, VAR_0);
 FUNC_5(VAR_2);
 FUNC_6(VAR_2);
 FUNC_3(VAR_2);
 FUNC_7(&VAR_2->pool);

 VAR_3 = FUNC_1(VAR_2);
 if (FUNC_0(VAR_3))
  goto err_breadcrumbs;

 VAR_2->kernel_context = VAR_3;
 return 0;

err_breadcrumbs:
 FUNC_2(VAR_2);
 return -VAR_1;
}
