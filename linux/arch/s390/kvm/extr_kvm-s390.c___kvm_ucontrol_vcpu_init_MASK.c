
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* gmap; } ;
struct kvm_vcpu {int kvm; TYPE_1__ arch; } ;
struct TYPE_6__ {int mm; } ;
struct TYPE_5__ {int private; } ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 TYPE_2__* FUNC_0 (int ,unsigned long) ;

__attribute__((used)) static int FUNC_1(struct kvm_vcpu *VAR_2)
{
 VAR_2->arch.gmap = FUNC_0(VAR_1->mm, -1UL);
 if (!VAR_2->arch.gmap)
  return -VAR_0;
 VAR_2->arch.gmap->private = VAR_2->kvm;

 return 0;
}
