
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sp; } ;
struct task_struct {scalar_t__ state; TYPE_1__ thread; } ;
struct inactive_task_frame {unsigned long bp; } ;


 unsigned long FUNC_0 (int ) ;
 unsigned long FUNC_1 (unsigned long) ;
 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 struct task_struct* VAR_3 ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (struct task_struct*) ;
 scalar_t__ FUNC_4 (struct task_struct*) ;
 int FUNC_5 (struct task_struct*) ;

unsigned long FUNC_6(struct task_struct *VAR_4)
{
 unsigned long VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11 = 0;
 int VAR_12 = 0;

 if (VAR_4 == VAR_3 || VAR_4->state == VAR_0)
  return 0;

 if (!FUNC_5(VAR_4))
  return 0;

 VAR_5 = (unsigned long)FUNC_4(VAR_4);
 if (!VAR_5)
  goto out;
 VAR_7 = VAR_5 + VAR_1 - VAR_2;
 VAR_7 -= 2 * sizeof(unsigned long);
 VAR_6 = VAR_5;

 VAR_8 = FUNC_0(VAR_4->thread.sp);
 if (VAR_8 < VAR_6 || VAR_8 > VAR_7)
  goto out;

 VAR_9 = FUNC_1(((struct inactive_task_frame *)VAR_8)->bp);
 do {
  if (VAR_9 < VAR_6 || VAR_9 > VAR_7)
   goto out;
  VAR_10 = FUNC_1(*(unsigned long *)(VAR_9 + sizeof(unsigned long)));
  if (!FUNC_2(VAR_10)) {
   VAR_11 = VAR_10;
   goto out;
  }
  VAR_9 = FUNC_1(*(unsigned long *)VAR_9);
 } while (VAR_12++ < 16 && VAR_4->state != VAR_0);

out:
 FUNC_3(VAR_4);
 return VAR_11;
}
