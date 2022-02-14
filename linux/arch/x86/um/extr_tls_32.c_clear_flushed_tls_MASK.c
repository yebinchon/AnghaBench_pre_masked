
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uml_tls_struct {scalar_t__ flushed; int present; } ;
struct TYPE_3__ {struct uml_tls_struct* tls_array; } ;
struct TYPE_4__ {TYPE_1__ arch; } ;
struct task_struct {TYPE_2__ thread; } ;


 int VAR_0 ;
 int VAR_1 ;

void FUNC_0(struct task_struct *VAR_2)
{
 int VAR_3;

 for (VAR_3 = VAR_1; VAR_3 < VAR_0; VAR_3++) {
  struct uml_tls_struct* VAR_4 =
   &VAR_2->thread.arch.tls_array[VAR_3 - VAR_1];





  if (!VAR_4->present)
   continue;

  VAR_4->flushed = 0;
 }
}
