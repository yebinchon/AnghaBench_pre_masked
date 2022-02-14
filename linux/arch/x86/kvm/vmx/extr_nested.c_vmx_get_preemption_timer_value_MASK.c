
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_5__ {int virtual_tsc_khz; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
typedef int ktime_t ;
struct TYPE_4__ {int preemption_timer; } ;
struct TYPE_6__ {TYPE_1__ nested; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 TYPE_3__* FUNC_3 (struct kvm_vcpu*) ;

__attribute__((used)) static u32 FUNC_4(struct kvm_vcpu *VAR_1)
{
 ktime_t VAR_2 =
  FUNC_1(&FUNC_3(VAR_1)->nested.preemption_timer);
 u64 VAR_3;

 if (FUNC_2(VAR_2) <= 0)
  return 0;

 VAR_3 = FUNC_2(VAR_2) * VAR_1->arch.virtual_tsc_khz;
 FUNC_0(VAR_3, 1000000);
 return VAR_3 >> VAR_0;
}
