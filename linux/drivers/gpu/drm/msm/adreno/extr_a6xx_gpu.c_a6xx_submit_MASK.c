
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct msm_ringbuffer {int dummy; } ;
struct msm_gpu {TYPE_1__* dev; } ;
struct msm_gem_submit {unsigned int seqno; unsigned int nr_cmds; TYPE_2__* cmd; struct msm_ringbuffer* ring; } ;
struct msm_file_private {int dummy; } ;
struct msm_drm_private {struct msm_file_private* lastctx; } ;
struct adreno_gpu {int dummy; } ;
struct a6xx_gpu {int gmu; } ;
struct TYPE_4__ {int type; int size; int iova; } ;
struct TYPE_3__ {struct msm_drm_private* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;



 int FUNC_0 (struct msm_ringbuffer*,int ,int) ;
 int FUNC_1 (struct msm_ringbuffer*,int ,int) ;
 int FUNC_2 (struct msm_ringbuffer*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_4 (struct msm_gpu*,struct msm_ringbuffer*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_5 (struct msm_ringbuffer*,scalar_t__,int ) ;
 int FUNC_6 (int *,scalar_t__,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct msm_ringbuffer*,int ) ;
 int FUNC_9 (struct msm_ringbuffer*,unsigned int,int ) ;
 struct a6xx_gpu* FUNC_10 (struct adreno_gpu*) ;
 struct adreno_gpu* FUNC_11 (struct msm_gpu*) ;
 int FUNC_12 (struct msm_gem_submit*,int ) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static void FUNC_14(struct msm_gpu *VAR_14, struct msm_gem_submit *VAR_15,
 struct msm_file_private *VAR_16)
{
 unsigned int VAR_17 = VAR_15->seqno % VAR_3;
 struct msm_drm_private *VAR_18 = VAR_14->dev->dev_private;
 struct adreno_gpu *VAR_19 = FUNC_11(VAR_14);
 struct a6xx_gpu *VAR_20 = FUNC_10(VAR_19);
 struct msm_ringbuffer *VAR_21 = VAR_15->ring;
 unsigned int VAR_22;

 FUNC_5(VAR_21, VAR_8,
  FUNC_9(VAR_21, VAR_17, VAR_12));






 FUNC_5(VAR_21, VAR_7 + 0x1a800,
  FUNC_9(VAR_21, VAR_17, VAR_10));


 FUNC_1(VAR_21, VAR_1, 1);
 FUNC_2(VAR_21, VAR_5);

 FUNC_1(VAR_21, VAR_1, 1);
 FUNC_2(VAR_21, VAR_4);


 for (VAR_22 = 0; VAR_22 < VAR_15->nr_cmds; VAR_22++) {
  switch (VAR_15->cmd[VAR_22].type) {
  case 128:
   break;
  case 129:
   if (VAR_18->lastctx == VAR_16)
    break;

  case 130:
   FUNC_1(VAR_21, VAR_2, 3);
   FUNC_2(VAR_21, FUNC_7(VAR_15->cmd[VAR_22].iova));
   FUNC_2(VAR_21, FUNC_13(VAR_15->cmd[VAR_22].iova));
   FUNC_2(VAR_21, VAR_15->cmd[VAR_22].size);
   break;
  }
 }

 FUNC_5(VAR_21, VAR_8,
  FUNC_9(VAR_21, VAR_17, VAR_11));
 FUNC_5(VAR_21, VAR_7 + 0x1a800,
  FUNC_9(VAR_21, VAR_17, VAR_9));


 FUNC_0(VAR_21, FUNC_3(2), 1);
 FUNC_2(VAR_21, VAR_15->seqno);





 FUNC_1(VAR_21, VAR_1, 4);
 FUNC_2(VAR_21, VAR_0 | (1 << 31));
 FUNC_2(VAR_21, FUNC_7(FUNC_8(VAR_21, VAR_13)));
 FUNC_2(VAR_21, FUNC_13(FUNC_8(VAR_21, VAR_13)));
 FUNC_2(VAR_21, VAR_15->seqno);

 FUNC_12(VAR_15,
  FUNC_6(&VAR_20->gmu, VAR_7,
   VAR_6));

 FUNC_4(VAR_14, VAR_21);
}
