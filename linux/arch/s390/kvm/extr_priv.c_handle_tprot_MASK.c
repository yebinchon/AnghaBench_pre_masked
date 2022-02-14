
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
struct TYPE_5__ {int instruction_tprot; } ;
struct kvm_vcpu {TYPE_4__ arch; int kvm; TYPE_1__ stat; } ;
struct TYPE_6__ {int mask; } ;
struct TYPE_7__ {TYPE_2__ gpsw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned long FUNC_0 (int ,int ,int*) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (struct kvm_vcpu*,int,int ,unsigned long*,int ) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_5 (unsigned long) ;
 int FUNC_6 (struct kvm_vcpu*,int*,int*,int *,int *) ;
 int FUNC_7 (struct kvm_vcpu*,int) ;
 int FUNC_8 (struct kvm_vcpu*,int) ;

__attribute__((used)) static int FUNC_9(struct kvm_vcpu *VAR_9)
{
 u64 VAR_10, VAR_11;
 unsigned long VAR_12, VAR_13;
 int VAR_14 = 0, VAR_15 = 0;
 bool VAR_16;
 u8 VAR_17;

 VAR_9->stat.instruction_tprot++;

 if (VAR_9->arch.sie_block->gpsw.mask & VAR_8)
  return FUNC_7(VAR_9, VAR_4);

 FUNC_6(VAR_9, &VAR_10, &VAR_11, &VAR_17, ((void*)0));




 if (VAR_11 & 0xf0)
  return -VAR_0;
 if (VAR_9->arch.sie_block->gpsw.mask & VAR_7)
  FUNC_3(VAR_9);
 VAR_14 = FUNC_2(VAR_9, VAR_10, VAR_17, &VAR_13, VAR_2);
 if (VAR_14 == VAR_5) {

  VAR_15 = 1;
  VAR_14 = FUNC_2(VAR_9, VAR_10, VAR_17, &VAR_13,
           VAR_1);
 }
 if (VAR_14) {
  if (VAR_14 == VAR_3 || VAR_14 == VAR_6) {
   VAR_14 = FUNC_7(VAR_9, VAR_14);
  } else if (VAR_14 > 0) {

   FUNC_8(VAR_9, 3);
   VAR_14 = 0;
  }
  goto out_unlock;
 }

 VAR_12 = FUNC_0(VAR_9->kvm, FUNC_1(VAR_13), &VAR_16);
 if (FUNC_5(VAR_12)) {
  VAR_14 = FUNC_7(VAR_9, VAR_3);
 } else {
  if (!VAR_16)
   VAR_15 = 1;
  FUNC_8(VAR_9, VAR_15);

 }
out_unlock:
 if (VAR_9->arch.sie_block->gpsw.mask & VAR_7)
  FUNC_4(VAR_9);
 return VAR_14;
}
