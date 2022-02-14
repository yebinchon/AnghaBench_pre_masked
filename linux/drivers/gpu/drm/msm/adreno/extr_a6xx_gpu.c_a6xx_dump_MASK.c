
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msm_gpu {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct msm_gpu*) ;
 int FUNC_2 (struct msm_gpu*,int ) ;

__attribute__((used)) static void FUNC_3(struct msm_gpu *VAR_1)
{
 FUNC_0(&VAR_1->pdev->dev, "status:   %08x\n",
   FUNC_2(VAR_1, VAR_0));
 FUNC_1(VAR_1);
}
