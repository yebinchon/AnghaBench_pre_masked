
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
struct fpustate {int dummy; } ;
typedef enum ctx_state { ____Placeholder_ctx_state } ctx_state ;
struct TYPE_2__ {int* xfsr; } ;


 int VAR_0 ;
 struct fpustate* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (struct pt_regs*) ;
 int FUNC_2 (struct pt_regs*,struct fpustate*,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int ,char*,struct pt_regs*,int ,int,int ) ;

void FUNC_6(struct pt_regs *VAR_4)
{
 enum ctx_state VAR_5 = FUNC_3();
 struct fpustate *VAR_6 = VAR_1;
 int VAR_7 = 0;

 if (FUNC_5(VAR_0, "fpu exception other", VAR_4,
         0, 0x25, VAR_3) == VAR_2)
  goto out;

 switch ((FUNC_0()->xfsr[0] & 0x1c000)) {
 case (2 << 14):
 case (3 << 14):
  VAR_7 = FUNC_2(VAR_4, VAR_6, 0);
  break;
 }
 if (VAR_7)
  goto out;
 FUNC_1(VAR_4);
out:
 FUNC_4(VAR_5);
}
