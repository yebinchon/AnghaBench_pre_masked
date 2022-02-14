
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct msm_ringbuffer {int dummy; } ;
struct msm_gpu {int name; TYPE_1__* funcs; struct msm_ringbuffer** rb; } ;
struct adreno_gpu {int dummy; } ;
struct a5xx_gpu {int gpmu_dwords; int gpmu_iova; } ;
struct TYPE_2__ {int (* flush ) (struct msm_gpu*,struct msm_ringbuffer*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,...) ;
 int VAR_2 ;
 int FUNC_1 (struct msm_ringbuffer*,int ,int) ;
 int FUNC_2 (struct msm_ringbuffer*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct msm_gpu*,struct msm_ringbuffer*) ;
 scalar_t__ FUNC_4 (struct adreno_gpu*) ;
 scalar_t__ FUNC_5 (struct msm_gpu*,int ) ;
 int FUNC_6 (struct msm_gpu*,int ,int) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (struct msm_gpu*,int,int ,int,int) ;
 int FUNC_9 (struct msm_gpu*,struct msm_ringbuffer*) ;
 struct a5xx_gpu* FUNC_10 (struct adreno_gpu*) ;
 struct adreno_gpu* FUNC_11 (struct msm_gpu*) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static int FUNC_13(struct msm_gpu *VAR_7)
{
 struct adreno_gpu *VAR_8 = FUNC_11(VAR_7);
 struct a5xx_gpu *VAR_9 = FUNC_10(VAR_8);
 struct msm_ringbuffer *VAR_10 = VAR_7->rb[0];

 if (!VAR_9->gpmu_dwords)
  return 0;


 FUNC_1(VAR_10, VAR_1, 1);
 FUNC_2(VAR_10, 0);


 FUNC_1(VAR_10, VAR_0, 3);
 FUNC_2(VAR_10, FUNC_7(VAR_9->gpmu_iova));
 FUNC_2(VAR_10, FUNC_12(VAR_9->gpmu_iova));
 FUNC_2(VAR_10, VAR_9->gpmu_dwords);


 FUNC_1(VAR_10, VAR_1, 1);
 FUNC_2(VAR_10, 1);

 VAR_7->funcs->flush(VAR_7, VAR_10);

 if (!FUNC_3(VAR_7, VAR_10)) {
  FUNC_0("%s: Unable to load GPMU firmware. GPMU will not be active\n",
   VAR_7->name);
  return -VAR_2;
 }

 if (FUNC_4(VAR_8))
  FUNC_6(VAR_7, VAR_6, 0x4014);


 FUNC_6(VAR_7, VAR_3, 0x0);





 if (FUNC_8(VAR_7, 25, VAR_4, 0xFFFFFFFF,
  0xBABEFACE))
  FUNC_0("%s: GPMU firmware initialization timed out\n",
   VAR_7->name);

 if (!FUNC_4(VAR_8)) {
  u32 VAR_11 = FUNC_5(VAR_7, VAR_5);

  if (VAR_11)
   FUNC_0("%s: GPMU firmware initialization failed: %d\n",
      VAR_7->name, VAR_11);
 }

 return 0;
}
