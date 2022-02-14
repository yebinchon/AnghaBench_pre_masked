
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip6q {int * ip6q_label; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int) ;
 int VAR_2 ;

int
FUNC_1(struct ip6q *VAR_3, int VAR_4)
{

 if (VAR_2 & VAR_1) {
  VAR_3->ip6q_label = FUNC_0(VAR_4);
  if (VAR_3->ip6q_label == ((void*)0))
   return (VAR_0);
 } else
  VAR_3->ip6q_label = ((void*)0);
 return (0);
}
