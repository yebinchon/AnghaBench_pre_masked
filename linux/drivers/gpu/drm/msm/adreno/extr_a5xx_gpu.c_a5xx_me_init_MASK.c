
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msm_ringbuffer {int dummy; } ;
struct msm_gpu {TYPE_1__* funcs; struct msm_ringbuffer** rb; } ;
struct adreno_gpu {int dummy; } ;
struct TYPE_2__ {int (* flush ) (struct msm_gpu*,struct msm_ringbuffer*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct msm_ringbuffer*,int ,int) ;
 int FUNC_1 (struct msm_ringbuffer*,int) ;
 scalar_t__ FUNC_2 (struct msm_gpu*,struct msm_ringbuffer*) ;
 scalar_t__ FUNC_3 (struct adreno_gpu*) ;
 int FUNC_4 (struct msm_gpu*,struct msm_ringbuffer*) ;
 struct adreno_gpu* FUNC_5 (struct msm_gpu*) ;

__attribute__((used)) static int FUNC_6(struct msm_gpu *VAR_2)
{
 struct adreno_gpu *VAR_3 = FUNC_5(VAR_2);
 struct msm_ringbuffer *VAR_4 = VAR_2->rb[0];

 FUNC_0(VAR_4, VAR_0, 8);

 FUNC_1(VAR_4, 0x0000002F);


 FUNC_1(VAR_4, 0x00000003);


 FUNC_1(VAR_4, 0x20000000);


 FUNC_1(VAR_4, 0x00000000);
 FUNC_1(VAR_4, 0x00000000);


 if (FUNC_3(VAR_3)) {




  FUNC_1(VAR_4, 0x0000000B);
 } else {

  FUNC_1(VAR_4, 0x00000000);
 }

 FUNC_1(VAR_4, 0x00000000);
 FUNC_1(VAR_4, 0x00000000);

 VAR_2->funcs->flush(VAR_2, VAR_4);
 return FUNC_2(VAR_2, VAR_4) ? 0 : -VAR_1;
}
