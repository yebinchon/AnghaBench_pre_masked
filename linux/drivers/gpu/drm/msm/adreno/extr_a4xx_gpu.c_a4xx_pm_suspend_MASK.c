
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_gpu {int dummy; } ;
struct adreno_gpu {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct adreno_gpu*) ;
 int FUNC_1 (struct msm_gpu*,int ,int) ;
 int FUNC_2 (struct msm_gpu*) ;
 struct adreno_gpu* FUNC_3 (struct msm_gpu*) ;

__attribute__((used)) static int FUNC_4(struct msm_gpu *VAR_1) {
 struct adreno_gpu *VAR_2 = FUNC_3(VAR_1);
 int VAR_3;

 VAR_3 = FUNC_2(VAR_1);
 if (VAR_3)
  return VAR_3;

 if (FUNC_0(VAR_2)) {

  FUNC_1(VAR_1, VAR_0, 0x778001);
 }
 return 0;
}
