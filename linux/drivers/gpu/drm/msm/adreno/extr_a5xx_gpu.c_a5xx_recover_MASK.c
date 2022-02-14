
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_gpu {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct msm_gpu*) ;
 int FUNC_2 (struct msm_gpu*) ;
 int FUNC_3 (struct msm_gpu*) ;
 int FUNC_4 (struct msm_gpu*,int ) ;
 int FUNC_5 (struct msm_gpu*,int ,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_6 (char*,int,int ) ;

__attribute__((used)) static void FUNC_7(struct msm_gpu *VAR_2)
{
 int VAR_3;

 FUNC_2(VAR_2);

 for (VAR_3 = 0; VAR_3 < 8; VAR_3++) {
  FUNC_6("CP_SCRATCH_REG%d: %u\n", VAR_3,
   FUNC_4(VAR_2, FUNC_0(VAR_3)));
 }

 if (VAR_1)
  FUNC_1(VAR_2);

 FUNC_5(VAR_2, VAR_0, 1);
 FUNC_4(VAR_2, VAR_0);
 FUNC_5(VAR_2, VAR_0, 0);
 FUNC_3(VAR_2);
}
