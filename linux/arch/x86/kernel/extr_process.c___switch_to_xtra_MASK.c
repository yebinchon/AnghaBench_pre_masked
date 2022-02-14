
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread_struct {int dummy; } ;
struct task_struct {struct thread_struct thread; } ;
struct TYPE_2__ {int flags; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_0 (int ) ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 int FUNC_1 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct task_struct*,struct task_struct*) ;
 int FUNC_6 (int ,unsigned long) ;
 int FUNC_7 (int) ;
 unsigned long FUNC_8 (struct task_struct*) ;
 int FUNC_9 (struct thread_struct*,struct thread_struct*,unsigned long,unsigned long) ;
 TYPE_1__* FUNC_10 (struct task_struct*) ;
 int FUNC_11 (int ,unsigned long) ;

void FUNC_12(struct task_struct *VAR_9, struct task_struct *VAR_10)
{
 struct thread_struct *VAR_11, *VAR_12;
 unsigned long VAR_13, VAR_14;

 VAR_11 = &VAR_9->thread;
 VAR_12 = &VAR_10->thread;

 VAR_14 = FUNC_0(FUNC_10(VAR_10)->flags);
 VAR_13 = FUNC_0(FUNC_10(VAR_9)->flags);
 FUNC_9(VAR_11, VAR_12, VAR_13, VAR_14);

 FUNC_5(VAR_9, VAR_10);

 if ((VAR_13 & VAR_5 || VAR_14 & VAR_5) &&
     FUNC_2()) {
  unsigned long VAR_15, VAR_16;

  FUNC_6(VAR_2, VAR_15);
  VAR_15 &= ~VAR_0;
  VAR_16 = VAR_14 & VAR_5;
  VAR_15 |= (VAR_16 >> VAR_3) << VAR_1;
  FUNC_11(VAR_2, VAR_15);
 }

 if ((VAR_13 ^ VAR_14) & VAR_7)
  FUNC_3(VAR_4);

 if ((VAR_13 ^ VAR_14) & VAR_6)
  FUNC_7(!!(VAR_14 & VAR_6));

 if (FUNC_4(!((VAR_13 | VAR_14) & VAR_8))) {
  FUNC_1(VAR_13, VAR_14);
 } else {
  FUNC_8(VAR_9);
  VAR_14 = FUNC_8(VAR_10);


  FUNC_1(~VAR_14, VAR_14);
 }
}
