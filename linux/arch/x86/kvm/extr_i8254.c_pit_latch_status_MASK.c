
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct kvm_kpit_channel_state* channels; } ;
struct kvm_pit {TYPE_1__ pit_state; } ;
struct kvm_kpit_channel_state {int status_latched; int status; int rw_mode; int mode; int bcd; } ;


 int FUNC_0 (struct kvm_pit*,int) ;

__attribute__((used)) static void FUNC_1(struct kvm_pit *VAR_0, int VAR_1)
{
 struct kvm_kpit_channel_state *VAR_2 = &VAR_0->pit_state.channels[VAR_1];

 if (!VAR_2->status_latched) {

  VAR_2->status = ((FUNC_0(VAR_0, VAR_1) << 7) |
    (VAR_2->rw_mode << 4) |
    (VAR_2->mode << 1) |
    VAR_2->bcd);
  VAR_2->status_latched = 1;
 }
}
