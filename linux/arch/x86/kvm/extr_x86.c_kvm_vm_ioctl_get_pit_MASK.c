
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kvm_pit_state {int dummy; } ;
struct kvm_kpit_state {int lock; int channels; } ;
struct TYPE_4__ {TYPE_1__* vpit; } ;
struct kvm {TYPE_2__ arch; } ;
struct TYPE_3__ {struct kvm_kpit_state pit_state; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct kvm_pit_state*,int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct kvm *VAR_0, struct kvm_pit_state *VAR_1)
{
 struct kvm_kpit_state *VAR_2 = &VAR_0->arch.vpit->pit_state;

 FUNC_0(sizeof(*VAR_1) != sizeof(VAR_2->channels));

 FUNC_2(&VAR_2->lock);
 FUNC_1(VAR_1, &VAR_2->channels, sizeof(*VAR_1));
 FUNC_3(&VAR_2->lock);
 return 0;
}
