
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct kvm_pit_state2 {int flags; int channels; } ;
struct TYPE_5__ {int flags; int lock; TYPE_3__* channels; } ;
struct kvm_pit {TYPE_2__ pit_state; } ;
struct TYPE_4__ {struct kvm_pit* vpit; } ;
struct kvm {TYPE_1__ arch; } ;
struct TYPE_6__ {int count; } ;


 int VAR_0 ;
 int FUNC_0 (struct kvm_pit*,int,int ,int) ;
 int FUNC_1 (TYPE_3__**,int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct kvm *VAR_1, struct kvm_pit_state2 *VAR_2)
{
 int VAR_3 = 0;
 int VAR_4;
 u32 VAR_5, VAR_6;
 struct kvm_pit *VAR_7 = VAR_1->arch.vpit;

 FUNC_2(&VAR_7->pit_state.lock);
 VAR_5 = VAR_7->pit_state.flags & VAR_0;
 VAR_6 = VAR_2->flags & VAR_0;
 if (!VAR_5 && VAR_6)
  VAR_3 = 1;
 FUNC_1(&VAR_7->pit_state.channels, &VAR_2->channels,
        sizeof(VAR_7->pit_state.channels));
 VAR_7->pit_state.flags = VAR_2->flags;
 for (VAR_4 = 0; VAR_4 < 3; VAR_4++)
  FUNC_0(VAR_7, VAR_4, VAR_7->pit_state.channels[VAR_4].count,
       VAR_3 && VAR_4 == 0);
 FUNC_3(&VAR_7->pit_state.lock);
 return 0;
}
