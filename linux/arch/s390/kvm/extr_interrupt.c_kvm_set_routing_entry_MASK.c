
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int adapter_id; int ind_offset; int summary_offset; int ind_addr; int summary_addr; } ;
struct kvm_kernel_irq_routing_entry {TYPE_1__ adapter; int set; } ;
struct TYPE_5__ {int adapter_id; int ind_offset; int summary_offset; int ind_addr; int summary_addr; } ;
struct TYPE_6__ {TYPE_2__ adapter; } ;
struct kvm_irq_routing_entry {int type; TYPE_3__ u; } ;
struct kvm {int dummy; } ;


 int VAR_0 ;

 int VAR_1 ;

int FUNC_0(struct kvm *VAR_2,
     struct kvm_kernel_irq_routing_entry *VAR_3,
     const struct kvm_irq_routing_entry *VAR_4)
{
 int VAR_5;

 switch (VAR_4->type) {
 case 128:
  VAR_3->set = VAR_1;
  VAR_3->adapter.summary_addr = VAR_4->u.adapter.summary_addr;
  VAR_3->adapter.ind_addr = VAR_4->u.adapter.ind_addr;
  VAR_3->adapter.summary_offset = VAR_4->u.adapter.summary_offset;
  VAR_3->adapter.ind_offset = VAR_4->u.adapter.ind_offset;
  VAR_3->adapter.adapter_id = VAR_4->u.adapter.adapter_id;
  VAR_5 = 0;
  break;
 default:
  VAR_5 = -VAR_0;
 }

 return VAR_5;
}
