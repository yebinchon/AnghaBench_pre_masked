
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct kvm_x86_mce {unsigned int bank; int status; int addr; int misc; int mcg_status; } ;
struct TYPE_2__ {int mcg_cap; int* mce_banks; int mcg_ctl; int mcg_status; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*,int ) ;
 int FUNC_2 (struct kvm_vcpu*,int ) ;

__attribute__((used)) static int FUNC_3(struct kvm_vcpu *VAR_9,
          struct kvm_x86_mce *VAR_10)
{
 u64 VAR_11 = VAR_9->arch.mcg_cap;
 unsigned VAR_12 = VAR_11 & 0xff;
 u64 *VAR_13 = VAR_9->arch.mce_banks;

 if (VAR_10->bank >= VAR_12 || !(VAR_10->status & VAR_6))
  return -VAR_0;




 if ((VAR_10->status & VAR_5) && (VAR_11 & VAR_2) &&
     VAR_9->arch.mcg_ctl != ~(u64)0)
  return 0;
 VAR_13 += 4 * VAR_10->bank;




 if ((VAR_10->status & VAR_5) && VAR_13[0] != ~(u64)0)
  return 0;
 if (VAR_10->status & VAR_5) {
  if ((VAR_9->arch.mcg_status & VAR_3) ||
      !FUNC_2(VAR_9, VAR_8)) {
   FUNC_0(VAR_1, VAR_9);
   return 0;
  }
  if (VAR_13[1] & VAR_6)
   VAR_10->status |= VAR_4;
  VAR_13[2] = VAR_10->addr;
  VAR_13[3] = VAR_10->misc;
  VAR_9->arch.mcg_status = VAR_10->mcg_status;
  VAR_13[1] = VAR_10->status;
  FUNC_1(VAR_9, VAR_7);
 } else if (!(VAR_13[1] & VAR_6)
     || !(VAR_13[1] & VAR_5)) {
  if (VAR_13[1] & VAR_6)
   VAR_10->status |= VAR_4;
  VAR_13[2] = VAR_10->addr;
  VAR_13[3] = VAR_10->misc;
  VAR_13[1] = VAR_10->status;
 } else
  VAR_13[1] |= VAR_4;
 return 0;
}
