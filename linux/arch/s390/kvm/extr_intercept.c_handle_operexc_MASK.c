
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {TYPE_4__* sie_block; } ;
struct TYPE_8__ {int exit_operation_exception; } ;
struct kvm_vcpu {TYPE_5__ arch; TYPE_3__* kvm; TYPE_1__ stat; } ;
struct TYPE_13__ {int addr; int mask; } ;
typedef TYPE_6__ psw_t ;
struct TYPE_11__ {int ipa; TYPE_6__ gpsw; int ipb; } ;
struct TYPE_9__ {scalar_t__ user_instr0; } ;
struct TYPE_10__ {TYPE_2__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*,int ) ;
 int FUNC_2 (struct kvm_vcpu*,int ,TYPE_6__*,int) ;
 int FUNC_3 (struct kvm_vcpu*,int,int ) ;

__attribute__((used)) static int FUNC_4(struct kvm_vcpu *VAR_7)
{
 psw_t VAR_8, VAR_9;
 int VAR_10;

 VAR_7->stat.exit_operation_exception++;
 FUNC_3(VAR_7, VAR_7->arch.sie_block->ipa,
          VAR_7->arch.sie_block->ipb);

 if (VAR_7->arch.sie_block->ipa == 0xb256)
  return FUNC_0(VAR_7);

 if (VAR_7->arch.sie_block->ipa == 0 && VAR_7->kvm->arch.user_instr0)
  return -VAR_0;
 VAR_10 = FUNC_2(VAR_7, VAR_6, &VAR_9, sizeof(psw_t));
 if (VAR_10)
  return VAR_10;
 VAR_8 = VAR_7->arch.sie_block->gpsw;
 if (VAR_8.addr - VAR_9.addr <= 6 &&
     !(VAR_9.mask & VAR_5) &&
     !(VAR_8.mask & VAR_4) &&
     (VAR_9.mask & VAR_2) == (VAR_8.mask & VAR_2) &&
     (VAR_9.mask & VAR_3) == (VAR_8.mask & VAR_3))
  return -VAR_0;

 return FUNC_1(VAR_7, VAR_1);
}
