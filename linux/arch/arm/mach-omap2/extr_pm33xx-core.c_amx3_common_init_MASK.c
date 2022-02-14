
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (int ,int *) ;
 void* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (void*,int ) ;
 scalar_t__ FUNC_2 () ;
 void* VAR_7 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 void* FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(void)
{
 VAR_4 = FUNC_5("gfx_pwrdm");
 VAR_7 = FUNC_5("per_pwrdm");
 VAR_5 = FUNC_5("mpu_pwrdm");

 if ((!VAR_4) || (!VAR_7) || (!VAR_5))
  return -VAR_0;

 (void)FUNC_0(VAR_6, ((void*)0));


 VAR_3 = FUNC_5("cefuse_pwrdm");
 if (!VAR_3)
  FUNC_3("PM: Failed to get cefuse_pwrdm\n");
 else if (FUNC_2() != VAR_1)
  FUNC_4("PM: Leaving EFUSE power domain active\n");
 else
  FUNC_1(VAR_3, VAR_2);

 return 0;
}
