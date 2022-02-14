
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int queue_lock; } ;
struct io_context {int dummy; } ;
struct bfq_io_cq {int dummy; } ;
struct bfq_data {int dummy; } ;


 struct bfq_io_cq* FUNC_0 (int ) ;
 int FUNC_1 (struct io_context*,struct request_queue*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static struct bfq_io_cq *FUNC_4(struct bfq_data *VAR_0,
     struct io_context *VAR_1,
     struct request_queue *VAR_2)
{
 if (VAR_1) {
  unsigned long VAR_3;
  struct bfq_io_cq *VAR_4;

  FUNC_2(&VAR_2->queue_lock, VAR_3);
  VAR_4 = FUNC_0(FUNC_1(VAR_1, VAR_2));
  FUNC_3(&VAR_2->queue_lock, VAR_3);

  return VAR_4;
 }

 return ((void*)0);
}
