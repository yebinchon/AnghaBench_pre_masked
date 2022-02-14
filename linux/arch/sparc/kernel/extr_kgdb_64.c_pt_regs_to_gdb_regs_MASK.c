
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reg_window {unsigned long* locals; unsigned long* ins; } ;
struct pt_regs {unsigned long* u_regs; unsigned long tpc; unsigned long tnpc; unsigned long tstate; unsigned long y; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 scalar_t__ VAR_12 ;
 size_t VAR_13 ;
 int VAR_14 ;

void FUNC_0(unsigned long *VAR_15, struct pt_regs *VAR_16)
{
 struct reg_window *VAR_17;
 int VAR_18;

 VAR_15[VAR_4] = 0;
 for (VAR_18 = 0; VAR_18 < 15; VAR_18++)
  VAR_15[VAR_5 + VAR_18] = VAR_16->u_regs[VAR_14 + VAR_18];

 VAR_17 = (struct reg_window *) (VAR_16->u_regs[VAR_13] + VAR_12);
 for (VAR_18 = 0; VAR_18 < 8; VAR_18++)
  VAR_15[VAR_7 + VAR_18] = VAR_17->locals[VAR_18];
 for (VAR_18 = 0; VAR_18 < 8; VAR_18++)
  VAR_15[VAR_6 + VAR_18] = VAR_17->ins[VAR_18];

 for (VAR_18 = VAR_0; VAR_18 <= VAR_1; VAR_18++)
  VAR_15[VAR_18] = 0;

 VAR_15[VAR_9] = VAR_16->tpc;
 VAR_15[VAR_8] = VAR_16->tnpc;
 VAR_15[VAR_10] = VAR_16->tstate;
 VAR_15[VAR_3] = 0;
 VAR_15[VAR_2] = 0;
 VAR_15[VAR_11] = VAR_16->y;
}
