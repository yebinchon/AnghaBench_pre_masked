
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct kvm_kpit_channel_state* channels; scalar_t__ flags; } ;
struct kvm_pit {TYPE_1__ pit_state; } ;
struct kvm_kpit_channel_state {int mode; int gate; } ;


 int FUNC_0 (struct kvm_pit*) ;
 int FUNC_1 (struct kvm_pit*,int,int ) ;

__attribute__((used)) static void FUNC_2(struct kvm_pit *VAR_0)
{
 int VAR_1;
 struct kvm_kpit_channel_state *VAR_2;

 VAR_0->pit_state.flags = 0;
 for (VAR_1 = 0; VAR_1 < 3; VAR_1++) {
  VAR_2 = &VAR_0->pit_state.channels[VAR_1];
  VAR_2->mode = 0xff;
  VAR_2->gate = (VAR_1 != 2);
  FUNC_1(VAR_0, VAR_1, 0);
 }

 FUNC_0(VAR_0);
}
