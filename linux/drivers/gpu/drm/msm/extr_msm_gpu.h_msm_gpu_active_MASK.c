
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msm_ringbuffer {scalar_t__ seqno; TYPE_1__* memptrs; } ;
struct msm_gpu {int nr_rings; struct msm_ringbuffer** rb; } ;
struct TYPE_2__ {scalar_t__ fence; } ;



__attribute__((used)) static inline bool FUNC_0(struct msm_gpu *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->nr_rings; VAR_1++) {
  struct msm_ringbuffer *VAR_2 = VAR_0->rb[VAR_1];

  if (VAR_2->seqno > VAR_2->memptrs->fence)
   return 1;
 }

 return 0;
}
