
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct msm_gpu {TYPE_1__* pdev; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct msm_gpu*) ;
 int FUNC_1 (struct msm_gpu*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct msm_gpu*,int ) ;
 int FUNC_4 (struct msm_gpu*,int ,int) ;
 int FUNC_5 (struct msm_gpu*) ;

__attribute__((used)) static irqreturn_t FUNC_6(struct msm_gpu *VAR_10)
{
 u32 VAR_11 = FUNC_3(VAR_10, VAR_8);

 FUNC_4(VAR_10, VAR_9, VAR_11);

 if (VAR_11 & VAR_5)
  FUNC_1(VAR_10);

 if (VAR_11 & VAR_0)
  FUNC_2(&VAR_10->pdev->dev, "CP | AHB bus error\n");

 if (VAR_11 & VAR_2)
  FUNC_0(VAR_10);

 if (VAR_11 & VAR_3)
  FUNC_2(&VAR_10->pdev->dev, "RBBM | ATB ASYNC overflow\n");

 if (VAR_11 & VAR_4)
  FUNC_2(&VAR_10->pdev->dev, "RBBM | ATB bus overflow\n");

 if (VAR_11 & VAR_6)
  FUNC_2(&VAR_10->pdev->dev, "UCHE | Out of bounds access\n");

 if (VAR_11 & VAR_1)
  FUNC_5(VAR_10);

 return VAR_7;
}
