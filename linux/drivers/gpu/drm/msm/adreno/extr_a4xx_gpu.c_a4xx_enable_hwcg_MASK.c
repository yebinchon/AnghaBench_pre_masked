
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msm_gpu {int dummy; } ;
struct TYPE_2__ {int patchid; } ;
struct adreno_gpu {TYPE_1__ rev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 (unsigned int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_7 (unsigned int) ;
 int FUNC_8 (unsigned int) ;
 int FUNC_9 (unsigned int) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_10 (unsigned int) ;
 int FUNC_11 (unsigned int) ;
 int FUNC_12 (unsigned int) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ FUNC_13 (struct adreno_gpu*) ;
 scalar_t__ FUNC_14 (struct adreno_gpu*) ;
 int FUNC_15 (struct msm_gpu*,int ,int) ;
 struct adreno_gpu* FUNC_16 (struct msm_gpu*) ;

__attribute__((used)) static void FUNC_17(struct msm_gpu *VAR_20)
{
 struct adreno_gpu *VAR_21 = FUNC_16(VAR_20);
 unsigned int VAR_22;
 for (VAR_22 = 0; VAR_22 < 4; VAR_22++)
  FUNC_15(VAR_20, FUNC_6(VAR_22), 0x02222202);
 for (VAR_22 = 0; VAR_22 < 4; VAR_22++)
  FUNC_15(VAR_20, FUNC_2(VAR_22), 0x00002222);
 for (VAR_22 = 0; VAR_22 < 4; VAR_22++)
  FUNC_15(VAR_20, FUNC_12(VAR_22), 0x0E739CE7);
 for (VAR_22 = 0; VAR_22 < 4; VAR_22++)
  FUNC_15(VAR_20, FUNC_9(VAR_22), 0x00111111);
 for (VAR_22 = 0; VAR_22 < 4; VAR_22++)
  FUNC_15(VAR_20, FUNC_5(VAR_22), 0x22222222);
 for (VAR_22 = 0; VAR_22 < 4; VAR_22++)
  FUNC_15(VAR_20, FUNC_1(VAR_22), 0x00222222);
 for (VAR_22 = 0; VAR_22 < 4; VAR_22++)
  FUNC_15(VAR_20, FUNC_11(VAR_22), 0x00000104);
 for (VAR_22 = 0; VAR_22 < 4; VAR_22++)
  FUNC_15(VAR_20, FUNC_8(VAR_22), 0x00000081);
 FUNC_15(VAR_20, VAR_8, 0x22222222);
 FUNC_15(VAR_20, VAR_2, 0x02222222);
 FUNC_15(VAR_20, VAR_3, 0x00000000);
 FUNC_15(VAR_20, VAR_4, 0x00000000);
 FUNC_15(VAR_20, VAR_18, 0x00004444);
 FUNC_15(VAR_20, VAR_13, 0x00001112);
 for (VAR_22 = 0; VAR_22 < 4; VAR_22++)
  FUNC_15(VAR_20, FUNC_4(VAR_22), 0x22222222);


 for (VAR_22 = 0; VAR_22 < 4; VAR_22++) {
  if (FUNC_13(VAR_21)) {
   FUNC_15(VAR_20, FUNC_0(VAR_22),
     0x00002020);
  } else {
   FUNC_15(VAR_20, FUNC_0(VAR_22),
     0x00022020);
  }
 }

 for (VAR_22 = 0; VAR_22 < 4; VAR_22++) {
  FUNC_15(VAR_20, FUNC_3(VAR_22),
    0x00000922);
 }

 for (VAR_22 = 0; VAR_22 < 4; VAR_22++) {
  FUNC_15(VAR_20, FUNC_10(VAR_22),
    0x00000000);
 }

 for (VAR_22 = 0; VAR_22 < 4; VAR_22++) {
  FUNC_15(VAR_20, FUNC_7(VAR_22),
    0x00000001);
 }

 FUNC_15(VAR_20, VAR_19, 0x02222222);
 FUNC_15(VAR_20, VAR_15, 0x04100104);
 FUNC_15(VAR_20, VAR_10, 0x00022222);
 FUNC_15(VAR_20, VAR_5, 0x00000022);
 FUNC_15(VAR_20, VAR_14, 0x0000010F);
 FUNC_15(VAR_20, VAR_9, 0x00000022);
 FUNC_15(VAR_20, VAR_7, 0x00222222);
 FUNC_15(VAR_20, VAR_17, 0x00004104);
 FUNC_15(VAR_20, VAR_12, 0x00000222);
 FUNC_15(VAR_20, VAR_6 , 0x00000000);
 FUNC_15(VAR_20, VAR_16, 0x00000000);
 FUNC_15(VAR_20, VAR_11, 0x00220000);


 if (FUNC_14(VAR_21) && VAR_21->rev.patchid < 2)
  FUNC_15(VAR_20, VAR_0, 0);
 else
  FUNC_15(VAR_20, VAR_0, 0xAAAAAAAA);
 FUNC_15(VAR_20, VAR_1, 0);
}
