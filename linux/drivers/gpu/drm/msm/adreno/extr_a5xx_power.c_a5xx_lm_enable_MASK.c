
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_gpu {int dummy; } ;
struct adreno_gpu {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct adreno_gpu*) ;
 int FUNC_1 (struct msm_gpu*,int ,int) ;
 struct adreno_gpu* FUNC_2 (struct msm_gpu*) ;

__attribute__((used)) static void FUNC_3(struct msm_gpu *VAR_6)
{
 struct adreno_gpu *VAR_7 = FUNC_2(VAR_6);


 if (!FUNC_0(VAR_7))
  return;

 FUNC_1(VAR_6, VAR_1, 0x0);
 FUNC_1(VAR_6, VAR_0, 0x0A);
 FUNC_1(VAR_6, VAR_3, 0x01);
 FUNC_1(VAR_6, VAR_4, 0x50000);
 FUNC_1(VAR_6, VAR_5, 0x30000);

 FUNC_1(VAR_6, VAR_2, 0x011);
}
