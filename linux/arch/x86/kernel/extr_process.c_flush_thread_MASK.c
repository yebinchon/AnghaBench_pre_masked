
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fpu; int tls_array; } ;
struct task_struct {TYPE_1__ thread; } ;


 struct task_struct* VAR_0 ;
 int FUNC_0 (struct task_struct*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int) ;

void FUNC_3(void)
{
 struct task_struct *VAR_1 = VAR_0;

 FUNC_0(VAR_1);
 FUNC_2(VAR_1->thread.tls_array, 0, sizeof(VAR_1->thread.tls_array));

 FUNC_1(&VAR_1->thread.fpu);
}
