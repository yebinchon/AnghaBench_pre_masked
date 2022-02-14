
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int * so_peerlabel; int * so_label; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int) ;

int
FUNC_3(struct socket *VAR_3, int VAR_4)
{

 if (VAR_2 & VAR_1) {
  VAR_3->so_label = FUNC_0(VAR_4);
  if (VAR_3->so_label == ((void*)0))
   return (VAR_0);
  VAR_3->so_peerlabel = FUNC_2(VAR_4);
  if (VAR_3->so_peerlabel == ((void*)0)) {
   FUNC_1(VAR_3->so_label);
   VAR_3->so_label = ((void*)0);
   return (VAR_0);
  }
 } else {
  VAR_3->so_label = ((void*)0);
  VAR_3->so_peerlabel = ((void*)0);
 }
 return (0);
}
