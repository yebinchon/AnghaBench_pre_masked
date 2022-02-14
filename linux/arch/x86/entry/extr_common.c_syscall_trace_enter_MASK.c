
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct thread_info {int flags; } ;
struct seccomp_data {int arch; long nr; int * args; int instruction_pointer; } ;
struct pt_regs {long orig_ax; int bp; int di; int si; int dx; int cx; int bx; int r9; int r8; int r10; int ip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned long FUNC_3 (struct seccomp_data*) ;
 int VAR_7 ;
 struct thread_info* FUNC_4 () ;
 int FUNC_5 (struct pt_regs*,int) ;
 scalar_t__ FUNC_6 () ;
 struct pt_regs* FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct pt_regs*,long) ;
 unsigned long FUNC_10 (struct pt_regs*) ;
 scalar_t__ FUNC_11 (int ) ;

__attribute__((used)) static long FUNC_12(struct pt_regs *VAR_8)
{
 u32 VAR_9 = FUNC_6() ? VAR_0 : VAR_1;

 struct thread_info *VAR_10 = FUNC_4();
 unsigned long VAR_11 = 0;
 u32 VAR_12;

 if (FUNC_1(VAR_2))
  FUNC_0(VAR_8 != FUNC_7(VAR_7));

 VAR_12 = FUNC_2(VAR_10->flags);

 if (VAR_12 & (VAR_6 | VAR_5)) {
  VAR_11 = FUNC_10(VAR_8);
  if (VAR_11 || (VAR_12 & VAR_5))
   return -1L;
 }
 if (FUNC_11(FUNC_8(VAR_3)))
  FUNC_9(VAR_8, VAR_8->orig_ax);

 FUNC_5(VAR_8, VAR_9);

 return VAR_11 ?: VAR_8->orig_ax;
}
