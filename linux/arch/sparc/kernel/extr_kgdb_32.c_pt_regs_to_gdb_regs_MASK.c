
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reg_window32 {unsigned long* locals; unsigned long* ins; } ;
struct pt_regs {unsigned long* u_regs; unsigned long y; unsigned long psr; unsigned long pc; unsigned long npc; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;

void FUNC_0(unsigned long *VAR_17, struct pt_regs *VAR_18)
{
 struct reg_window32 *VAR_19;
 int VAR_20;

 VAR_17[VAR_4] = 0;
 for (VAR_20 = 0; VAR_20 < 15; VAR_20++)
  VAR_17[VAR_5 + VAR_20] = VAR_18->u_regs[VAR_15 + VAR_20];

 VAR_19 = (struct reg_window32 *) VAR_18->u_regs[VAR_14];
 for (VAR_20 = 0; VAR_20 < 8; VAR_20++)
  VAR_17[VAR_7 + VAR_20] = VAR_19->locals[VAR_20];
 for (VAR_20 = 0; VAR_20 < 8; VAR_20++)
  VAR_17[VAR_6 + VAR_20] = VAR_19->ins[VAR_20];

 for (VAR_20 = VAR_1; VAR_20 <= VAR_2; VAR_20++)
  VAR_17[VAR_20] = 0;

 VAR_17[VAR_13] = VAR_18->y;
 VAR_17[VAR_10] = VAR_18->psr;
 VAR_17[VAR_12] = 0;
 VAR_17[VAR_11] = (unsigned long) &VAR_16;
 VAR_17[VAR_9] = VAR_18->pc;
 VAR_17[VAR_8] = VAR_18->npc;
 VAR_17[VAR_3] = 0;
 VAR_17[VAR_0] = 0;
}
