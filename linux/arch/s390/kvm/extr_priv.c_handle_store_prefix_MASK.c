
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
struct TYPE_5__ {int instruction_stpx; } ;
struct kvm_vcpu {TYPE_4__ arch; TYPE_1__ stat; } ;
typedef int address ;
struct TYPE_6__ {int mask; } ;
struct TYPE_7__ {TYPE_2__ gpsw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct kvm_vcpu*,int,char*,int ,int) ;
 int FUNC_1 (struct kvm_vcpu*,int *) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*,int) ;
 int FUNC_4 (struct kvm_vcpu*,int ) ;
 int FUNC_5 (struct kvm_vcpu*,int ,int ) ;
 int FUNC_6 (struct kvm_vcpu*,int,int ,int *,int) ;

__attribute__((used)) static int FUNC_7(struct kvm_vcpu *VAR_3)
{
 u64 VAR_4;
 u32 VAR_5;
 int VAR_6;
 u8 VAR_7;

 VAR_3->stat.instruction_stpx++;

 if (VAR_3->arch.sie_block->gpsw.mask & VAR_2)
  return FUNC_4(VAR_3, VAR_0);

 VAR_4 = FUNC_1(VAR_3, &VAR_7);


 if (VAR_4 & 3)
  return FUNC_4(VAR_3, VAR_1);

 VAR_5 = FUNC_2(VAR_3);


 VAR_6 = FUNC_6(VAR_3, VAR_4, VAR_7, &VAR_5, sizeof(VAR_5));
 if (VAR_6)
  return FUNC_3(VAR_3, VAR_6);

 FUNC_0(VAR_3, 3, "STPX: storing prefix 0x%x into 0x%llx", VAR_5, VAR_4);
 FUNC_5(VAR_3, 0, VAR_5);
 return 0;
}
