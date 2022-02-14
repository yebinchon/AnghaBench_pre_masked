
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;
typedef enum ctx_state { ____Placeholder_ctx_state } ctx_state ;


 int FUNC_0 (struct pt_regs*,unsigned long,unsigned long) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;

int FUNC_3(struct pt_regs *VAR_0, unsigned long VAR_1,
    unsigned long VAR_2)
{
 enum ctx_state VAR_3 = FUNC_1();
 int VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2);
 FUNC_2(VAR_3);
 return VAR_4;
}
