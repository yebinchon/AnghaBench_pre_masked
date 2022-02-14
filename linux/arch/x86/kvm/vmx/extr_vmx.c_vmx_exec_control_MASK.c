
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int switch_db_regs; } ;
struct TYPE_6__ {int kvm; TYPE_1__ arch; } ;
struct vcpu_vmx {TYPE_3__ vcpu; } ;
struct TYPE_5__ {int cpu_based_exec_ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (TYPE_3__*) ;
 int VAR_11 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_2__ VAR_12 ;

u32 FUNC_3(struct vcpu_vmx *VAR_13)
{
 u32 VAR_14 = VAR_12.cpu_based_exec_ctrl;

 if (VAR_13->vcpu.arch.switch_db_regs & VAR_10)
  VAR_14 &= ~VAR_7;

 if (!FUNC_0(&VAR_13->vcpu)) {
  VAR_14 &= ~VAR_9;




 }
 if (!VAR_11)
  VAR_14 |= VAR_1 |
    VAR_0 |
    VAR_5;
 if (FUNC_2(VAR_13->vcpu.kvm))
  VAR_14 &= ~(VAR_8 |
    VAR_6);
 if (FUNC_1(VAR_13->vcpu.kvm))
  VAR_14 &= ~VAR_4;
 return VAR_14;
}
