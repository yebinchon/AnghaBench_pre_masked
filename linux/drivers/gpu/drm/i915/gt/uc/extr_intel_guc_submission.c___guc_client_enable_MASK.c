
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_guc_client {int dummy; } ;


 int FUNC_0 (struct intel_guc_client*) ;
 int FUNC_1 (struct intel_guc_client*) ;
 int FUNC_2 (struct intel_guc_client*) ;
 int FUNC_3 (struct intel_guc_client*) ;
 int FUNC_4 (struct intel_guc_client*) ;

__attribute__((used)) static int FUNC_5(struct intel_guc_client *VAR_0)
{
 int VAR_1;

 FUNC_2(VAR_0);
 FUNC_4(VAR_0);

 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1)
  goto fail;

 return 0;

fail:
 FUNC_3(VAR_0);
 FUNC_1(VAR_0);
 return VAR_1;
}
