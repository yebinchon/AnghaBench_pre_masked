
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {unsigned long fp; unsigned long sp; unsigned long blink; unsigned long ret; unsigned long status32; unsigned long lp_count; unsigned long lp_end; unsigned long lp_start; unsigned long bta; } ;
struct callee_regs {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int FUNC_0 (int,unsigned long,struct pt_regs*,struct callee_regs*) ;

__attribute__((used)) static void FUNC_1(unsigned long *VAR_10, struct pt_regs *VAR_11,
   struct callee_regs *VAR_12)
{
 int VAR_13;

 for (VAR_13 = 0; VAR_13 <= 26; VAR_13++)
  FUNC_0(VAR_13, VAR_10[VAR_13 + VAR_6], VAR_11, VAR_12);

 VAR_11->fp = VAR_10[VAR_2];
 VAR_11->sp = VAR_10[VAR_9];
 VAR_11->blink = VAR_10[VAR_0];
 VAR_11->ret = VAR_10[VAR_7];
 VAR_11->status32 = VAR_10[VAR_8];
 VAR_11->lp_count = VAR_10[VAR_3];
 VAR_11->lp_end = VAR_10[VAR_4];
 VAR_11->lp_start = VAR_10[VAR_5];
 VAR_11->bta = VAR_10[VAR_1];
}
