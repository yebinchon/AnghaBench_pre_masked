
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_sci_inta_event_desc {int dummy; } ;
struct irq_data {int hwirq; } ;


 struct ti_sci_inta_event_desc* FUNC_0 (struct irq_data*) ;
 int FUNC_1 (struct ti_sci_inta_event_desc*,int ) ;

__attribute__((used)) static void FUNC_2(struct irq_data *VAR_0)
{
 struct ti_sci_inta_event_desc *VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 FUNC_1(VAR_1, VAR_0->hwirq);
}
