
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strings {int s_nleft; int * s_topFree; int * s_nextFree; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct strings* VAR_3 ;

void
FUNC_0(void)
{
 struct strings *VAR_4;
 int VAR_5;

 if (VAR_2)
  return;
 VAR_5 = 0;
 for (VAR_4 = &VAR_3[0]; VAR_4 < &VAR_3[VAR_0]; VAR_4++) {
  if (VAR_4->s_topFree == ((void*)0))
   continue;
  VAR_4->s_nextFree = VAR_4->s_topFree;
  VAR_4->s_nleft = VAR_1 << VAR_5;
  VAR_5++;
 }
}
