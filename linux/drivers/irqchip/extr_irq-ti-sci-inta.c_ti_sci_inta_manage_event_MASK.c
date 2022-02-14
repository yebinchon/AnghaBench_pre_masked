
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ti_sci_inta_vint_desc {int vint_id; } ;
struct ti_sci_inta_irq_domain {scalar_t__ base; } ;
struct ti_sci_inta_event_desc {int vint_bit; } ;
struct irq_data {TYPE_1__* domain; } ;
struct TYPE_2__ {struct ti_sci_inta_irq_domain* host_data; } ;


 int FUNC_0 (int ) ;
 struct ti_sci_inta_event_desc* FUNC_1 (struct irq_data*) ;
 struct ti_sci_inta_vint_desc* FUNC_2 (struct ti_sci_inta_event_desc*,int ) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct irq_data *VAR_0, u32 VAR_1)
{
 struct ti_sci_inta_event_desc *VAR_2;
 struct ti_sci_inta_vint_desc *VAR_3;
 struct ti_sci_inta_irq_domain *VAR_4;

 VAR_2 = FUNC_1(VAR_0);
 VAR_3 = FUNC_2(VAR_2, VAR_2->vint_bit);
 VAR_4 = VAR_0->domain->host_data;

 FUNC_3(FUNC_0(VAR_2->vint_bit),
         VAR_4->base + VAR_3->vint_id * 0x1000 + VAR_1);
}
