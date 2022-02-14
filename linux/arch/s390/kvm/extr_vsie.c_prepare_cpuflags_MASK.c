
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_s390_sie_block {int cpuflags; } ;
struct vsie_page {struct kvm_s390_sie_block* scb_o; struct kvm_s390_sie_block scb_s; } ;
struct kvm_vcpu {int kvm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct kvm_s390_sie_block*,int) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ,int) ;

__attribute__((used)) static int FUNC_5(struct kvm_vcpu *VAR_15, struct vsie_page *VAR_16)
{
 struct kvm_s390_sie_block *VAR_17 = &VAR_16->scb_s;
 struct kvm_s390_sie_block *VAR_18 = VAR_16->scb_o;
 int VAR_19, VAR_20 = FUNC_0(&VAR_18->cpuflags);


 if (!(VAR_20 & VAR_10))
  return FUNC_2(VAR_17, 0x0001U);

 if (VAR_20 & (VAR_6 | VAR_4))
  return FUNC_2(VAR_17, 0x0001U);
 else if (VAR_20 & (VAR_8 | VAR_7))
  return FUNC_2(VAR_17, 0x0007U);


 VAR_19 = VAR_10;
 if (VAR_20 & VAR_0 && FUNC_4(VAR_15->kvm, 8))
  VAR_19 |= VAR_0;
 if (VAR_20 & VAR_1 && FUNC_4(VAR_15->kvm, 78)) {
  if (VAR_20 & VAR_0)
   return FUNC_2(VAR_17, 0x0001U);
  VAR_19 |= VAR_1;
 }
 if (FUNC_3(VAR_15->kvm, VAR_11))
  VAR_19 |= VAR_20 & VAR_5;
 if (FUNC_3(VAR_15->kvm, VAR_12))
  VAR_19 |= VAR_20 & VAR_9;
 if (FUNC_3(VAR_15->kvm, VAR_13))
  VAR_19 |= VAR_20 & VAR_2;
 if (FUNC_3(VAR_15->kvm, VAR_14))
  VAR_19 |= VAR_20 & VAR_3;

 FUNC_1(&VAR_17->cpuflags, VAR_19);
 return 0;
}
