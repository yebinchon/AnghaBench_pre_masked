
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct kvm_kpit_state {TYPE_1__* channels; } ;
struct kvm_pit {struct kvm_kpit_state pit_state; } ;
struct TYPE_2__ {int count; int mode; int count_load_time; } ;


 int FUNC_0 (struct kvm_pit*,int,int) ;
 int FUNC_1 (struct kvm_pit*) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,int,int) ;

__attribute__((used)) static void FUNC_4(struct kvm_pit *VAR_0, int VAR_1, u32 VAR_2)
{
 struct kvm_kpit_state *VAR_3 = &VAR_0->pit_state;

 FUNC_3("load_count val is %d, channel is %d\n", VAR_2, VAR_1);





 if (VAR_2 == 0)
  VAR_2 = 0x10000;

 VAR_3->channels[VAR_1].count = VAR_2;

 if (VAR_1 != 0) {
  VAR_3->channels[VAR_1].count_load_time = FUNC_2();
  return;
 }



 switch (VAR_3->channels[0].mode) {
 case 0:
 case 1:

 case 4:
  FUNC_0(VAR_0, VAR_2, 0);
  break;
 case 2:
 case 3:
  FUNC_0(VAR_0, VAR_2, 1);
  break;
 default:
  FUNC_1(VAR_0);
 }
}
