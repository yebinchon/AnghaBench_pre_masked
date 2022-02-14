
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_kms {int dummy; } ;
struct dpu_kms {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct dpu_kms*) ;
 struct dpu_kms* FUNC_2 (struct msm_kms*) ;

__attribute__((used)) static void FUNC_3(struct msm_kms *VAR_0)
{
 struct dpu_kms *VAR_1;

 if (!VAR_0) {
  FUNC_0("invalid kms\n");
  return;
 }

 VAR_1 = FUNC_2(VAR_0);

 FUNC_1(VAR_1);
}
