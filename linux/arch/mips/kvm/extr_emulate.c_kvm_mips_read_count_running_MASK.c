
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct mips_coproc {int dummy; } ;
struct TYPE_3__ {int count_period; int comparecount_timer; scalar_t__ count_bias; struct mips_coproc* cop0; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
typedef scalar_t__ s32 ;
typedef int ktime_t ;
struct TYPE_4__ {int (* queue_timer_int ) (struct kvm_vcpu*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 TYPE_2__* VAR_1 ;
 scalar_t__ FUNC_5 (struct kvm_vcpu*,int ) ;
 scalar_t__ FUNC_6 (struct mips_coproc*) ;
 int FUNC_7 (struct kvm_vcpu*) ;

__attribute__((used)) static u32 FUNC_8(struct kvm_vcpu *VAR_2, ktime_t VAR_3)
{
 struct mips_coproc *VAR_4 = VAR_2->arch.cop0;
 ktime_t VAR_5, VAR_6;
 u32 VAR_7, VAR_8;
 int VAR_9;


 VAR_7 = VAR_2->arch.count_bias + FUNC_5(VAR_2, VAR_3);
 VAR_8 = FUNC_6(VAR_4);





 if ((s32)(VAR_7 - VAR_8) < 0)
  return VAR_7;







 VAR_5 = FUNC_1(&VAR_2->arch.comparecount_timer);
 VAR_6 = FUNC_3(VAR_3, VAR_2->arch.count_period / 4);
 if (FUNC_4(VAR_5, VAR_6)) {




  VAR_9 = FUNC_0(&VAR_2->arch.comparecount_timer);


  VAR_1->queue_timer_int(VAR_2);





  if (VAR_9) {
   VAR_5 = FUNC_3(VAR_5,
            VAR_2->arch.count_period);
   FUNC_2(&VAR_2->arch.comparecount_timer, VAR_5,
          VAR_0);
  }
 }

 return VAR_7;
}
