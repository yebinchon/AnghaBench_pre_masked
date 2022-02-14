
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {unsigned long fp; unsigned long sp; unsigned long blink; unsigned long ret; unsigned long status32; unsigned long lp_count; unsigned long lp_end; unsigned long lp_start; unsigned long bta; } ;
struct callee_regs {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 unsigned long FUNC_0 (int,struct pt_regs*,struct callee_regs*) ;

__attribute__((used)) static void FUNC_1(unsigned long *VAR_12, struct pt_regs *VAR_13,
   struct callee_regs *VAR_14)
{
 int VAR_15;

 for (VAR_15 = 0; VAR_15 <= 26; VAR_15++)
  VAR_12[VAR_7 + VAR_15] = FUNC_0(VAR_15, VAR_13, VAR_14);

 for (VAR_15 = 27; VAR_15 < VAR_0; VAR_15++)
  VAR_12[VAR_15] = 0;

 VAR_12[VAR_3] = VAR_13->fp;
 VAR_12[VAR_11] = VAR_13->sp;
 VAR_12[VAR_1] = VAR_13->blink;
 VAR_12[VAR_8] = VAR_13->ret;
 VAR_12[VAR_9] = VAR_13->status32;
 VAR_12[VAR_4] = VAR_13->lp_count;
 VAR_12[VAR_5] = VAR_13->lp_end;
 VAR_12[VAR_6] = VAR_13->lp_start;
 VAR_12[VAR_2] = VAR_13->bta;
 VAR_12[VAR_10] = VAR_13->ret;
}
