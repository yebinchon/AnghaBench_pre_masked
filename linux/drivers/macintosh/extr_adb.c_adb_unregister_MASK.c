
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * handler; scalar_t__ busy; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;

int
FUNC_5(int VAR_4)
{
 int VAR_5 = -VAR_0;

 FUNC_0(&VAR_3);
 FUNC_2(&VAR_2);
 if (VAR_1[VAR_4].handler) {
  while(VAR_1[VAR_4].busy) {
   FUNC_3(&VAR_2);
   FUNC_4();
   FUNC_2(&VAR_2);
  }
  VAR_5 = 0;
  VAR_1[VAR_4].handler = ((void*)0);
 }
 FUNC_3(&VAR_2);
 FUNC_1(&VAR_3);
 return VAR_5;
}
