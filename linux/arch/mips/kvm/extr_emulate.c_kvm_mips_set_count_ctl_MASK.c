
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct mips_coproc {int dummy; } ;
struct TYPE_3__ {int count_ctl; void* count_resume; int count_hz; struct mips_coproc* cop0; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
typedef int s64 ;
typedef void* ktime_t ;
struct TYPE_4__ {int (* queue_timer_int ) (struct kvm_vcpu*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ) ;
 void* FUNC_1 (void*,int) ;
 scalar_t__ FUNC_2 (void*,void*) ;
 void* FUNC_3 () ;
 TYPE_2__* VAR_4 ;
 void* FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 (struct kvm_vcpu*,void*) ;
 int FUNC_6 (struct kvm_vcpu*,void*,int) ;
 int FUNC_7 (struct mips_coproc*) ;
 int FUNC_8 (struct mips_coproc*) ;
 int FUNC_9 (struct mips_coproc*) ;
 int FUNC_10 (struct kvm_vcpu*) ;

int FUNC_11(struct kvm_vcpu *VAR_5, s64 VAR_6)
{
 struct mips_coproc *VAR_7 = VAR_5->arch.cop0;
 s64 VAR_8 = VAR_6 ^ VAR_5->arch.count_ctl;
 s64 VAR_9;
 ktime_t VAR_10, VAR_11;
 u32 VAR_12, VAR_13;


 if (VAR_8 & ~(s64)(VAR_2))
  return -VAR_1;


 VAR_5->arch.count_ctl = VAR_6;


 if (VAR_8 & VAR_2) {

  if (FUNC_7(VAR_7) & VAR_0) {
   if (VAR_6 & VAR_2)

    VAR_5->arch.count_resume = FUNC_3();
  } else if (VAR_6 & VAR_2) {

   VAR_5->arch.count_resume = FUNC_4(VAR_5);
  } else {




   VAR_12 = FUNC_9(VAR_7);
   VAR_13 = FUNC_8(VAR_7);
   VAR_9 = (u64)(u32)(VAR_13 - VAR_12 - 1) + 1;
   VAR_9 = FUNC_0(VAR_9 * VAR_3,
     VAR_5->arch.count_hz);
   VAR_10 = FUNC_1(VAR_5->arch.count_resume, VAR_9);


   VAR_11 = FUNC_3();
   if (FUNC_2(VAR_11, VAR_10) >= 0)

    VAR_4->queue_timer_int(VAR_5);


   VAR_12 = FUNC_5(VAR_5, VAR_11);
   FUNC_6(VAR_5, VAR_11, VAR_12);
  }
 }

 return 0;
}
