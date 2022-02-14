
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {int sint; int vcpu; } ;
struct TYPE_10__ {int data; int address_hi; int address_lo; } ;
struct TYPE_8__ {int pin; int irqchip; } ;
struct kvm_kernel_irq_routing_entry {TYPE_5__ hv_sint; int set; TYPE_3__ msi; TYPE_1__ irqchip; } ;
struct TYPE_13__ {int sint; int vcpu; } ;
struct TYPE_11__ {int data; int address_hi; int address_lo; } ;
struct TYPE_9__ {int pin; int irqchip; } ;
struct TYPE_14__ {TYPE_6__ hv_sint; TYPE_4__ msi; TYPE_2__ irqchip; } ;
struct kvm_irq_routing_entry {int type; TYPE_7__ u; } ;
struct kvm {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;






 int VAR_2 ;
 int FUNC_0 (struct kvm*) ;
 int VAR_3 ;
 int FUNC_1 (struct kvm*,struct kvm_kernel_irq_routing_entry*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

int FUNC_2(struct kvm *VAR_7,
     struct kvm_kernel_irq_routing_entry *VAR_8,
     const struct kvm_irq_routing_entry *VAR_9)
{




 switch (VAR_9->type) {
 case 129:
  if (FUNC_0(VAR_7))
   return -VAR_0;
  VAR_8->irqchip.pin = VAR_9->u.irqchip.pin;
  switch (VAR_9->u.irqchip.irqchip) {
  case 131:
   VAR_8->irqchip.pin += VAR_2 / 2;

  case 132:
   if (VAR_9->u.irqchip.pin >= VAR_2 / 2)
    return -VAR_0;
   VAR_8->set = VAR_6;
   break;
  case 133:
   if (VAR_9->u.irqchip.pin >= VAR_1)
    return -VAR_0;
   VAR_8->set = VAR_4;
   break;
  default:
   return -VAR_0;
  }
  VAR_8->irqchip.irqchip = VAR_9->u.irqchip.irqchip;
  break;
 case 128:
  VAR_8->set = VAR_5;
  VAR_8->msi.address_lo = VAR_9->u.msi.address_lo;
  VAR_8->msi.address_hi = VAR_9->u.msi.address_hi;
  VAR_8->msi.data = VAR_9->u.msi.data;

  if (FUNC_1(VAR_7, VAR_8))
   return -VAR_0;
  break;
 case 130:
  VAR_8->set = VAR_3;
  VAR_8->hv_sint.vcpu = VAR_9->u.hv_sint.vcpu;
  VAR_8->hv_sint.sint = VAR_9->u.hv_sint.sint;
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
