
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct vcpu_vmx {int vcpu; } ;
struct TYPE_2__ {int pin_based_exec_ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 TYPE_1__ VAR_5 ;

u32 FUNC_1(struct vcpu_vmx *VAR_6)
{
 u32 VAR_7 = VAR_5.pin_based_exec_ctrl;

 if (!FUNC_0(&VAR_6->vcpu))
  VAR_7 &= ~VAR_0;

 if (!VAR_4)
  VAR_7 &= ~VAR_1;

 if (!VAR_3)
  VAR_7 &= ~VAR_2;

 return VAR_7;
}
