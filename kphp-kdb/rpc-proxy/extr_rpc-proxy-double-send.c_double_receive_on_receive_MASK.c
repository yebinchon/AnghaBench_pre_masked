
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* h; int * remote_pid; } ;
struct TYPE_3__ {int qid; } ;


 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int,char*) ;

int FUNC_3 (void) {
  int VAR_2 = FUNC_1 (*VAR_0->remote_pid, VAR_0->h->qid);
  FUNC_0 (VAR_2 >= 0);
  if (!VAR_2) {
    FUNC_2 (2, "Duplicate query. Skipping.");
    return VAR_1;
  }
  return 0;
}
