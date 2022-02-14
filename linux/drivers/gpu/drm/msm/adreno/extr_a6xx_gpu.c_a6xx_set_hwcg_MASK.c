
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct msm_gpu {int dummy; } ;
struct adreno_gpu {int dummy; } ;
struct a6xx_gmu {int dummy; } ;
struct a6xx_gpu {struct a6xx_gmu gmu; } ;
struct TYPE_3__ {int value; int offset; } ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (struct a6xx_gmu*,int ,int,int) ;
 int FUNC_2 (struct msm_gpu*,int ) ;
 int FUNC_3 (struct msm_gpu*,int ,int) ;
 struct a6xx_gpu* FUNC_4 (struct adreno_gpu*) ;
 struct adreno_gpu* FUNC_5 (struct msm_gpu*) ;

__attribute__((used)) static void FUNC_6(struct msm_gpu *VAR_3, bool VAR_4)
{
 struct adreno_gpu *VAR_5 = FUNC_5(VAR_3);
 struct a6xx_gpu *VAR_6 = FUNC_4(VAR_5);
 struct a6xx_gmu *VAR_7 = &VAR_6->gmu;
 unsigned int VAR_8;
 u32 VAR_9;

 VAR_9 = FUNC_2(VAR_3, VAR_1);


 if ((!VAR_4 && !VAR_9) || (VAR_4 && (VAR_9 == 0x8aa8aa02)))
  return;


 FUNC_1(VAR_7, VAR_0, 1, 0);

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_2); VAR_8++)
  FUNC_3(VAR_3, VAR_2[VAR_8].offset,
   VAR_4 ? VAR_2[VAR_8].value : 0);


 FUNC_1(VAR_7, VAR_0, 0, 1);

 FUNC_3(VAR_3, VAR_1, VAR_4 ? 0x8aa8aa02 : 0);
}
