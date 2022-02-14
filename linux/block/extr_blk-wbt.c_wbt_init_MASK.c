
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {struct request_queue* q; int * ops; int id; } ;
struct TYPE_4__ {int default_depth; } ;
struct rq_wb {int wc; TYPE_2__ rqos; int min_lat_nsec; int cb; TYPE_1__ rq_depth; int enable_state; int win_nsec; int last_issue; int last_comp; int * rq_wait; } ;
struct request_queue {int queue_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct rq_wb*) ;
 int FUNC_1 (struct request_queue*,int ) ;
 int FUNC_2 (int ,int ,int,struct rq_wb*) ;
 int VAR_8 ;
 int FUNC_3 (struct rq_wb*) ;
 struct rq_wb* FUNC_4 (int,int ) ;
 int FUNC_5 (struct request_queue*,TYPE_2__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int *) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_8 (struct request_queue*) ;
 int FUNC_9 (TYPE_2__*) ;
 int VAR_11 ;
 int FUNC_10 (struct request_queue*,int ) ;

int FUNC_11(struct request_queue *VAR_12)
{
 struct rq_wb *VAR_13;
 int VAR_14;

 VAR_13 = FUNC_4(sizeof(*VAR_13), VAR_1);
 if (!VAR_13)
  return -VAR_0;

 VAR_13->cb = FUNC_2(VAR_9, VAR_10, 2, VAR_13);
 if (!VAR_13->cb) {
  FUNC_3(VAR_13);
  return -VAR_0;
 }

 for (VAR_14 = 0; VAR_14 < VAR_6; VAR_14++)
  FUNC_6(&VAR_13->rq_wait[VAR_14]);

 VAR_13->rqos.id = VAR_3;
 VAR_13->rqos.ops = &VAR_11;
 VAR_13->rqos.q = VAR_12;
 VAR_13->last_comp = VAR_13->last_issue = VAR_8;
 VAR_13->win_nsec = VAR_5;
 VAR_13->enable_state = VAR_7;
 VAR_13->wc = 1;
 VAR_13->rq_depth.default_depth = VAR_4;
 FUNC_0(VAR_13);




 FUNC_5(VAR_12, &VAR_13->rqos);
 FUNC_1(VAR_12, VAR_13->cb);

 VAR_13->min_lat_nsec = FUNC_8(VAR_12);

 FUNC_9(&VAR_13->rqos);
 FUNC_10(VAR_12, FUNC_7(VAR_2, &VAR_12->queue_flags));

 return 0;
}
