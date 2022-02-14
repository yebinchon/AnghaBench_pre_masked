
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct kvm_kpit_channel_state* channels; } ;
struct kvm_pit {TYPE_1__ pit_state; } ;
struct kvm_kpit_channel_state {int mode; int count; } ;
typedef int s64 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kvm_pit*,struct kvm_kpit_channel_state*,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct kvm_pit *VAR_2, int VAR_3)
{
 struct kvm_kpit_channel_state *VAR_4 = &VAR_2->pit_state.channels[VAR_3];
 s64 VAR_5, VAR_6;
 int VAR_7;

 VAR_6 = FUNC_0(VAR_2, VAR_4, VAR_3);
 VAR_5 = FUNC_2(VAR_6, VAR_0, VAR_1);

 switch (VAR_4->mode) {
 case 0:
 case 1:
 case 4:
 case 5:
  VAR_7 = (VAR_4->count - VAR_5) & 0xffff;
  break;
 case 3:

  VAR_7 = VAR_4->count - (FUNC_1((2 * VAR_5), VAR_4->count));
  break;
 default:
  VAR_7 = VAR_4->count - FUNC_1(VAR_5, VAR_4->count);
  break;
 }
 return VAR_7;
}
