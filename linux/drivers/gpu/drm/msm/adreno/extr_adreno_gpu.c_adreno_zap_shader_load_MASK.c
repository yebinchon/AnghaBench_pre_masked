
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct platform_device {int dev; } ;
struct msm_gpu {struct platform_device* pdev; } ;
struct adreno_gpu {TYPE_1__* info; } ;
struct TYPE_2__ {int zapfw; } ;


 int FUNC_0 (int *,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 struct adreno_gpu* FUNC_2 (struct msm_gpu*) ;
 int VAR_2 ;
 int FUNC_3 (struct msm_gpu*,int ,int ) ;

int FUNC_4(struct msm_gpu *VAR_3, u32 VAR_4)
{
 struct adreno_gpu *VAR_5 = FUNC_2(VAR_3);
 struct platform_device *VAR_6 = VAR_3->pdev;


 if (!VAR_2)
  return -VAR_0;


 if (!FUNC_1()) {
  FUNC_0(&VAR_6->dev, "SCM is not available\n");
  return -VAR_1;
 }


 if (!VAR_5->info->zapfw) {
  VAR_2 = 0;
  FUNC_0(&VAR_6->dev,
   "Zap shader firmware file not specified for this target\n");
  return -VAR_0;
 }

 return FUNC_3(VAR_3, VAR_5->info->zapfw, VAR_4);
}
