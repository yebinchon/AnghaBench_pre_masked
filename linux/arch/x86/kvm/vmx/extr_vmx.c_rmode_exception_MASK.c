
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct kvm_vcpu {int guest_debug; } ;
struct TYPE_4__ {int event_exit_inst_len; } ;
struct TYPE_5__ {TYPE_1__ arch; } ;
struct TYPE_6__ {TYPE_2__ vcpu; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int VAR_3 ;
 TYPE_3__* FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(struct kvm_vcpu *VAR_4, int VAR_5)
{
 switch (VAR_5) {
 case 137:




  FUNC_0(VAR_4)->vcpu.arch.event_exit_inst_len =
   FUNC_1(VAR_3);
  if (VAR_4->guest_debug & VAR_2)
   return 0;

 case 135:
  if (VAR_4->guest_debug &
   (VAR_0 | VAR_1))
   return 0;

 case 134:
 case 130:
 case 136:
 case 128:
 case 133:
 case 129:
 case 132:
 case 131:
  return 1;
 break;
 }
 return 0;
}
