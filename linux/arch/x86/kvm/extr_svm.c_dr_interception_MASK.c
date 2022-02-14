
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int switch_db_regs; } ;
struct TYPE_13__ {scalar_t__ guest_debug; TYPE_1__ arch; } ;
struct vcpu_svm {TYPE_4__ vcpu; TYPE_3__* vmcb; } ;
struct TYPE_11__ {int exit_info_1; int exit_code; } ;
struct TYPE_12__ {TYPE_2__ control; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct vcpu_svm*) ;
 int FUNC_2 (struct vcpu_svm*) ;
 int FUNC_3 (TYPE_4__*,int,unsigned long*) ;
 unsigned long FUNC_4 (TYPE_4__*,int) ;
 int FUNC_5 (TYPE_4__*,int,unsigned long) ;
 int FUNC_6 (TYPE_4__*,int) ;
 int FUNC_7 (TYPE_4__*,int,unsigned long) ;
 int FUNC_8 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_9(struct vcpu_svm *VAR_4)
{
 int VAR_5, VAR_6;
 unsigned long VAR_7;

 if (VAR_4->vcpu.guest_debug == 0) {





  FUNC_1(VAR_4);
  VAR_4->vcpu.arch.switch_db_regs |= VAR_0;
  return 1;
 }

 if (!FUNC_0(VAR_3))
  return FUNC_2(VAR_4);

 VAR_5 = VAR_4->vmcb->control.exit_info_1 & VAR_1;
 VAR_6 = VAR_4->vmcb->control.exit_code - VAR_2;

 if (VAR_6 >= 16) {
  if (!FUNC_6(&VAR_4->vcpu, VAR_6 - 16))
   return 1;
  VAR_7 = FUNC_4(&VAR_4->vcpu, VAR_5);
  FUNC_7(&VAR_4->vcpu, VAR_6 - 16, VAR_7);
 } else {
  if (!FUNC_6(&VAR_4->vcpu, VAR_6))
   return 1;
  FUNC_3(&VAR_4->vcpu, VAR_6, &VAR_7);
  FUNC_5(&VAR_4->vcpu, VAR_5, VAR_7);
 }

 return FUNC_8(&VAR_4->vcpu);
}
