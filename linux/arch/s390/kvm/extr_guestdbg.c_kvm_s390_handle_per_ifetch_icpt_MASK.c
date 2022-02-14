
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct TYPE_4__ {TYPE_1__* sie_block; } ;
struct kvm_vcpu {TYPE_2__ arch; int guest_debug; } ;
struct kvm_s390_pgm_info {int per_address; int per_code; int code; } ;
struct TYPE_3__ {int* gcr; int gpsw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int const) ;
 scalar_t__ FUNC_1 (struct kvm_vcpu*,int ,int ) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_4 (unsigned long,int const,int const) ;
 int FUNC_5 (struct kvm_vcpu*) ;
 int FUNC_6 (struct kvm_vcpu*,struct kvm_s390_pgm_info*) ;
 int FUNC_7 (struct kvm_vcpu*,int ) ;
 int FUNC_8 (struct kvm_vcpu*,unsigned long*) ;

int FUNC_9(struct kvm_vcpu *VAR_5)
{
 const u64 VAR_6 = VAR_5->arch.sie_block->gcr[10];
 const u64 VAR_7 = VAR_5->arch.sie_block->gcr[11];
 const u8 VAR_8 = FUNC_5(VAR_5);
 struct kvm_s390_pgm_info VAR_9 = {
  .code = VAR_4,
  .per_code = VAR_1,
  .per_address = FUNC_0(VAR_5->arch.sie_block->gpsw, VAR_8),
 };
 unsigned long VAR_10;
 int VAR_11;






 if (!FUNC_3(VAR_5))
  return FUNC_6(VAR_5, &VAR_9);

 if (FUNC_1(VAR_5, VAR_9.per_code, VAR_9.per_address))
  VAR_5->guest_debug |= VAR_0;

 if (!FUNC_2(VAR_5) ||
     !(VAR_5->arch.sie_block->gcr[9] & VAR_2))
  return 0;

 VAR_11 = FUNC_8(VAR_5, &VAR_10);
 if (VAR_11 < 0)
  return VAR_11;
 if (VAR_11)

  return FUNC_7(VAR_5, VAR_3);

 if (FUNC_4(VAR_10, VAR_6, VAR_7))
  return FUNC_6(VAR_5, &VAR_9);
 return 0;
}
