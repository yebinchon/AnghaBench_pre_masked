
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct kvm_pit_state2 {int reserved; int flags; int channels; } ;
struct TYPE_6__ {TYPE_2__* vpit; } ;
struct kvm {TYPE_3__ arch; } ;
struct TYPE_4__ {int lock; int flags; int channels; } ;
struct TYPE_5__ {TYPE_1__ pit_state; } ;


 int FUNC_0 (int ,int *,int) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct kvm *VAR_0, struct kvm_pit_state2 *VAR_1)
{
 FUNC_2(&VAR_0->arch.vpit->pit_state.lock);
 FUNC_0(VAR_1->channels, &VAR_0->arch.vpit->pit_state.channels,
  sizeof(VAR_1->channels));
 VAR_1->flags = VAR_0->arch.vpit->pit_state.flags;
 FUNC_3(&VAR_0->arch.vpit->pit_state.lock);
 FUNC_1(&VAR_1->reserved, 0, sizeof(VAR_1->reserved));
 return 0;
}
