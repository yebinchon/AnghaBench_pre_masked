
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int dummy; } ;
struct request {int tag; int internal_tag; int ref; int * part; int start_time_ns; int rb_node; int hash; scalar_t__ __sector; struct request_queue* q; int queuelist; } ;
typedef scalar_t__ sector_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (struct request*,int ,int) ;
 int FUNC_5 (int *,int) ;

void FUNC_6(struct request_queue *VAR_0, struct request *VAR_1)
{
 FUNC_4(VAR_1, 0, sizeof(*VAR_1));

 FUNC_1(&VAR_1->queuelist);
 VAR_1->q = VAR_0;
 VAR_1->__sector = (sector_t) -1;
 FUNC_0(&VAR_1->hash);
 FUNC_2(&VAR_1->rb_node);
 VAR_1->tag = -1;
 VAR_1->internal_tag = -1;
 VAR_1->start_time_ns = FUNC_3();
 VAR_1->part = ((void*)0);
 FUNC_5(&VAR_1->ref, 1);
}
