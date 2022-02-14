
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_guc {scalar_t__ stage_desc_pool; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct intel_guc*) ;
 int FUNC_3 (struct intel_guc*) ;
 int FUNC_4 (struct intel_guc*) ;
 int FUNC_5 (struct intel_guc*) ;

int FUNC_6(struct intel_guc *VAR_0)
{
 int VAR_1;

 if (VAR_0->stage_desc_pool)
  return 0;

 VAR_1 = FUNC_3(VAR_0);
 if (VAR_1)
  return VAR_1;




 FUNC_0(!VAR_0->stage_desc_pool);

 FUNC_1(!FUNC_5(VAR_0));
 VAR_1 = FUNC_2(VAR_0);
 if (VAR_1)
  goto err_pool;

 return 0;

err_pool:
 FUNC_4(VAR_0);
 return VAR_1;
}
