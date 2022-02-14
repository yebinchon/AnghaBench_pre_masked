
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int kvmclock_update_work; int kvmclock_sync_work; } ;
struct kvm {TYPE_1__ arch; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct kvm*) ;

void FUNC_2(struct kvm *VAR_0)
{
 FUNC_0(&VAR_0->arch.kvmclock_sync_work);
 FUNC_0(&VAR_0->arch.kvmclock_update_work);
 FUNC_1(VAR_0);
}
