
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
typedef size_t u16 ;
struct ti_sci_inta_vint_desc {int vint_id; struct ti_sci_inta_event_desc* events; TYPE_1__* domain; } ;
struct ti_sci_inta_irq_domain {int global_event; TYPE_4__* pdev; TYPE_5__* sci; } ;
struct ti_sci_inta_event_desc {size_t vint_bit; scalar_t__ global_event; int hwirq; } ;
struct TYPE_7__ {int (* set_event_map ) (TYPE_5__*,size_t,size_t,int ,int ,scalar_t__,size_t) ;} ;
struct TYPE_8__ {TYPE_2__ rm_irq_ops; } ;
struct TYPE_10__ {TYPE_3__ ops; } ;
struct TYPE_9__ {int id; } ;
struct TYPE_6__ {struct ti_sci_inta_irq_domain* host_data; } ;


 int VAR_0 ;
 struct ti_sci_inta_event_desc* FUNC_0 (int) ;
 size_t FUNC_1 (int ) ;
 size_t FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (TYPE_5__*,size_t,size_t,int ,int ,scalar_t__,size_t) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static struct ti_sci_inta_event_desc *FUNC_6(struct ti_sci_inta_vint_desc *VAR_2,
             u16 VAR_3,
             u32 VAR_4)
{
 struct ti_sci_inta_irq_domain *VAR_5 = VAR_2->domain->host_data;
 struct ti_sci_inta_event_desc *VAR_6;
 u16 VAR_7, VAR_8;
 int VAR_9;

 VAR_7 = FUNC_1(VAR_4);
 VAR_8 = FUNC_2(VAR_4);

 VAR_6 = &VAR_2->events[VAR_3];
 VAR_6->hwirq = VAR_4;
 VAR_6->vint_bit = VAR_3;
 VAR_6->global_event = FUNC_4(VAR_5->global_event);
 if (VAR_6->global_event == VAR_1)
  return FUNC_0(-VAR_0);

 VAR_9 = VAR_5->sci->ops.rm_irq_ops.set_event_map(VAR_5->sci,
            VAR_7, VAR_8,
            VAR_5->pdev->id,
            VAR_2->vint_id,
            VAR_6->global_event,
            VAR_3);
 if (VAR_9)
  goto free_global_event;

 return VAR_6;
free_global_event:
 FUNC_5(VAR_5->global_event, VAR_6->global_event);
 return FUNC_0(VAR_9);
}
