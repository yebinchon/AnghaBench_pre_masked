
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int hp_sdc_transaction ;
struct TYPE_2__ {int lock; int ** tq; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

int FUNC_2(hp_sdc_transaction *VAR_2)
{
 unsigned long VAR_3;
 int VAR_4;

 FUNC_0(&VAR_1.lock, VAR_3);



 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  if (VAR_1.tq[VAR_4] == VAR_2)
   VAR_1.tq[VAR_4] = ((void*)0);

 FUNC_1(&VAR_1.lock, VAR_3);
 return 0;
}
