
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int instruction_io_other; } ;
struct TYPE_9__ {TYPE_6__* sie_block; } ;
struct kvm_vcpu {TYPE_1__ stat; TYPE_3__ arch; TYPE_5__* kvm; } ;
struct TYPE_8__ {int mask; } ;
struct TYPE_12__ {int ipa; TYPE_2__ gpsw; } ;
struct TYPE_10__ {scalar_t__ css_support; } ;
struct TYPE_11__ {TYPE_4__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct kvm_vcpu*,int,char*,char*) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*,int ) ;
 int FUNC_4 (struct kvm_vcpu*,int) ;

__attribute__((used)) static int FUNC_5(struct kvm_vcpu *VAR_3)
{
 FUNC_0(VAR_3, 4, "%s", "I/O instruction");

 if (VAR_3->arch.sie_block->gpsw.mask & VAR_2)
  return FUNC_3(VAR_3, VAR_1);

 if (VAR_3->kvm->arch.css_support) {




  if (VAR_3->arch.sie_block->ipa == 0xb236)
   return FUNC_1(VAR_3);
  if (VAR_3->arch.sie_block->ipa == 0xb235)
   return FUNC_2(VAR_3);

  VAR_3->stat.instruction_io_other++;
  return -VAR_0;
 } else {




  FUNC_4(VAR_3, 3);
  return 0;
 }
}
