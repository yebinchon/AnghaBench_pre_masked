
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct sthyi_sctns {int dummy; } ;
struct TYPE_5__ {int instruction_sthyi; } ;
struct kvm_vcpu {TYPE_4__* run; TYPE_1__ stat; int kvm; } ;
struct TYPE_6__ {int* gprs; } ;
struct TYPE_7__ {TYPE_2__ regs; } ;
struct TYPE_8__ {TYPE_3__ s; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct kvm_vcpu*,int,char*,int,int) ;
 int FUNC_1 (unsigned long) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct kvm_vcpu*,int*,int*) ;
 int FUNC_4 (struct kvm_vcpu*,int) ;
 int FUNC_5 (struct kvm_vcpu*,int ) ;
 int FUNC_6 (struct kvm_vcpu*,int) ;
 int FUNC_7 (struct sthyi_sctns*,int*) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (struct kvm_vcpu*,int,int) ;
 int FUNC_10 (struct kvm_vcpu*,int,int,struct sthyi_sctns*,int ) ;

int FUNC_11(struct kvm_vcpu *VAR_6)
{
 int VAR_7, VAR_8, VAR_9 = 0;
 u64 VAR_10, VAR_11, VAR_12 = 0, VAR_13 = 0;
 struct sthyi_sctns *VAR_14 = ((void*)0);

 if (!FUNC_8(VAR_6->kvm, 74))
  return FUNC_5(VAR_6, VAR_4);

 FUNC_3(VAR_6, &VAR_7, &VAR_8);
 VAR_10 = VAR_6->run->s.regs.gprs[VAR_7];
 VAR_11 = VAR_6->run->s.regs.gprs[VAR_8];

 VAR_6->stat.instruction_sthyi++;
 FUNC_0(VAR_6, 3, "STHYI: fc: %llu addr: 0x%016llx", VAR_10, VAR_11);
 FUNC_9(VAR_6, VAR_10, VAR_11);

 if (VAR_7 == VAR_8 || VAR_7 & 1 || VAR_8 & 1)
  return FUNC_5(VAR_6, VAR_5);

 if (VAR_10 & 0xffff) {
  VAR_12 = 3;
  VAR_13 = 4;
  goto out;
 }

 if (VAR_11 & ~VAR_2)
  return FUNC_5(VAR_6, VAR_5);

 VAR_14 = (void *)FUNC_2(VAR_1);
 if (!VAR_14)
  return -VAR_0;

 VAR_12 = FUNC_7(VAR_14, &VAR_13);

out:
 if (!VAR_12) {
  VAR_9 = FUNC_10(VAR_6, VAR_11, VAR_8, VAR_14, VAR_3);
  if (VAR_9) {
   FUNC_1((unsigned long)VAR_14);
   return FUNC_4(VAR_6, VAR_9);
  }
 }

 FUNC_1((unsigned long)VAR_14);
 VAR_6->run->s.regs.gprs[VAR_8 + 1] = VAR_13;
 FUNC_6(VAR_6, VAR_12);
 return VAR_9;
}
