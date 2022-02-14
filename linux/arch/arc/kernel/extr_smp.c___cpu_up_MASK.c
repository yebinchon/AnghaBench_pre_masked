
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct TYPE_2__ {int (* cpu_kick ) (unsigned int,unsigned long) ;} ;


 unsigned long VAR_0 ;
 int FUNC_0 (unsigned int,unsigned long) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 scalar_t__ VAR_1 ;
 unsigned long VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_2 (char*,unsigned int,...) ;
 struct task_struct* VAR_4 ;
 int FUNC_3 (unsigned int,unsigned long) ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;

int FUNC_5(unsigned int VAR_5, struct task_struct *VAR_6)
{
 unsigned long VAR_7;

 VAR_4 = VAR_6;

 FUNC_2("Idle Task [%d] %p", VAR_5, VAR_6);
 FUNC_2("Trying to bring up CPU%u ...\n", VAR_5);

 if (VAR_3.cpu_kick)
  VAR_3.cpu_kick(VAR_5,
    (unsigned long)VAR_1);
 else
  FUNC_0(VAR_5, (unsigned long)((void*)0));


 VAR_7 = VAR_2 + VAR_0;
 while (FUNC_4(VAR_2, VAR_7)) {
  if (FUNC_1(VAR_5))
   break;
 }

 if (!FUNC_1(VAR_5)) {
  FUNC_2("Timeout: CPU%u FAILED to comeup !!!\n", VAR_5);
  return -1;
 }

 VAR_4 = ((void*)0);

 return 0;
}
