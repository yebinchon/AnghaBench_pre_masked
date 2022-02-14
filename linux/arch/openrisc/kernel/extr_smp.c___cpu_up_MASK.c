
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct TYPE_2__ {int pgd; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,struct task_struct*) ;
 int VAR_1 ;
 int * VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,unsigned int) ;
 int FUNC_3 (char*,unsigned int) ;
 int VAR_4 ;
 int * VAR_5 ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (struct task_struct*) ;
 int FUNC_6 (int *,int ) ;

int FUNC_7(unsigned int VAR_6, struct task_struct *VAR_7)
{
 if (VAR_5 == ((void*)0)) {
  FUNC_3("CPU%u: failed to start, IPI controller missing",
   VAR_6);
  return -VAR_0;
 }

 VAR_4 = FUNC_5(VAR_7);
 VAR_2[VAR_6] = VAR_3.pgd;

 FUNC_0(VAR_6, VAR_7);
 if (!FUNC_6(&VAR_1,
     FUNC_1(1000))) {
  FUNC_2("CPU%u: failed to start\n", VAR_6);
  return -VAR_0;
 }
 FUNC_4(VAR_6);

 return 0;
}
