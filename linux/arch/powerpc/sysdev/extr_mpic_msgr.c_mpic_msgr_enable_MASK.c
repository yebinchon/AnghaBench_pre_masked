
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mpic_msgr {int num; int lock; } ;


 int FUNC_0 (struct mpic_msgr*) ;
 int FUNC_1 (struct mpic_msgr*,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(struct mpic_msgr *VAR_0)
{
 unsigned long VAR_1;
 u32 VAR_2;

 FUNC_2(&VAR_0->lock, VAR_1);
 VAR_2 = FUNC_0(VAR_0);
 FUNC_1(VAR_0, VAR_2 | (1 << VAR_0->num));
 FUNC_3(&VAR_0->lock, VAR_1);
}
