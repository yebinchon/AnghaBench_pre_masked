
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u8 ;
typedef int u64 ;
typedef int u16 ;
struct kvm_vcpu {TYPE_2__* run; } ;
struct TYPE_3__ {int sel2; void* sel1; void* fc; void* ar; int addr; } ;
struct TYPE_4__ {TYPE_1__ s390_stsi; int exit_reason; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct kvm_vcpu *VAR_1, u64 VAR_2, u8 VAR_3,
     u8 VAR_4, u8 VAR_5, u16 VAR_6)
{
 VAR_1->run->exit_reason = VAR_0;
 VAR_1->run->s390_stsi.addr = VAR_2;
 VAR_1->run->s390_stsi.ar = VAR_3;
 VAR_1->run->s390_stsi.fc = VAR_4;
 VAR_1->run->s390_stsi.sel1 = VAR_5;
 VAR_1->run->s390_stsi.sel2 = VAR_6;
}
