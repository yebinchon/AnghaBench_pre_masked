
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qib_devdata {int pioavail_lock; int pport; int (* f_sendctrl ) (int ,int ) ;int pio_need_disarm; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int ,int ) ;

void FUNC_5(struct qib_devdata *VAR_0, unsigned VAR_1, unsigned VAR_2)
{
 unsigned long VAR_3;
 unsigned VAR_4;
 unsigned VAR_5;

 VAR_5 = VAR_1 + VAR_2;
 FUNC_2(&VAR_0->pioavail_lock, VAR_3);
 for (VAR_4 = VAR_1; VAR_4 < VAR_5; VAR_4++) {
  FUNC_1(VAR_4, VAR_0->pio_need_disarm);
  VAR_0->f_sendctrl(VAR_0->pport, FUNC_0(VAR_4));
 }
 FUNC_3(&VAR_0->pioavail_lock, VAR_3);
}
