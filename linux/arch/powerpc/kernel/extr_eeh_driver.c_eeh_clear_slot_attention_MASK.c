
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_slot {TYPE_1__* hotplug; } ;
struct pci_dev {scalar_t__ error_state; struct pci_slot* slot; } ;
struct hotplug_slot_ops {int (* set_attention_status ) (TYPE_1__*,int ) ;} ;
struct TYPE_2__ {struct hotplug_slot_ops* ops; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_1(struct pci_dev *VAR_1)
{
 const struct hotplug_slot_ops *VAR_2;
 struct pci_slot *VAR_3;

 if (!VAR_1)
  return;

 if (VAR_1->error_state == VAR_0)
  return;

 VAR_3 = VAR_1->slot;
 if (!VAR_3 || !VAR_3->hotplug)
  return;

 VAR_2 = VAR_3->hotplug->ops;
 if (!VAR_2 || !VAR_2->set_attention_status)
  return;

 VAR_2->set_attention_status(VAR_3->hotplug, 0);
}
