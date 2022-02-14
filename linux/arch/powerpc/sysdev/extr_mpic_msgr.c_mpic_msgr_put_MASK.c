
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpic_msgr {int lock; int in_use; } ;


 int VAR_0 ;
 int FUNC_0 (struct mpic_msgr*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(struct mpic_msgr *VAR_1)
{
 unsigned long VAR_2;

 FUNC_1(&VAR_1->lock, VAR_2);
 VAR_1->in_use = VAR_0;
 FUNC_0(VAR_1);
 FUNC_2(&VAR_1->lock, VAR_2);
}
