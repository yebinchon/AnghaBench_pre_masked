
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int efer; } ;
struct TYPE_6__ {TYPE_1__ arch; } ;
struct vcpu_vmx {int save_nmsrs; int guest_msrs_ready; TYPE_2__ vcpu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct vcpu_vmx*,int ) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (struct vcpu_vmx*,int,int ) ;
 scalar_t__ FUNC_5 (struct vcpu_vmx*,int) ;
 int FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_7(struct vcpu_vmx *VAR_7)
{
 int VAR_8, VAR_9;

 VAR_8 = 0;
 VAR_9 = FUNC_0(VAR_7, VAR_1);
 if (VAR_9 >= 0 && FUNC_5(VAR_7, VAR_9))
  FUNC_4(VAR_7, VAR_9, VAR_8++);
 VAR_9 = FUNC_0(VAR_7, VAR_5);
 if (VAR_9 >= 0 && FUNC_2(&VAR_7->vcpu, VAR_6))
  FUNC_4(VAR_7, VAR_9, VAR_8++);

 VAR_7->save_nmsrs = VAR_8;
 VAR_7->guest_msrs_ready = 0;

 if (FUNC_1())
  FUNC_6(&VAR_7->vcpu);
}
