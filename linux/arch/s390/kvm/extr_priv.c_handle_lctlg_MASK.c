
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
struct TYPE_8__ {TYPE_3__* sie_block; } ;
struct TYPE_5__ {int instruction_lctlg; } ;
struct kvm_vcpu {TYPE_4__ arch; TYPE_1__ stat; } ;
struct TYPE_6__ {int mask; } ;
struct TYPE_7__ {int ipa; int* gcr; TYPE_2__ gpsw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct kvm_vcpu*,int,char*,int,int,int) ;
 int FUNC_1 (int ,struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*,int *) ;
 int FUNC_3 (struct kvm_vcpu*,int) ;
 int FUNC_4 (struct kvm_vcpu*,int ) ;
 int FUNC_5 (struct kvm_vcpu*,int,int ,int*,int) ;
 int FUNC_6 (struct kvm_vcpu*,int,int,int,int) ;

__attribute__((used)) static int FUNC_7(struct kvm_vcpu *VAR_4)
{
 int VAR_5 = (VAR_4->arch.sie_block->ipa & 0x00f0) >> 4;
 int VAR_6 = VAR_4->arch.sie_block->ipa & 0x000f;
 int VAR_7, VAR_8, VAR_9;
 u64 VAR_10[16];
 u64 VAR_11;
 u8 VAR_12;

 VAR_4->stat.instruction_lctlg++;

 if (VAR_4->arch.sie_block->gpsw.mask & VAR_3)
  return FUNC_4(VAR_4, VAR_1);

 VAR_11 = FUNC_2(VAR_4, &VAR_12);

 if (VAR_11 & 7)
  return FUNC_4(VAR_4, VAR_2);

 FUNC_0(VAR_4, 4, "LCTLG: r1:%d, r3:%d, addr: 0x%llx", VAR_5, VAR_6, VAR_11);
 FUNC_6(VAR_4, 1, VAR_5, VAR_6, VAR_11);

 VAR_9 = ((VAR_6 - VAR_5) & 0xf) + 1;
 VAR_8 = FUNC_5(VAR_4, VAR_11, VAR_12, VAR_10, VAR_9 * sizeof(u64));
 if (VAR_8)
  return FUNC_3(VAR_4, VAR_8);
 VAR_7 = VAR_5;
 VAR_9 = 0;
 do {
  VAR_4->arch.sie_block->gcr[VAR_7] = VAR_10[VAR_9++];
  if (VAR_7 == VAR_6)
   break;
  VAR_7 = (VAR_7 + 1) % 16;
 } while (1);
 FUNC_1(VAR_0, VAR_4);
 return 0;
}
