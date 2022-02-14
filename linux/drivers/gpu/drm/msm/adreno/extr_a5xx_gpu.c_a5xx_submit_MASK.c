
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct msm_ringbuffer {size_t id; } ;
struct msm_gpu {TYPE_1__* dev; } ;
struct msm_gem_submit {unsigned int nr_cmds; int seqno; TYPE_2__* cmd; struct msm_ringbuffer* ring; scalar_t__ in_rb; } ;
struct msm_file_private {int dummy; } ;
struct msm_drm_private {struct msm_file_private* lastctx; } ;
struct adreno_gpu {int dummy; } ;
struct a5xx_gpu {int * preempt_iova; } ;
struct TYPE_4__ {int type; int size; int iova; } ;
struct TYPE_3__ {struct msm_drm_private* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int ) ;



 int FUNC_1 (struct msm_ringbuffer*,int ,int) ;
 int FUNC_2 (struct msm_ringbuffer*,int ,int) ;
 int FUNC_3 (struct msm_ringbuffer*,int) ;
 int VAR_9 ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct msm_gpu*,struct msm_ringbuffer*) ;
 int FUNC_6 (struct msm_gpu*) ;
 int FUNC_7 (struct msm_gpu*,struct msm_gem_submit*,struct msm_file_private*) ;
 int VAR_10 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct msm_ringbuffer*,int ) ;
 struct a5xx_gpu* FUNC_10 (struct adreno_gpu*) ;
 struct adreno_gpu* FUNC_11 (struct msm_gpu*) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static void FUNC_13(struct msm_gpu *VAR_11, struct msm_gem_submit *VAR_12,
 struct msm_file_private *VAR_13)
{
 struct adreno_gpu *VAR_14 = FUNC_11(VAR_11);
 struct a5xx_gpu *VAR_15 = FUNC_10(VAR_14);
 struct msm_drm_private *VAR_16 = VAR_11->dev->dev_private;
 struct msm_ringbuffer *VAR_17 = VAR_12->ring;
 unsigned int VAR_18, VAR_19 = 0;

 if (FUNC_0(VAR_1) && VAR_12->in_rb) {
  VAR_16->lastctx = ((void*)0);
  FUNC_7(VAR_11, VAR_12, VAR_13);
  return;
 }

 FUNC_2(VAR_17, VAR_5, 1);
 FUNC_3(VAR_17, 0x02);


 FUNC_2(VAR_17, VAR_6, 1);
 FUNC_3(VAR_17, 0);


 FUNC_1(VAR_17, VAR_9, 2);
 FUNC_3(VAR_17, FUNC_8(VAR_15->preempt_iova[VAR_12->ring->id]));
 FUNC_3(VAR_17, FUNC_12(VAR_15->preempt_iova[VAR_12->ring->id]));


 FUNC_2(VAR_17, VAR_6, 1);
 FUNC_3(VAR_17, 1);


 FUNC_2(VAR_17, VAR_5, 1);
 FUNC_3(VAR_17, 0x02);


 FUNC_2(VAR_17, VAR_8, 1);
 FUNC_3(VAR_17, 0x02);


 for (VAR_18 = 0; VAR_18 < VAR_12->nr_cmds; VAR_18++) {
  switch (VAR_12->cmd[VAR_18].type) {
  case 128:
   break;
  case 129:
   if (VAR_16->lastctx == VAR_13)
    break;

  case 130:
   FUNC_2(VAR_17, VAR_4, 3);
   FUNC_3(VAR_17, FUNC_8(VAR_12->cmd[VAR_18].iova));
   FUNC_3(VAR_17, FUNC_12(VAR_12->cmd[VAR_18].iova));
   FUNC_3(VAR_17, VAR_12->cmd[VAR_18].size);
   VAR_19++;
   break;
  }
 }






 FUNC_2(VAR_17, VAR_7, 5);
 FUNC_3(VAR_17, 0);
 FUNC_3(VAR_17, 0);
 FUNC_3(VAR_17, 0);
 FUNC_3(VAR_17, 0);
 FUNC_3(VAR_17, 0);


 FUNC_2(VAR_17, VAR_8, 1);
 FUNC_3(VAR_17, 0x01);


 FUNC_1(VAR_17, FUNC_4(2), 1);
 FUNC_3(VAR_17, VAR_12->seqno);





 FUNC_2(VAR_17, VAR_3, 4);
 FUNC_3(VAR_17, VAR_0 | (1 << 31));
 FUNC_3(VAR_17, FUNC_8(FUNC_9(VAR_17, VAR_10)));
 FUNC_3(VAR_17, FUNC_12(FUNC_9(VAR_17, VAR_10)));
 FUNC_3(VAR_17, VAR_12->seqno);


 FUNC_2(VAR_17, VAR_2, 4);





 FUNC_3(VAR_17, 0x00);
 FUNC_3(VAR_17, 0x00);

 FUNC_3(VAR_17, 0x01);

 FUNC_3(VAR_17, 0x01);

 FUNC_5(VAR_11, VAR_17);


 FUNC_6(VAR_11);
}
