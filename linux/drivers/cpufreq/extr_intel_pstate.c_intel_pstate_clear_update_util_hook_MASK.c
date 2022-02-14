
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpudata {int update_util_set; } ;


 struct cpudata** VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(unsigned int VAR_1)
{
 struct cpudata *VAR_2 = VAR_0[VAR_1];

 if (!VAR_2->update_util_set)
  return;

 FUNC_0(VAR_1);
 VAR_2->update_util_set = 0;
 FUNC_1();
}
