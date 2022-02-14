
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {struct kvm_kpit_channel_state* channels; } ;
struct kvm_pit {TYPE_1__ pit_state; } ;
struct kvm_kpit_channel_state {int mode; int gate; int count_load_time; } ;


 int FUNC_0 () ;

__attribute__((used)) static void FUNC_1(struct kvm_pit *VAR_0, int VAR_1, u32 VAR_2)
{
 struct kvm_kpit_channel_state *VAR_3 = &VAR_0->pit_state.channels[VAR_1];

 switch (VAR_3->mode) {
 default:
 case 0:
 case 4:

  break;
 case 1:
 case 2:
 case 3:
 case 5:

  if (VAR_3->gate < VAR_2)
   VAR_3->count_load_time = FUNC_0();
  break;
 }

 VAR_3->gate = VAR_2;
}
