
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nx_lpage_recovery_thread; } ;
struct kvm {TYPE_1__ arch; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct kvm*,int ,int ,char*,int *) ;

int FUNC_2(struct kvm *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_1, VAR_0, 0,
       "kvm-nx-lpage-recovery",
       &VAR_1->arch.nx_lpage_recovery_thread);
 if (!VAR_2)
  FUNC_0(VAR_1->arch.nx_lpage_recovery_thread);

 return VAR_2;
}
