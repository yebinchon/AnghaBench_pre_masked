
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlp_msi_data {int lnkbase; } ;
struct irq_data {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;
 struct xlp_msi_data* FUNC_1 (struct irq_data*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,unsigned int) ;
 int FUNC_5 (struct irq_data*) ;

__attribute__((used)) static void FUNC_6(struct irq_data *VAR_2)
{
 struct xlp_msi_data *VAR_3 = FUNC_1(VAR_2);
 int VAR_4, VAR_5;

 VAR_4 = FUNC_2(VAR_2->irq);
 VAR_5 = FUNC_3(VAR_2->irq);
 FUNC_5(VAR_2);


 if (FUNC_0())
  FUNC_4(VAR_3->lnkbase, VAR_0, 1u << VAR_5);
 else
  FUNC_4(VAR_3->lnkbase, VAR_1, 1u << VAR_5);

}
