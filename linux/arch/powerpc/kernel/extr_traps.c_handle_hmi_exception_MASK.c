
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
struct TYPE_4__ {scalar_t__ hmi_p9_special_emu; } ;
struct TYPE_3__ {int (* handle_hmi_exception ) (struct pt_regs*) ;} ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 TYPE_2__* VAR_0 ;
 int FUNC_2 (struct pt_regs*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 TYPE_1__ VAR_1 ;
 struct pt_regs* FUNC_5 (struct pt_regs*) ;
 int FUNC_6 (struct pt_regs*) ;

void FUNC_7(struct pt_regs *VAR_2)
{
 struct pt_regs *VAR_3;

 VAR_3 = FUNC_5(VAR_2);
 FUNC_0();
 if (VAR_1.handle_hmi_exception)
  VAR_1.handle_hmi_exception(VAR_2);

 FUNC_1();
 FUNC_5(VAR_3);
}
