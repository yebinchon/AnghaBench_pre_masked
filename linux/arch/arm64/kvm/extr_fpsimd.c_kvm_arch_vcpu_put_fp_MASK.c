
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_4__ {int * sys_regs; } ;
struct TYPE_3__ {int flags; TYPE_2__ ctxt; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int FUNC_0 () ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (struct kvm_vcpu*) ;

void FUNC_8(struct kvm_vcpu *VAR_8)
{
 unsigned long VAR_9;
 bool VAR_10 = FUNC_5();
 bool VAR_11 = FUNC_7(VAR_8);

 FUNC_2(VAR_9);

 if (VAR_8->arch.flags & VAR_2) {
  u64 *VAR_12 = &VAR_8->arch.ctxt.sys_regs[VAR_7];

  FUNC_0();

  if (VAR_11)
   *VAR_12 = FUNC_3(VAR_5);
 } else if (VAR_10) {







  if (VAR_8->arch.flags & VAR_3)
   FUNC_4(VAR_0, 0, VAR_1);
  else
   FUNC_4(VAR_0, VAR_1, 0);
 }

 FUNC_6(VAR_6,
      VAR_8->arch.flags & VAR_4);

 FUNC_1(VAR_9);
}
