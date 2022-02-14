
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* tls_array; } ;
struct thread_struct {TYPE_2__ arch; } ;
struct task_struct {struct thread_struct thread; } ;
struct TYPE_3__ {int present; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct task_struct* VAR_3)
{
 struct thread_struct *VAR_4 = &VAR_3->thread;
 int VAR_5;

 if (!VAR_4->arch.tls_array)
  return VAR_2;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
  if (!VAR_4->arch.tls_array[VAR_5].present)
   return VAR_5 + VAR_2;
 return -VAR_0;
}
