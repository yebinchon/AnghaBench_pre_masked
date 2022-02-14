
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct msm_gpu {int dummy; } ;
struct adreno_gpu {int dummy; } ;
struct a6xx_gpu {int gmu; } ;
struct a6xx_crashdumper {int iova; int ptr; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct msm_gpu*,int ,int,int,int,int) ;
 int FUNC_3 (struct msm_gpu*,int ,int) ;
 int FUNC_4 (struct msm_gpu*,int ,int ,int ) ;
 struct a6xx_gpu* FUNC_5 (struct adreno_gpu*) ;
 struct adreno_gpu* FUNC_6 (struct msm_gpu*) ;
 int FUNC_7 () ;

__attribute__((used)) static int FUNC_8(struct msm_gpu *VAR_5,
  struct a6xx_crashdumper *VAR_6)
{
 struct adreno_gpu *VAR_7 = FUNC_6(VAR_5);
 struct a6xx_gpu *VAR_8 = FUNC_5(VAR_7);
 u32 VAR_9;
 int VAR_10;

 if (FUNC_0(VAR_6->ptr))
  return -VAR_0;

 if (!FUNC_1(&VAR_8->gmu))
  return -VAR_0;


 FUNC_7();

 FUNC_4(VAR_5, VAR_4,
  VAR_3, VAR_6->iova);

 FUNC_3(VAR_5, VAR_1, 1);

 VAR_10 = FUNC_2(VAR_5, VAR_2, VAR_9,
  VAR_9 & 0x02, 100, 10000);

 FUNC_3(VAR_5, VAR_1, 0);

 return VAR_10;
}
