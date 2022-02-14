
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int wdt_timer; int wdt_lock; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ) ;

int FUNC_3(struct kvm_vcpu *VAR_3)
{

 FUNC_1(&VAR_3->arch.wdt_lock);
 FUNC_2(&VAR_3->arch.wdt_timer, VAR_2, 0);





 FUNC_0(VAR_1, VAR_0);
 return 0;
}
