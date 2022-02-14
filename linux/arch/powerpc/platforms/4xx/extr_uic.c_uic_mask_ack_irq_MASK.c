
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uic {int lock; scalar_t__ dcrbase; } ;
struct irq_data {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct uic* FUNC_0 (struct irq_data*) ;
 int FUNC_1 (struct irq_data*) ;
 unsigned int FUNC_2 (struct irq_data*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct irq_data *VAR_2)
{
 struct uic *VAR_3 = FUNC_0(VAR_2);
 unsigned int VAR_4 = FUNC_2(VAR_2);
 unsigned long VAR_5;
 u32 VAR_6, VAR_7;

 VAR_7 = 1 << (31-VAR_4);
 FUNC_5(&VAR_3->lock, VAR_5);
 VAR_6 = FUNC_3(VAR_3->dcrbase + VAR_0);
 VAR_6 &= ~VAR_7;
 FUNC_4(VAR_3->dcrbase + VAR_0, VAR_6);
 if (!FUNC_1(VAR_2))
  FUNC_4(VAR_3->dcrbase + VAR_1, VAR_7);
 FUNC_6(&VAR_3->lock, VAR_5);
}
