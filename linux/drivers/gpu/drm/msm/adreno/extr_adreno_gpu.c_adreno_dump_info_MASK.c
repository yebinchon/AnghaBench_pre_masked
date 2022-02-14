
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct msm_ringbuffer {int seqno; TYPE_2__* memptrs; } ;
struct msm_gpu {int nr_rings; struct msm_ringbuffer** rb; } ;
struct TYPE_4__ {int patchid; int minor; int major; int core; } ;
struct adreno_gpu {TYPE_1__ rev; TYPE_3__* info; } ;
struct TYPE_6__ {int revn; } ;
struct TYPE_5__ {int fence; } ;


 int FUNC_0 (struct adreno_gpu*,struct msm_ringbuffer*) ;
 int FUNC_1 (struct msm_ringbuffer*) ;
 int FUNC_2 (char*,int,...) ;
 struct adreno_gpu* FUNC_3 (struct msm_gpu*) ;

void FUNC_4(struct msm_gpu *VAR_0)
{
 struct adreno_gpu *VAR_1 = FUNC_3(VAR_0);
 int VAR_2;

 FUNC_2("revision: %d (%d.%d.%d.%d)\n",
   VAR_1->info->revn, VAR_1->rev.core,
   VAR_1->rev.major, VAR_1->rev.minor,
   VAR_1->rev.patchid);

 for (VAR_2 = 0; VAR_2 < VAR_0->nr_rings; VAR_2++) {
  struct msm_ringbuffer *VAR_3 = VAR_0->rb[VAR_2];

  FUNC_2("rb %d: fence:    %d/%d\n", VAR_2,
   VAR_3->memptrs->fence,
   VAR_3->seqno);

  FUNC_2("rptr:     %d\n", FUNC_0(VAR_1, VAR_3));
  FUNC_2("rb wptr:  %d\n", FUNC_1(VAR_3));
 }
}
