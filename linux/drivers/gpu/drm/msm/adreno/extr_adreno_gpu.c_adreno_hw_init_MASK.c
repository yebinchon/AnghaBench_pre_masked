
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msm_ringbuffer {int iova; TYPE_1__* memptrs; int seqno; int start; int next; int cur; } ;
struct msm_gpu {int nr_rings; struct msm_ringbuffer** rb; int name; } ;
struct adreno_gpu {int dummy; } ;
struct TYPE_2__ {scalar_t__ rptr; int fence; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct adreno_gpu*,int ,int) ;
 int FUNC_2 (struct adreno_gpu*,int ,int ,int ) ;
 scalar_t__ FUNC_3 (struct adreno_gpu*) ;
 int FUNC_4 (struct adreno_gpu*) ;
 int FUNC_5 (struct msm_ringbuffer*,int ) ;
 int VAR_7 ;
 struct adreno_gpu* FUNC_6 (struct msm_gpu*) ;

int FUNC_7(struct msm_gpu *VAR_8)
{
 struct adreno_gpu *VAR_9 = FUNC_6(VAR_8);
 int VAR_10, VAR_11;

 FUNC_0("%s", VAR_8->name);

 VAR_10 = FUNC_4(VAR_9);
 if (VAR_10)
  return VAR_10;

 for (VAR_11 = 0; VAR_11 < VAR_8->nr_rings; VAR_11++) {
  struct msm_ringbuffer *VAR_12 = VAR_8->rb[VAR_11];

  if (!VAR_12)
   continue;

  VAR_12->cur = VAR_12->start;
  VAR_12->next = VAR_12->start;


  VAR_12->memptrs->fence = VAR_12->seqno;
  VAR_12->memptrs->rptr = 0;
 }







 FUNC_1(VAR_9, VAR_4,
  VAR_1 |
  (FUNC_3(VAR_9) ? VAR_0 : 0));


 FUNC_2(VAR_9, VAR_2,
  VAR_3, VAR_8->rb[0]->iova);

 if (!FUNC_3(VAR_9)) {
  FUNC_2(VAR_9, VAR_5,
   VAR_6,
   FUNC_5(VAR_8->rb[0], VAR_7));
 }

 return 0;
}
