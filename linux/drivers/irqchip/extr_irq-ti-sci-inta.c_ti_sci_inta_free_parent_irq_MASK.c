
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_sci_inta_vint_desc {int parent_virq; int vint_id; int list; int event_map; } ;
struct ti_sci_inta_irq_domain {int vint; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ti_sci_inta_vint_desc*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct ti_sci_inta_irq_domain *VAR_1,
     struct ti_sci_inta_vint_desc *VAR_2)
{
 if (FUNC_0(VAR_2->event_map, VAR_0) == VAR_0) {
  FUNC_3(&VAR_2->list);
  FUNC_4(VAR_1->vint, VAR_2->vint_id);
  FUNC_1(VAR_2->parent_virq);
  FUNC_2(VAR_2);
 }
}
