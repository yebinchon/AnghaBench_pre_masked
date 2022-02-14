
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef unsigned int uint32_t ;
struct msm_ringbuffer {TYPE_4__* memptrs; } ;
struct msm_gpu {TYPE_1__* dev; } ;
struct msm_gem_submit {unsigned int nr_cmds; int seqno; TYPE_3__* cmd; TYPE_2__* bos; struct msm_ringbuffer* ring; } ;
struct msm_gem_object {int base; } ;
struct msm_file_private {int dummy; } ;
struct msm_drm_private {struct msm_file_private* lastctx; } ;
struct TYPE_8__ {int fence; } ;
struct TYPE_7__ {int type; size_t idx; unsigned int size; } ;
struct TYPE_6__ {struct msm_gem_object* obj; } ;
struct TYPE_5__ {struct msm_drm_private* dev_private; } ;





 int FUNC_0 (struct msm_ringbuffer*,unsigned int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct msm_gpu*,struct msm_ringbuffer*) ;
 int FUNC_3 (struct msm_gpu*,struct msm_ringbuffer*) ;
 int FUNC_4 (struct msm_gpu*) ;
 int FUNC_5 (struct msm_ringbuffer*,int) ;
 unsigned int* FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct msm_gpu*) ;

__attribute__((used)) static void FUNC_9(struct msm_gpu *VAR_0, struct msm_gem_submit *VAR_1,
 struct msm_file_private *VAR_2)
{
 struct msm_drm_private *VAR_3 = VAR_0->dev->dev_private;
 struct msm_ringbuffer *VAR_4 = VAR_1->ring;
 struct msm_gem_object *VAR_5;
 uint32_t *VAR_6, VAR_7;
 unsigned int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_1->nr_cmds; VAR_8++) {
  switch (VAR_1->cmd[VAR_8].type) {
  case 128:
   break;
  case 129:
   if (VAR_3->lastctx == VAR_2)
    break;

  case 130:

   VAR_5 = VAR_1->bos[VAR_1->cmd[VAR_8].idx].obj;
   VAR_7 = VAR_1->cmd[VAR_8].size;

   VAR_6 = FUNC_6(&VAR_5->base);





   if (FUNC_1(!VAR_6))
    return;

   for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {






    FUNC_5(VAR_4, 1);
    FUNC_0(VAR_4, VAR_6[VAR_8]);
   }

   FUNC_7(&VAR_5->base);

   break;
  }
 }

 FUNC_2(VAR_0, VAR_4);
 FUNC_4(VAR_0);





 FUNC_3(VAR_0, VAR_4);
 VAR_4->memptrs->fence = VAR_1->seqno;
 FUNC_8(VAR_0);
}
