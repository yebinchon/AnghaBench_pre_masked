
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct msm_dsi_host {int video_comp; TYPE_1__* pdev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int FUNC_0 (struct device*,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct msm_dsi_host*,int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int ) ;

__attribute__((used)) static void FUNC_5(struct msm_dsi_host *VAR_1)
{
 u32 VAR_2 = 0;
 struct device *VAR_3 = &VAR_1->pdev->dev;

 FUNC_1(VAR_1, VAR_0, 1);

 FUNC_3(&VAR_1->video_comp);

 VAR_2 = FUNC_4(&VAR_1->video_comp,
   FUNC_2(70));

 if (VAR_2 == 0)
  FUNC_0(VAR_3, "wait for video done timed out\n");

 FUNC_1(VAR_1, VAR_0, 0);
}
