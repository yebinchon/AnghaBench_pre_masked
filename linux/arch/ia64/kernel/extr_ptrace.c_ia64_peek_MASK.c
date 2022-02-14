
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct switch_stack {int dummy; } ;
struct pt_regs {scalar_t__ ar_bspstore; } ;
typedef int ret ;


 long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (struct task_struct*,unsigned long,long*,int,int ) ;
 long FUNC_1 (struct task_struct*,struct switch_stack*,unsigned long*,unsigned long*,unsigned long*) ;
 unsigned long FUNC_2 (unsigned long*,unsigned long*) ;
 unsigned long* FUNC_3 (unsigned long*) ;
 long* FUNC_4 (unsigned long*,unsigned long) ;
 unsigned long FUNC_5 (unsigned long*) ;
 scalar_t__ FUNC_6 (unsigned long,unsigned long,unsigned long) ;
 struct pt_regs* FUNC_7 (struct task_struct*) ;

long
FUNC_8 (struct task_struct *VAR_3, struct switch_stack *VAR_4,
    unsigned long VAR_5, unsigned long VAR_6, long *VAR_7)
{
 unsigned long *VAR_8, *VAR_9, VAR_10, *VAR_11, *VAR_12, *VAR_13;
 struct pt_regs *VAR_14;
 size_t VAR_15;
 long VAR_16;

 VAR_12 = (long *) VAR_5;
 VAR_11 = (unsigned long *) VAR_6;
 VAR_14 = FUNC_7(VAR_3);
 VAR_8 = (unsigned long *) VAR_14->ar_bspstore;
 VAR_9 = (unsigned long *) VAR_3 + VAR_2/8;
 if (FUNC_6(VAR_6, (unsigned long) VAR_8,
     (unsigned long) VAR_12))
 {





  VAR_13 = FUNC_3(VAR_11);
  VAR_16 = FUNC_1(VAR_3, VAR_4, VAR_9, VAR_13, VAR_12);

  if (VAR_11 == VAR_13) {

   *VAR_7 = VAR_16;
   return 0;
  }

  if (((1UL << FUNC_5(VAR_11)) & VAR_16) != 0) {
   *VAR_7 = 0;
   return 0;
  }

  if (VAR_11 < VAR_12) {




   VAR_10 = FUNC_2(VAR_8, VAR_11);
   *VAR_7 = *FUNC_4(VAR_9, VAR_10);
   return 0;
  }
 }
 VAR_15 = FUNC_0(VAR_3, VAR_6, &VAR_16, sizeof(VAR_16), VAR_1);
 if (VAR_15 != sizeof(VAR_16))
  return -VAR_0;
 *VAR_7 = VAR_16;
 return 0;
}
