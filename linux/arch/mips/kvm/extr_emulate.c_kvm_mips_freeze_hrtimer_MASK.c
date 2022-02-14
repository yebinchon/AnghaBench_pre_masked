
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int comparecount_timer; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
typedef int ktime_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (struct kvm_vcpu*,int ) ;

ktime_t FUNC_3(struct kvm_vcpu *VAR_0, u32 *VAR_1)
{
 ktime_t VAR_2;


 FUNC_0(&VAR_0->arch.comparecount_timer);
 VAR_2 = FUNC_1();


 *VAR_1 = FUNC_2(VAR_0, VAR_2);

 return VAR_2;
}
