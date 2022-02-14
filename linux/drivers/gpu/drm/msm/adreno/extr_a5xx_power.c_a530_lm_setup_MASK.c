
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct msm_gpu {int fast_rate; } ;
struct adreno_gpu {int dummy; } ;
struct a5xx_gpu {int lm_leakage; } ;
struct TYPE_3__ {int value; int reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int FUNC_1 (TYPE_1__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (struct msm_gpu*,int) ;
 TYPE_1__* VAR_14 ;
 int FUNC_3 (struct msm_gpu*,int ,int) ;
 struct a5xx_gpu* FUNC_4 (struct adreno_gpu*) ;
 struct adreno_gpu* FUNC_5 (struct msm_gpu*) ;

__attribute__((used)) static void FUNC_6(struct msm_gpu *VAR_15)
{
 struct adreno_gpu *VAR_16 = FUNC_5(VAR_15);
 struct a5xx_gpu *VAR_17 = FUNC_4(VAR_16);
 unsigned int VAR_18;


 for (VAR_18 = 0; VAR_18 < FUNC_1(VAR_14); VAR_18++)
  FUNC_3(VAR_15, VAR_14[VAR_18].reg,
   VAR_14[VAR_18].value);


 FUNC_3(VAR_15, VAR_13, 0x60007);
 FUNC_3(VAR_15, VAR_9, 0x01);
 FUNC_3(VAR_15, VAR_12, 0x01);


 FUNC_3(VAR_15, VAR_11, 0x80000000 | 0);

 FUNC_3(VAR_15, VAR_7, VAR_17->lm_leakage);


 FUNC_3(VAR_15, VAR_10, 0x80000000 | 6000);

 FUNC_3(VAR_15, VAR_8, 0x10001FFF);
 FUNC_3(VAR_15, VAR_6, 0x00201FF1);


 FUNC_3(VAR_15, VAR_8, 0x10001FFF);
 FUNC_3(VAR_15, VAR_6, 0x201FF1);

 FUNC_3(VAR_15, VAR_4, 1);
 FUNC_3(VAR_15, VAR_2, VAR_5);


 FUNC_3(VAR_15, FUNC_0(0), 5448);
 FUNC_3(VAR_15, FUNC_0(1), 1);





 FUNC_3(VAR_15, FUNC_0(2), FUNC_2(VAR_15, VAR_15->fast_rate));
 FUNC_3(VAR_15, FUNC_0(3), VAR_15->fast_rate / 1000000);

 FUNC_3(VAR_15, VAR_3, 4 * sizeof(uint32_t));
 FUNC_3(VAR_15, VAR_0, VAR_1);
}
