
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uic {int lock; scalar_t__ dcrbase; } ;
struct irq_data {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct uic* FUNC_0 (struct irq_data*) ;
 unsigned int FUNC_1 (struct irq_data*) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct irq_data *VAR_1)
{
 struct uic *VAR_2 = FUNC_0(VAR_1);
 unsigned int VAR_3 = FUNC_1(VAR_1);
 unsigned long VAR_4;

 FUNC_3(&VAR_2->lock, VAR_4);
 FUNC_2(VAR_2->dcrbase + VAR_0, 1 << (31-VAR_3));
 FUNC_4(&VAR_2->lock, VAR_4);
}
