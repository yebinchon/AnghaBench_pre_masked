
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msm_ringbuffer {size_t id; int lock; } ;
struct msm_gpu {int nr_rings; } ;
struct adreno_gpu {int dummy; } ;
struct a5xx_gpu {int preempt_timer; struct msm_ringbuffer* next_ring; int * preempt_iova; TYPE_1__** preempt; struct msm_ringbuffer* cur_ring; } ;
struct TYPE_2__ {int wptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct msm_ringbuffer* FUNC_0 (struct msm_gpu*) ;
 int FUNC_1 (struct msm_ringbuffer*) ;
 int FUNC_2 (struct msm_gpu*,int ,int) ;
 int FUNC_3 (struct msm_gpu*,int ,int ,int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (int *,scalar_t__) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct a5xx_gpu*,int ) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 struct a5xx_gpu* FUNC_9 (struct adreno_gpu*) ;
 struct adreno_gpu* FUNC_10 (struct msm_gpu*) ;
 int FUNC_11 (struct a5xx_gpu*,int ,int ) ;
 int FUNC_12 (struct msm_gpu*,struct msm_ringbuffer*) ;
 int FUNC_13 () ;

void FUNC_14(struct msm_gpu *VAR_8)
{
 struct adreno_gpu *VAR_9 = FUNC_10(VAR_8);
 struct a5xx_gpu *VAR_10 = FUNC_9(VAR_9);
 unsigned long VAR_11;
 struct msm_ringbuffer *VAR_12;

 if (VAR_8->nr_rings == 1)
  return;





 if (!FUNC_11(VAR_10, VAR_1, VAR_2))
  return;


 VAR_12 = FUNC_0(VAR_8);





 if (!VAR_12 || (VAR_10->cur_ring == VAR_12)) {
  FUNC_6(VAR_10, VAR_0);
  FUNC_12(VAR_8, VAR_10->cur_ring);
  FUNC_6(VAR_10, VAR_1);
  return;
 }


 FUNC_7(&VAR_12->lock, VAR_11);
 VAR_10->preempt[VAR_12->id]->wptr = FUNC_1(VAR_12);
 FUNC_8(&VAR_12->lock, VAR_11);


 FUNC_3(VAR_8, VAR_6,
  VAR_5,
  VAR_10->preempt_iova[VAR_12->id]);

 VAR_10->next_ring = VAR_12;


 FUNC_4(&VAR_10->preempt_timer, VAR_7 + FUNC_5(10000));


 FUNC_6(VAR_10, VAR_3);


 FUNC_13();


 FUNC_2(VAR_8, VAR_4, 1);
}
