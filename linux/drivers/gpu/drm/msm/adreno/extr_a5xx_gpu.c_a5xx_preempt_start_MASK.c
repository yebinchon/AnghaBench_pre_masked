
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msm_ringbuffer {size_t id; } ;
struct msm_gpu {int nr_rings; TYPE_1__* funcs; struct msm_ringbuffer** rb; } ;
struct adreno_gpu {int dummy; } ;
struct a5xx_gpu {int * preempt_iova; } ;
struct TYPE_2__ {int (* flush ) (struct msm_gpu*,struct msm_ringbuffer*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct msm_ringbuffer*,int ,int) ;
 int FUNC_1 (struct msm_ringbuffer*,int ,int) ;
 int FUNC_2 (struct msm_ringbuffer*,int) ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (struct msm_gpu*,struct msm_ringbuffer*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct msm_gpu*,struct msm_ringbuffer*) ;
 struct a5xx_gpu* FUNC_6 (struct adreno_gpu*) ;
 struct adreno_gpu* FUNC_7 (struct msm_gpu*) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct msm_gpu *VAR_7)
{
 struct adreno_gpu *VAR_8 = FUNC_7(VAR_7);
 struct a5xx_gpu *VAR_9 = FUNC_6(VAR_8);
 struct msm_ringbuffer *VAR_10 = VAR_7->rb[0];

 if (VAR_7->nr_rings == 1)
  return 0;


 FUNC_1(VAR_10, VAR_3, 1);
 FUNC_2(VAR_10, 0);


 FUNC_0(VAR_10, VAR_6, 2);
 FUNC_2(VAR_10, FUNC_4(VAR_9->preempt_iova[VAR_10->id]));
 FUNC_2(VAR_10, FUNC_8(VAR_9->preempt_iova[VAR_10->id]));


 FUNC_1(VAR_10, VAR_3, 1);
 FUNC_2(VAR_10, 1);

 FUNC_1(VAR_10, VAR_1, 1);
 FUNC_2(VAR_10, 0x00);

 FUNC_1(VAR_10, VAR_2, 1);
 FUNC_2(VAR_10, 0x01);

 FUNC_1(VAR_10, VAR_4, 1);
 FUNC_2(VAR_10, 0x01);


 FUNC_1(VAR_10, VAR_0, 4);
 FUNC_2(VAR_10, 0x00);
 FUNC_2(VAR_10, 0x00);
 FUNC_2(VAR_10, 0x01);
 FUNC_2(VAR_10, 0x01);

 VAR_7->funcs->flush(VAR_7, VAR_10);

 return FUNC_3(VAR_7, VAR_10) ? 0 : -VAR_5;
}
