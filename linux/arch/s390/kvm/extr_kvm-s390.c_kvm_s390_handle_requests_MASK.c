
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_12__ {TYPE_5__* sie_block; int gmap; } ;
struct kvm_vcpu {TYPE_6__ arch; TYPE_4__* kvm; int vcpu_id; } ;
struct TYPE_11__ {int ihcpu; int ecb2; int ictl; } ;
struct TYPE_7__ {scalar_t__ use_cmma; } ;
struct TYPE_10__ {TYPE_3__* mm; TYPE_1__ arch; } ;
struct TYPE_8__ {scalar_t__ uses_cmm; } ;
struct TYPE_9__ {TYPE_2__ context; } ;


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
 int FUNC_0 (int ,int ,int,int ) ;
 scalar_t__ FUNC_1 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_2 (int ,struct kvm_vcpu*) ;
 int FUNC_3 (int ,struct kvm_vcpu*) ;
 int FUNC_4 (int ,struct kvm_vcpu*) ;
 int FUNC_5 (struct kvm_vcpu*) ;
 int FUNC_6 (struct kvm_vcpu*,int ) ;
 int FUNC_7 (struct kvm_vcpu*) ;
 int FUNC_8 (struct kvm_vcpu*,int ) ;
 int FUNC_9 (struct kvm_vcpu*) ;
 int FUNC_10 (int ,int) ;

__attribute__((used)) static int FUNC_11(struct kvm_vcpu *VAR_14)
{
retry:
 FUNC_9(VAR_14);
 if (!FUNC_5(VAR_14))
  return 0;







 if (FUNC_2(VAR_6, VAR_14)) {
  int VAR_15;
  VAR_15 = FUNC_0(VAR_14->arch.gmap,
       FUNC_7(VAR_14),
       VAR_12 * 2, VAR_13);
  if (VAR_15) {
   FUNC_4(VAR_6, VAR_14);
   return VAR_15;
  }
  goto retry;
 }

 if (FUNC_2(VAR_9, VAR_14)) {
  VAR_14->arch.sie_block->ihcpu = 0xffff;
  goto retry;
 }

 if (FUNC_2(VAR_4, VAR_14)) {
  if (!FUNC_1(VAR_14)) {
   FUNC_10(VAR_14->vcpu_id, 1);
   FUNC_8(VAR_14, VAR_0);
  }
  goto retry;
 }

 if (FUNC_2(VAR_3, VAR_14)) {
  if (FUNC_1(VAR_14)) {
   FUNC_10(VAR_14->vcpu_id, 0);
   FUNC_6(VAR_14, VAR_0);
  }
  goto retry;
 }

 if (FUNC_2(VAR_5, VAR_14)) {
  VAR_14->arch.sie_block->ictl |= VAR_2;
  goto retry;
 }

 if (FUNC_2(VAR_7, VAR_14)) {





  VAR_14->arch.sie_block->ecb2 &= ~VAR_1;
  goto retry;
 }

 if (FUNC_2(VAR_8, VAR_14)) {




  if ((VAR_14->kvm->arch.use_cmma) &&
      (VAR_14->kvm->mm->context.uses_cmm))
   VAR_14->arch.sie_block->ecb2 |= VAR_1;
  goto retry;
 }


 FUNC_3(VAR_10, VAR_14);

 FUNC_3(VAR_11, VAR_14);

 return 0;
}
