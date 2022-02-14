
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct mips_coproc {int dummy; } ;
struct TYPE_3__ {struct mips_coproc* cop0; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
typedef scalar_t__ s32 ;
typedef int ktime_t ;
struct TYPE_4__ {int (* dequeue_timer_int ) (struct kvm_vcpu*) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 TYPE_2__* VAR_2 ;
 int FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (struct kvm_vcpu*,scalar_t__*) ;
 int FUNC_5 (struct kvm_vcpu*,int ,scalar_t__) ;
 scalar_t__ FUNC_6 (struct mips_coproc*) ;
 scalar_t__ FUNC_7 (struct mips_coproc*) ;
 int FUNC_8 (struct mips_coproc*,scalar_t__) ;
 int FUNC_9 (struct mips_coproc*,scalar_t__) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 scalar_t__ FUNC_12 () ;
 int FUNC_13 (struct kvm_vcpu*) ;
 int FUNC_14 (struct kvm_vcpu*) ;
 int FUNC_15 (scalar_t__) ;

void FUNC_16(struct kvm_vcpu *VAR_3, u32 VAR_4, bool VAR_5)
{
 struct mips_coproc *VAR_6 = VAR_3->arch.cop0;
 int VAR_7;
 u32 VAR_8 = FUNC_7(VAR_6);
 s32 VAR_9 = VAR_4 - VAR_8;
 u32 VAR_10;
 ktime_t VAR_11 = FUNC_2(0, 0);
 u32 VAR_12;


 if (VAR_8 == VAR_4) {
  if (!VAR_5)
   return;
  VAR_2->dequeue_timer_int(VAR_3);
  FUNC_9(VAR_6, VAR_4);
  return;
 }
 if (FUNC_0(VAR_1) && VAR_9 > 0) {
  FUNC_10();
  FUNC_15(VAR_4 - FUNC_12());
  FUNC_1();
 }


 VAR_7 = FUNC_3(VAR_3);
 if (!VAR_7)
  VAR_11 = FUNC_4(VAR_3, &VAR_12);

 if (VAR_5)
  VAR_2->dequeue_timer_int(VAR_3);
 else if (FUNC_0(VAR_1))




  VAR_10 = FUNC_6(VAR_6);

 FUNC_9(VAR_6, VAR_4);

 if (FUNC_0(VAR_1)) {
  if (VAR_9 > 0)
   FUNC_11();

  FUNC_1();

  if (!VAR_5 && VAR_10 & VAR_0)
   FUNC_8(VAR_6, VAR_10);
 }


 if (!VAR_7)
  FUNC_5(VAR_3, VAR_11, VAR_12);






 if (FUNC_0(VAR_1) && VAR_9 <= 0)
  FUNC_15(VAR_4 - FUNC_12());
}
