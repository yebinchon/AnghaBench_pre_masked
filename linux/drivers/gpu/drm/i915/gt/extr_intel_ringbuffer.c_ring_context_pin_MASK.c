
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_context {int dummy; } ;


 int FUNC_0 (struct intel_context*) ;
 int FUNC_1 (struct intel_context*) ;
 int FUNC_2 (struct intel_context*) ;

__attribute__((used)) static int FUNC_3(struct intel_context *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1)
  return VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1)
  goto err_active;

 return 0;

err_active:
 FUNC_2(VAR_0);
 return VAR_1;
}
