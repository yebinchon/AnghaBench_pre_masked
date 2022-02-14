
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_gpu {int dummy; } ;
struct adreno_gpu {int dummy; } ;
struct a6xx_gpu {int gmu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct msm_gpu*,int ) ;
 struct a6xx_gpu* FUNC_2 (struct adreno_gpu*) ;
 struct adreno_gpu* FUNC_3 (struct msm_gpu*) ;

__attribute__((used)) static inline bool FUNC_4(struct msm_gpu *VAR_4)
{
 struct adreno_gpu *VAR_5 = FUNC_3(VAR_4);
 struct a6xx_gpu *VAR_6 = FUNC_2(VAR_5);


 if (!FUNC_0(&VAR_6->gmu))
  return 0;


 if (FUNC_1(VAR_4, VAR_3) &
   ~VAR_1)
  return 0;

 return !(FUNC_1(VAR_4, VAR_2) &
  VAR_0);
}
