
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct TYPE_8__ {TYPE_3__* sie_block; } ;
struct TYPE_5__ {int instruction_spx; } ;
struct kvm_vcpu {int kvm; TYPE_4__ arch; TYPE_1__ stat; } ;
typedef int address ;
struct TYPE_6__ {int mask; } ;
struct TYPE_7__ {TYPE_2__ gpsw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (struct kvm_vcpu*,int *) ;
 int FUNC_2 (struct kvm_vcpu*,int) ;
 int FUNC_3 (struct kvm_vcpu*,int ) ;
 int FUNC_4 (struct kvm_vcpu*,int) ;
 int FUNC_5 (struct kvm_vcpu*,int,int ,int*,int) ;
 int FUNC_6 (struct kvm_vcpu*,int,int) ;

__attribute__((used)) static int FUNC_7(struct kvm_vcpu *VAR_4)
{
 u64 VAR_5;
 u32 VAR_6;
 int VAR_7;
 u8 VAR_8;

 VAR_4->stat.instruction_spx++;

 if (VAR_4->arch.sie_block->gpsw.mask & VAR_3)
  return FUNC_3(VAR_4, VAR_1);

 VAR_5 = FUNC_1(VAR_4, &VAR_8);


 if (VAR_5 & 3)
  return FUNC_3(VAR_4, VAR_2);


 VAR_7 = FUNC_5(VAR_4, VAR_5, VAR_8, &VAR_6, sizeof(VAR_6));
 if (VAR_7)
  return FUNC_2(VAR_4, VAR_7);

 VAR_6 &= 0x7fffe000u;






 if (FUNC_0(VAR_4->kvm, VAR_6))
  return FUNC_3(VAR_4, VAR_0);

 FUNC_4(VAR_4, VAR_6);
 FUNC_6(VAR_4, 1, VAR_6);
 return 0;
}
