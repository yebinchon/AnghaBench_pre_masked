
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rq_qos {struct request_queue* q; int * ops; int id; } ;
struct request_queue {int dummy; } ;
struct blk_iolatency {int timer; struct rq_qos rqos; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct request_queue*,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct blk_iolatency*) ;
 struct blk_iolatency* FUNC_2 (int,int ) ;
 int FUNC_3 (struct request_queue*,struct rq_qos*) ;
 int FUNC_4 (struct request_queue*,struct rq_qos*) ;
 int FUNC_5 (int *,int ,int ) ;

int FUNC_6(struct request_queue *VAR_6)
{
 struct blk_iolatency *VAR_7;
 struct rq_qos *VAR_8;
 int VAR_9;

 VAR_7 = FUNC_2(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_8 = &VAR_7->rqos;
 VAR_8->id = VAR_2;
 VAR_8->ops = &VAR_3;
 VAR_8->q = VAR_6;

 FUNC_3(VAR_6, VAR_8);

 VAR_9 = FUNC_0(VAR_6, &VAR_4);
 if (VAR_9) {
  FUNC_4(VAR_6, VAR_8);
  FUNC_1(VAR_7);
  return VAR_9;
 }

 FUNC_5(&VAR_7->timer, VAR_5, 0);

 return 0;
}
