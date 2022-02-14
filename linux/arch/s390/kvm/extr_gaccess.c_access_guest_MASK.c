
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


union asce {int r; } ;
typedef int u8 ;
struct TYPE_5__ {TYPE_1__* sie_block; } ;
struct kvm_vcpu {int kvm; TYPE_2__ arch; } ;
typedef int psw_t ;
typedef enum gacc_mode { ____Placeholder_gacc_mode } gacc_mode ;
struct TYPE_6__ {scalar_t__ dat; } ;
struct TYPE_4__ {int gpsw; } ;


 unsigned long FUNC_0 (unsigned long*) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (unsigned long,int) ;
 int FUNC_2 (struct kvm_vcpu*,union asce*,unsigned long,int ,int) ;
 int FUNC_3 (struct kvm_vcpu*,unsigned long,int ,unsigned long*,unsigned long,union asce,int) ;
 int FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 (struct kvm_vcpu*) ;
 int FUNC_6 (int ,unsigned long,void*,unsigned long) ;
 unsigned long FUNC_7 (struct kvm_vcpu*,unsigned long) ;
 int FUNC_8 (int ,unsigned long,void*,unsigned long) ;
 unsigned long FUNC_9 (scalar_t__,unsigned long) ;
 TYPE_3__ FUNC_10 (int ) ;
 int FUNC_11 (unsigned long*) ;
 unsigned long* FUNC_12 (int ) ;

int FUNC_13(struct kvm_vcpu *VAR_5, unsigned long VAR_6, u8 VAR_7, void *VAR_8,
   unsigned long VAR_9, enum gacc_mode VAR_10)
{
 psw_t *VAR_11 = &VAR_5->arch.sie_block->gpsw;
 unsigned long VAR_12, VAR_13, VAR_14, VAR_15;
 unsigned long VAR_16[2];
 unsigned long *VAR_17;
 int VAR_18;
 union asce VAR_19;
 int VAR_20;

 if (!VAR_9)
  return 0;
 VAR_6 = FUNC_7(VAR_5, VAR_6);
 VAR_20 = FUNC_2(VAR_5, &VAR_19, VAR_6, VAR_7, VAR_10);
 if (VAR_20)
  return VAR_20;
 VAR_13 = (((VAR_6 & ~VAR_2) + VAR_9 - 1) >> VAR_3) + 1;
 VAR_17 = VAR_16;
 if (VAR_13 > FUNC_0(VAR_16))
  VAR_17 = FUNC_12(FUNC_1(VAR_13, sizeof(unsigned long)));
 if (!VAR_17)
  return -VAR_0;
 VAR_18 = FUNC_10(*VAR_11).dat && !VAR_19.r;
 if (VAR_18)
  FUNC_4(VAR_5);
 VAR_20 = FUNC_3(VAR_5, VAR_6, VAR_7, VAR_17, VAR_13, VAR_19, VAR_10);
 for (VAR_15 = 0; VAR_15 < VAR_13 && !VAR_20; VAR_15++) {
  VAR_14 = *(VAR_17 + VAR_15) + (VAR_6 & ~VAR_2);
  VAR_12 = FUNC_9(VAR_4 - (VAR_14 & ~VAR_2), VAR_9);
  if (VAR_10 == VAR_1)
   VAR_20 = FUNC_8(VAR_5->kvm, VAR_14, VAR_8, VAR_12);
  else
   VAR_20 = FUNC_6(VAR_5->kvm, VAR_14, VAR_8, VAR_12);
  VAR_9 -= VAR_12;
  VAR_6 += VAR_12;
  VAR_8 += VAR_12;
 }
 if (VAR_18)
  FUNC_5(VAR_5);
 if (VAR_13 > FUNC_0(VAR_16))
  FUNC_11(VAR_17);
 return VAR_20;
}
