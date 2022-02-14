
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct msm_ringbuffer {int dummy; } ;
struct msm_gpu {TYPE_3__* funcs; TYPE_1__* dev; } ;
struct msm_gem_submit {unsigned int nr_cmds; int seqno; TYPE_2__* cmd; struct msm_ringbuffer* ring; } ;
struct msm_file_private {int dummy; } ;
struct msm_drm_private {struct msm_file_private* lastctx; } ;
struct adreno_gpu {int dummy; } ;
struct TYPE_6__ {int (* flush ) (struct msm_gpu*,struct msm_ringbuffer*) ;} ;
struct TYPE_5__ {int type; int size; int iova; } ;
struct TYPE_4__ {struct msm_drm_private* dev_private; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;



 int FUNC_2 (struct msm_ringbuffer*,int ,int) ;
 int FUNC_3 (struct msm_ringbuffer*) ;
 int FUNC_4 (struct msm_ringbuffer*,int ,int) ;
 int FUNC_5 (struct msm_ringbuffer*,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (struct adreno_gpu*) ;
 scalar_t__ FUNC_7 (struct adreno_gpu*) ;
 int FUNC_8 (struct adreno_gpu*) ;
 scalar_t__ FUNC_9 (struct adreno_gpu*) ;
 int VAR_10 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct msm_ringbuffer*,int ) ;
 int FUNC_12 (struct msm_gpu*,struct msm_ringbuffer*) ;
 struct adreno_gpu* FUNC_13 (struct msm_gpu*) ;

void FUNC_14(struct msm_gpu *VAR_11, struct msm_gem_submit *VAR_12,
  struct msm_file_private *VAR_13)
{
 struct adreno_gpu *VAR_14 = FUNC_13(VAR_11);
 struct msm_drm_private *VAR_15 = VAR_11->dev->dev_private;
 struct msm_ringbuffer *VAR_16 = VAR_12->ring;
 unsigned VAR_17;

 for (VAR_17 = 0; VAR_17 < VAR_12->nr_cmds; VAR_17++) {
  switch (VAR_12->cmd[VAR_17].type) {
  case 128:

   break;
  case 129:

   if (VAR_15->lastctx == VAR_13)
    break;

  case 130:
   FUNC_4(VAR_16, FUNC_8(VAR_14) ?
    VAR_3 : VAR_2, 2);
   FUNC_5(VAR_16, FUNC_10(VAR_12->cmd[VAR_17].iova));
   FUNC_5(VAR_16, VAR_12->cmd[VAR_17].size);
   FUNC_3(VAR_16);
   break;
  }
 }

 FUNC_2(VAR_16, VAR_9, 1);
 FUNC_5(VAR_16, VAR_12->seqno);

 if (FUNC_7(VAR_14) || FUNC_9(VAR_14)) {




  FUNC_4(VAR_16, VAR_1, 1);
  FUNC_5(VAR_16, VAR_7);
 }


 FUNC_4(VAR_16, VAR_6, 1);
 FUNC_5(VAR_16, 0x00000000);

 if (!FUNC_6(VAR_14)) {

  FUNC_4(VAR_16, VAR_1, 3);
  FUNC_5(VAR_16, VAR_0 | FUNC_0(31));
  FUNC_5(VAR_16, FUNC_11(VAR_16, VAR_10));
  FUNC_5(VAR_16, VAR_12->seqno);
 } else {

  FUNC_4(VAR_16, VAR_1, 3);
  FUNC_5(VAR_16, VAR_0);
  FUNC_5(VAR_16, FUNC_11(VAR_16, VAR_10));
  FUNC_5(VAR_16, VAR_12->seqno);
  FUNC_4(VAR_16, VAR_4, 1);
  FUNC_5(VAR_16, 0x80000000);
 }
 VAR_11->funcs->flush(VAR_11, VAR_16);
}
