
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlp_msi_data {unsigned int msi_enabled_mask; int msi_lock; int lnkbase; } ;
struct irq_data {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;
 struct xlp_msi_data* FUNC_1 (struct irq_data*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,unsigned int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct irq_data *VAR_2)
{
 struct xlp_msi_data *VAR_3 = FUNC_1(VAR_2);
 unsigned long VAR_4;
 int VAR_5;

 VAR_5 = FUNC_2(VAR_2->irq);
 FUNC_4(&VAR_3->msi_lock, VAR_4);
 VAR_3->msi_enabled_mask &= ~(1u << VAR_5);
 if (FUNC_0())
  FUNC_3(VAR_3->lnkbase, VAR_0,
    VAR_3->msi_enabled_mask);
 else
  FUNC_3(VAR_3->lnkbase, VAR_1, VAR_3->msi_enabled_mask);
 FUNC_5(&VAR_3->msi_lock, VAR_4);
}
