
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_sci_inta_event_desc {int dummy; } ;
struct irq_data {struct ti_sci_inta_event_desc* chip_data; int hwirq; int domain; } ;


 scalar_t__ FUNC_0 (struct ti_sci_inta_event_desc*) ;
 int FUNC_1 (struct ti_sci_inta_event_desc*) ;
 struct ti_sci_inta_event_desc* FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct irq_data *VAR_0)
{
 struct ti_sci_inta_event_desc *VAR_1;

 VAR_1 = FUNC_2(VAR_0->domain, VAR_0->hwirq);
 if (FUNC_0(VAR_1))
  return FUNC_1(VAR_1);

 VAR_0->chip_data = VAR_1;

 return 0;
}
