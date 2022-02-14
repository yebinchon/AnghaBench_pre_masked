
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfq_queue {int pid; int bfqd; } ;
struct bfq_io_cq {int dummy; } ;
struct TYPE_2__ {int pid; } ;


 int FUNC_0 (struct bfq_queue*) ;
 int FUNC_1 (struct bfq_queue*) ;
 int FUNC_2 (int ,struct bfq_queue*,char*) ;
 int FUNC_3 (struct bfq_queue*) ;
 int FUNC_4 (struct bfq_queue*) ;
 int FUNC_5 (struct bfq_queue*) ;
 int FUNC_6 (struct bfq_io_cq*,int *,int) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static struct bfq_queue *
FUNC_7(struct bfq_io_cq *VAR_1, struct bfq_queue *VAR_2)
{
 FUNC_2(VAR_2->bfqd, VAR_2, "splitting queue");

 if (FUNC_5(VAR_2) == 1) {
  VAR_2->pid = VAR_0->pid;
  FUNC_0(VAR_2);
  FUNC_1(VAR_2);
  return VAR_2;
 }

 FUNC_6(VAR_1, ((void*)0), 1);

 FUNC_3(VAR_2);

 FUNC_4(VAR_2);
 return ((void*)0);
}
