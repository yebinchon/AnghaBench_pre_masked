
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_gpu {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct msm_gpu*) ;
 int FUNC_1 (struct msm_gpu*) ;
 int FUNC_2 (struct msm_gpu*) ;
 int FUNC_3 (struct msm_gpu*,scalar_t__) ;
 int FUNC_4 (struct msm_gpu*,scalar_t__,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (char*,int,int ) ;

__attribute__((used)) static void FUNC_6(struct msm_gpu *VAR_3)
{
 int VAR_4;

 FUNC_1(VAR_3);

 for (VAR_4 = 0; VAR_4 < 8; VAR_4++) {
  FUNC_5("CP_SCRATCH_REG%d: %u\n", VAR_4,
   FUNC_3(VAR_3, VAR_1 + VAR_4));
 }


 if (VAR_2)
  FUNC_0(VAR_3);

 FUNC_4(VAR_3, VAR_0, 1);
 FUNC_3(VAR_3, VAR_0);
 FUNC_4(VAR_3, VAR_0, 0);
 FUNC_2(VAR_3);
}
