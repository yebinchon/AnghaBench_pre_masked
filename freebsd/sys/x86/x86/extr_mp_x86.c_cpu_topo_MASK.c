
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpu_group {int dummy; } ;


 int VAR_0 ;
 struct cpu_group* FUNC_0 (int) ;
 struct cpu_group* FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 (int *,struct cpu_group*) ;

struct cpu_group *
FUNC_3(void)
{
 struct cpu_group *VAR_2;

 if (VAR_0 <= 1)
  return (FUNC_1());

 VAR_2 = FUNC_0(1);
 FUNC_2(&VAR_1, VAR_2);
 return (VAR_2);
}
