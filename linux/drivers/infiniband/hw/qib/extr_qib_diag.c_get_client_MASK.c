
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qib_diag_client {int state; int pid; struct qib_devdata* dd; struct qib_diag_client* next; } ;
struct qib_devdata {int dummy; } ;
struct TYPE_2__ {int pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct qib_diag_client* VAR_2 ;
 TYPE_1__* VAR_3 ;
 struct qib_diag_client* FUNC_0 (int,int ) ;

__attribute__((used)) static struct qib_diag_client *FUNC_1(struct qib_devdata *VAR_4)
{
 struct qib_diag_client *VAR_5;

 VAR_5 = VAR_2;
 if (VAR_5)

  VAR_2 = VAR_5->next;
 else

  VAR_5 = FUNC_0(sizeof(*VAR_5), VAR_0);

 if (VAR_5) {
  VAR_5->next = ((void*)0);
  VAR_5->dd = VAR_4;
  VAR_5->pid = VAR_3->pid;
  VAR_5->state = VAR_1;
 }
 return VAR_5;
}
