
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int hwirq; } ;
struct altr_arria10_edac {int ecc_mgr_map; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct altr_arria10_edac* FUNC_1 (struct irq_data*) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct irq_data *VAR_1)
{
 struct altr_arria10_edac *VAR_2 = FUNC_1(VAR_1);

 FUNC_2(VAR_2->ecc_mgr_map, VAR_0,
       FUNC_0(VAR_1->hwirq));
}
