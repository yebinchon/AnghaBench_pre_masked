
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct msm_gpu {int fast_rate; } ;
struct TYPE_2__ {int patchid; } ;
struct adreno_gpu {TYPE_1__ rev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (struct msm_gpu*,int) ;
 int FUNC_3 (struct msm_gpu*,int ,int) ;
 struct adreno_gpu* FUNC_4 (struct msm_gpu*) ;

__attribute__((used)) static void FUNC_5(struct msm_gpu *VAR_14)
{
 struct adreno_gpu *VAR_15 = FUNC_4(VAR_14);
 u32 VAR_16;


 VAR_16 = VAR_4;
 VAR_16 |= VAR_15->rev.patchid << VAR_5;


 VAR_16 |= VAR_6;


 FUNC_3(VAR_14, VAR_13, 0x80000000 | 0);


 FUNC_3(VAR_14, VAR_12, 0x80000000 | 6000);

 FUNC_3(VAR_14, VAR_9, 0x80000001);
 FUNC_3(VAR_14, VAR_7, VAR_10);

 FUNC_3(VAR_14, FUNC_0(0), 5448);
 FUNC_3(VAR_14, FUNC_0(1), 1);

 FUNC_3(VAR_14, FUNC_0(2), FUNC_2(VAR_14, VAR_14->fast_rate));
 FUNC_3(VAR_14, FUNC_0(3), VAR_14->fast_rate / 1000000);

 FUNC_3(VAR_14, FUNC_0(VAR_3), VAR_16);
 FUNC_3(VAR_14, FUNC_0(VAR_2), VAR_11);
 FUNC_3(VAR_14, VAR_8,
 FUNC_1(VAR_2 + 1));

 FUNC_3(VAR_14, VAR_0, VAR_1);
}
