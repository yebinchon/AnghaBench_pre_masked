
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sbitmap {int dummy; } ;
struct kyber_ctx_queue {int lock; int * rq_list; } ;
struct flush_kcq_data {size_t sched_domain; int list; TYPE_1__* khd; } ;
struct TYPE_2__ {struct kyber_ctx_queue* kcqs; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct sbitmap*,unsigned int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static bool FUNC_4(struct sbitmap *VAR_0, unsigned int VAR_1, void *VAR_2)
{
 struct flush_kcq_data *VAR_3 = VAR_2;
 struct kyber_ctx_queue *VAR_4 = &VAR_3->khd->kcqs[VAR_1];

 FUNC_2(&VAR_4->lock);
 FUNC_0(&VAR_4->rq_list[VAR_3->sched_domain],
         VAR_3->list);
 FUNC_1(VAR_0, VAR_1);
 FUNC_3(&VAR_4->lock);

 return 1;
}
