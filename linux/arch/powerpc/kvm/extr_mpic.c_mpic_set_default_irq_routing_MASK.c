
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct openpic {int kvm; } ;
struct kvm_irq_routing_entry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kvm_irq_routing_entry*) ;
 int FUNC_1 (int ,struct kvm_irq_routing_entry*,int ,int ) ;
 struct kvm_irq_routing_entry* FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(struct openpic *VAR_2)
{
 struct kvm_irq_routing_entry *VAR_3;


 VAR_3 = FUNC_2((sizeof(*VAR_3)), VAR_1);
 if (!VAR_3)
  return -VAR_0;

 FUNC_1(VAR_2->kvm, VAR_3, 0, 0);

 FUNC_0(VAR_3);
 return 0;
}
