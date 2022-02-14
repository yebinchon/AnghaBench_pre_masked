
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long usp; scalar_t__ esp0; } ;
struct task_struct {TYPE_1__ thread; } ;


 int FUNC_0 (scalar_t__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__* VAR_3 ;
 long VAR_4 ;

__attribute__((used)) static inline int FUNC_2(struct task_struct *VAR_5, int VAR_6,
     unsigned long VAR_7)
{
 unsigned long *VAR_8;

 if (VAR_6 == VAR_2)
  VAR_8 = &VAR_5->thread.usp;
 else if (VAR_6 < FUNC_0(VAR_3))
  VAR_8 = (unsigned long *)(VAR_5->thread.esp0 + VAR_3[VAR_6]);
 else
  return -1;

 if (VAR_6 == VAR_1 || VAR_6 == VAR_0) {
  long VAR_9 = *(long *)(VAR_5->thread.esp0 + FUNC_1(VAR_9));
  VAR_8 = (unsigned long *) ((unsigned long)VAR_8 + VAR_9);

  if (VAR_6 == VAR_1) {
   *(unsigned short *)VAR_8 = VAR_7;
   return 0;
  }
 }
 *VAR_8 = VAR_7;
 return 0;
}
