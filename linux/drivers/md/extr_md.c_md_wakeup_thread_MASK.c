
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct md_thread {int wqueue; int flags; TYPE_1__* tsk; } ;
struct TYPE_2__ {int comm; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct md_thread *VAR_1)
{
 if (VAR_1) {
  FUNC_0("md: waking up MD thread %s.\n", VAR_1->tsk->comm);
  FUNC_1(VAR_0, &VAR_1->flags);
  FUNC_2(&VAR_1->wqueue);
 }
}
