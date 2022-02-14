
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct pci_slot {TYPE_1__* hotplug; } ;
struct pci_dev {scalar_t__ error_state; struct pci_slot* slot; } ;
struct hotplug_slot_ops {int (* get_adapter_status ) (TYPE_1__*,int *) ;int (* set_attention_status ) (TYPE_1__*,int) ;} ;
struct TYPE_3__ {struct hotplug_slot_ops* ops; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int *) ;

__attribute__((used)) static bool FUNC_2(struct pci_dev *VAR_1)
{
 const struct hotplug_slot_ops *VAR_2;
 struct pci_slot *VAR_3;
 u8 VAR_4;
 int VAR_5;

 if (!VAR_1)
  return 0;

 if (VAR_1->error_state == VAR_0)
  return 0;

 VAR_3 = VAR_1->slot;
 if (!VAR_3 || !VAR_3->hotplug)
  return 1;

 VAR_2 = VAR_3->hotplug->ops;
 if (!VAR_2 || !VAR_2->get_adapter_status)
  return 1;


 if (VAR_2->set_attention_status)
  VAR_2->set_attention_status(VAR_3->hotplug, 1);

 VAR_5 = VAR_2->get_adapter_status(VAR_3->hotplug, &VAR_4);
 if (VAR_5)
  return 1;

 return !!VAR_4;
}
