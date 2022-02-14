
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int queue_lock; } ;
struct blkcg_gq {int dummy; } ;
struct blkcg {int dummy; } ;


 struct blkcg_gq* FUNC_0 (struct blkcg*,struct request_queue*) ;
 struct blkcg_gq* FUNC_1 (struct blkcg*,struct request_queue*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 scalar_t__ FUNC_4 (int) ;

struct blkcg_gq *FUNC_5(struct blkcg *VAR_0,
        struct request_queue *VAR_1)
{
 struct blkcg_gq *VAR_2 = FUNC_1(VAR_0, VAR_1);

 if (FUNC_4(!VAR_2)) {
  unsigned long VAR_3;

  FUNC_2(&VAR_1->queue_lock, VAR_3);
  VAR_2 = FUNC_0(VAR_0, VAR_1);
  FUNC_3(&VAR_1->queue_lock, VAR_3);
 }

 return VAR_2;
}
