
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct irq_chip_generic {struct al_fic* private; TYPE_3__* chip_types; int reg_base; } ;
struct device_node {int dummy; } ;
struct al_fic {int domain; int parent_irq; int base; int name; } ;
struct TYPE_5__ {int flags; int irq_retrigger; int irq_set_type; int irq_ack; int irq_unmask; int irq_mask; } ;
struct TYPE_4__ {int ack; int mask; } ;
struct TYPE_6__ {TYPE_2__ chip; TYPE_1__ regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int ,int,int ,int ,int ,int ,int ) ;
 int FUNC_1 (struct device_node*,int ,int *,struct al_fic*) ;
 int FUNC_2 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 struct irq_chip_generic* FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,struct al_fic*) ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static int FUNC_6(struct device_node *VAR_14,
      struct al_fic *VAR_15)
{
 struct irq_chip_generic *VAR_16;
 int VAR_17;

 VAR_15->domain = FUNC_1(VAR_14,
         VAR_5,
         &VAR_13,
         VAR_15);
 if (!VAR_15->domain) {
  FUNC_5("fail to add irq domain\n");
  return -VAR_2;
 }

 VAR_17 = FUNC_0(VAR_15->domain,
          VAR_5,
          1, VAR_15->name,
          VAR_9,
          0, 0, VAR_4);
 if (VAR_17) {
  FUNC_5("fail to allocate generic chip (%d)\n", VAR_17);
  goto err_domain_remove;
 }

 VAR_16 = FUNC_3(VAR_15->domain, 0);
 VAR_16->reg_base = VAR_15->base;
 VAR_16->chip_types->regs.mask = VAR_1;
 VAR_16->chip_types->regs.ack = VAR_0;
 VAR_16->chip_types->chip.irq_mask = VAR_12;
 VAR_16->chip_types->chip.irq_unmask = VAR_11;
 VAR_16->chip_types->chip.irq_ack = VAR_10;
 VAR_16->chip_types->chip.irq_set_type = VAR_8;
 VAR_16->chip_types->chip.irq_retrigger = VAR_7;
 VAR_16->chip_types->chip.flags = VAR_3;
 VAR_16->private = VAR_15;

 FUNC_4(VAR_15->parent_irq,
      VAR_6,
      VAR_15);
 return 0;

err_domain_remove:
 FUNC_2(VAR_15->domain);

 return VAR_17;
}
