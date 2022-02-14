
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pdc_intc_priv {int nr_syswakes; int domain; } ;
struct irq_desc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (struct irq_desc*) ;
 unsigned int FUNC_2 (int ,int ) ;
 unsigned int FUNC_3 (struct pdc_intc_priv*,int ) ;
 int FUNC_4 (unsigned int) ;

__attribute__((used)) static void FUNC_5(struct irq_desc *VAR_2)
{
 struct pdc_intc_priv *VAR_3;
 unsigned int VAR_4, VAR_5;
 unsigned int VAR_6;

 VAR_3 = (struct pdc_intc_priv *)FUNC_1(VAR_2);

 VAR_6 = FUNC_3(VAR_3, VAR_1) &
   FUNC_3(VAR_3, VAR_0);
 VAR_6 &= (1 << VAR_3->nr_syswakes) - 1;

 for (VAR_4 = 0; VAR_6; VAR_6 >>= 1, ++VAR_4) {

  if (!(VAR_6 & 1))
   continue;

  VAR_5 = FUNC_2(VAR_3->domain,
        FUNC_4(VAR_4));
  FUNC_0(VAR_5);
 }
}
