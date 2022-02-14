
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int dummy; } ;
struct request {int dummy; } ;
struct blk_flush_queue {int flush_data_in_flight; int * flush_queue; void* flush_rq; int mq_flush_lock; } ;
typedef int gfp_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (struct blk_flush_queue*) ;
 void* FUNC_3 (int,int ,int) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;

struct blk_flush_queue *FUNC_6(struct request_queue *VAR_0,
  int VAR_1, int VAR_2, gfp_t VAR_3)
{
 struct blk_flush_queue *VAR_4;
 int VAR_5 = sizeof(struct request);

 VAR_4 = FUNC_3(sizeof(*VAR_4), VAR_3, VAR_1);
 if (!VAR_4)
  goto fail;

 FUNC_5(&VAR_4->mq_flush_lock);

 VAR_5 = FUNC_4(VAR_5 + VAR_2, FUNC_1());
 VAR_4->flush_rq = FUNC_3(VAR_5, VAR_3, VAR_1);
 if (!VAR_4->flush_rq)
  goto fail_rq;

 FUNC_0(&VAR_4->flush_queue[0]);
 FUNC_0(&VAR_4->flush_queue[1]);
 FUNC_0(&VAR_4->flush_data_in_flight);

 return VAR_4;

 fail_rq:
 FUNC_2(VAR_4);
 fail:
 return ((void*)0);
}
