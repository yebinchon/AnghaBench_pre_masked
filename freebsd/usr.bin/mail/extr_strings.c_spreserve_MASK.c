
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strings {int * s_topFree; } ;


 size_t VAR_0 ;
 struct strings* VAR_1 ;

void
FUNC_0(void)
{
 struct strings *VAR_2;

 for (VAR_2 = &VAR_1[0]; VAR_2 < &VAR_1[VAR_0]; VAR_2++)
  VAR_2->s_topFree = ((void*)0);
}
