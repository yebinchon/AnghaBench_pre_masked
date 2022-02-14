
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msm_ringbuffer {int lock; TYPE_1__* memptrs; } ;
struct msm_gpu {int nr_rings; struct msm_ringbuffer** rb; } ;
struct TYPE_2__ {scalar_t__ rptr; } ;


 scalar_t__ FUNC_0 (struct msm_ringbuffer*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static struct msm_ringbuffer *FUNC_3(struct msm_gpu *VAR_0)
{
 unsigned long VAR_1;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->nr_rings; VAR_2++) {
  bool VAR_3;
  struct msm_ringbuffer *VAR_4 = VAR_0->rb[VAR_2];

  FUNC_1(&VAR_4->lock, VAR_1);
  VAR_3 = (FUNC_0(VAR_4) == VAR_4->memptrs->rptr);
  FUNC_2(&VAR_4->lock, VAR_1);

  if (!VAR_3)
   return VAR_4;
 }

 return ((void*)0);
}
