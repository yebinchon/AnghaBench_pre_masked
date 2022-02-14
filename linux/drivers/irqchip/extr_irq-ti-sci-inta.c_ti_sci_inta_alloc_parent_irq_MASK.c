
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct ti_sci_inta_vint_desc {unsigned int parent_virq; int list; scalar_t__ vint_id; struct irq_domain* domain; } ;
struct ti_sci_inta_irq_domain {int vint_list; TYPE_1__* pdev; int vint; } ;
struct irq_fwspec {int param_count; scalar_t__* param; int fwnode; } ;
struct irq_domain {struct ti_sci_inta_irq_domain* host_data; } ;
struct TYPE_2__ {scalar_t__ id; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ti_sci_inta_vint_desc* FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int *) ;
 unsigned int FUNC_3 (struct irq_fwspec*) ;
 int FUNC_4 (unsigned int,int ,struct ti_sci_inta_vint_desc*) ;
 int FUNC_5 (struct ti_sci_inta_vint_desc*) ;
 struct ti_sci_inta_vint_desc* FUNC_6 (int,int ) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int VAR_4 ;

__attribute__((used)) static struct ti_sci_inta_vint_desc *FUNC_11(struct irq_domain *VAR_5)
{
 struct ti_sci_inta_irq_domain *VAR_6 = VAR_5->host_data;
 struct ti_sci_inta_vint_desc *VAR_7;
 struct irq_fwspec VAR_8;
 unsigned int VAR_9;
 u16 VAR_10;

 VAR_10 = FUNC_10(VAR_6->vint);
 if (VAR_10 == VAR_3)
  return FUNC_0(-VAR_0);

 VAR_7 = FUNC_6(sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return FUNC_0(-VAR_1);

 VAR_7->domain = VAR_5;
 VAR_7->vint_id = VAR_10;
 FUNC_1(&VAR_7->list);

 VAR_8.fwnode = FUNC_9(FUNC_8(FUNC_2(&VAR_6->pdev->dev)));
 VAR_8.param_count = 2;
 VAR_8.param[0] = VAR_6->pdev->id;
 VAR_8.param[1] = VAR_7->vint_id;

 VAR_9 = FUNC_3(&VAR_8);
 if (VAR_9 == 0) {
  FUNC_5(VAR_7);
  return FUNC_0(-VAR_0);
 }
 VAR_7->parent_virq = VAR_9;

 FUNC_7(&VAR_7->list, &VAR_6->vint_list);
 FUNC_4(VAR_7->parent_virq,
      VAR_4, VAR_7);

 return VAR_7;
}
