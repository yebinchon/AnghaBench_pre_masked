
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kvm_reinject_control {int pit_reinject; } ;
struct TYPE_4__ {int lock; } ;
struct kvm_pit {TYPE_2__ pit_state; } ;
struct TYPE_3__ {struct kvm_pit* vpit; } ;
struct kvm {TYPE_1__ arch; } ;


 int VAR_0 ;
 int FUNC_0 (struct kvm_pit*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct kvm *VAR_1,
     struct kvm_reinject_control *VAR_2)
{
 struct kvm_pit *VAR_3 = VAR_1->arch.vpit;

 if (!VAR_3)
  return -VAR_0;





 FUNC_1(&VAR_3->pit_state.lock);
 FUNC_0(VAR_3, VAR_2->pit_reinject);
 FUNC_2(&VAR_3->pit_state.lock);

 return 0;
}
