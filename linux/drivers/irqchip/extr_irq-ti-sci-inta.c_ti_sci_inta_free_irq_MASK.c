
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct ti_sci_inta_vint_desc {int event_map; int vint_id; TYPE_1__* domain; } ;
struct ti_sci_inta_irq_domain {int vint_mutex; int global_event; TYPE_4__* pdev; TYPE_5__* sci; } ;
struct ti_sci_inta_event_desc {scalar_t__ hwirq; int global_event; int vint_bit; } ;
struct TYPE_7__ {int (* free_event_map ) (TYPE_5__*,int ,int ,int ,int ,int ,int ) ;} ;
struct TYPE_8__ {TYPE_2__ rm_irq_ops; } ;
struct TYPE_10__ {TYPE_3__ ops; } ;
struct TYPE_9__ {int id; } ;
struct TYPE_6__ {struct ti_sci_inta_irq_domain* host_data; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_5__*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_6 (struct ti_sci_inta_irq_domain*,struct ti_sci_inta_vint_desc*) ;
 int FUNC_7 (int ,int ) ;
 struct ti_sci_inta_vint_desc* FUNC_8 (struct ti_sci_inta_event_desc*,int ) ;

__attribute__((used)) static void FUNC_9(struct ti_sci_inta_event_desc *VAR_1,
     u32 VAR_2)
{
 struct ti_sci_inta_vint_desc *VAR_3;
 struct ti_sci_inta_irq_domain *VAR_4;

 VAR_3 = FUNC_8(VAR_1, VAR_1->vint_bit);
 VAR_4 = VAR_3->domain->host_data;

 FUNC_3(&VAR_4->vint_mutex);
 VAR_4->sci->ops.rm_irq_ops.free_event_map(VAR_4->sci,
       FUNC_0(VAR_2),
       FUNC_1(VAR_2),
       VAR_4->pdev->id,
       VAR_3->vint_id,
       VAR_1->global_event,
       VAR_1->vint_bit);

 FUNC_2(VAR_1->vint_bit, VAR_3->event_map);
 FUNC_7(VAR_4->global_event, VAR_1->global_event);
 VAR_1->global_event = VAR_0;
 VAR_1->hwirq = 0;

 FUNC_6(VAR_4, VAR_3);
 FUNC_4(&VAR_4->vint_mutex);
}
