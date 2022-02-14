
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct mips_coproc {int dummy; } ;
struct TYPE_2__ {int comparecount_timer; int count_hz; struct mips_coproc* cop0; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
typedef int ktime_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct mips_coproc*) ;

__attribute__((used)) static void FUNC_5(struct kvm_vcpu *VAR_2,
        ktime_t VAR_3, u32 VAR_4)
{
 struct mips_coproc *VAR_5 = VAR_2->arch.cop0;
 u32 VAR_6;
 u64 VAR_7;
 ktime_t VAR_8;


 VAR_6 = FUNC_4(VAR_5);
 VAR_7 = (u64)(u32)(VAR_6 - VAR_4 - 1) + 1;
 VAR_7 = FUNC_0(VAR_7 * VAR_1, VAR_2->arch.count_hz);
 VAR_8 = FUNC_3(VAR_3, VAR_7);


 FUNC_1(&VAR_2->arch.comparecount_timer);
 FUNC_2(&VAR_2->arch.comparecount_timer, VAR_8, VAR_0);
}
