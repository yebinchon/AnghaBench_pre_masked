
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int data; int address_hi; int address_lo; } ;
struct TYPE_7__ {int pin; int irqchip; } ;
struct kvm_kernel_irq_routing_entry {TYPE_3__ msi; int set; TYPE_2__ irqchip; } ;
struct TYPE_9__ {int data; int address_hi; int address_lo; } ;
struct TYPE_6__ {int pin; int irqchip; } ;
struct TYPE_10__ {TYPE_4__ msi; TYPE_1__ irqchip; } ;
struct kvm_irq_routing_entry {int type; TYPE_5__ u; } ;
struct kvm {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;

int FUNC_0(struct kvm *VAR_4,
     struct kvm_kernel_irq_routing_entry *VAR_5,
     const struct kvm_irq_routing_entry *VAR_6)
{
 int VAR_7 = -VAR_0;

 switch (VAR_6->type) {
 case 129:
  VAR_5->set = VAR_3;
  VAR_5->irqchip.irqchip = VAR_6->u.irqchip.irqchip;
  VAR_5->irqchip.pin = VAR_6->u.irqchip.pin;
  if (VAR_5->irqchip.pin >= VAR_1)
   goto out;
  break;
 case 128:
  VAR_5->set = VAR_2;
  VAR_5->msi.address_lo = VAR_6->u.msi.address_lo;
  VAR_5->msi.address_hi = VAR_6->u.msi.address_hi;
  VAR_5->msi.data = VAR_6->u.msi.data;
  break;
 default:
  goto out;
 }

 VAR_7 = 0;
out:
 return VAR_7;
}
