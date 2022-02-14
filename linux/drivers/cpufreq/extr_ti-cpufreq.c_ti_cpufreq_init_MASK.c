
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_device_id {int dummy; } ;


 int FUNC_0 (int *,char*,int,struct of_device_id const*,int) ;
 struct of_device_id* FUNC_1 () ;

__attribute__((used)) static int FUNC_2(void)
{
 const struct of_device_id *VAR_0;


 VAR_0 = FUNC_1();
 if (VAR_0)
  FUNC_0(((void*)0), "ti-cpufreq", -1, VAR_0,
           sizeof(*VAR_0));

 return 0;
}
