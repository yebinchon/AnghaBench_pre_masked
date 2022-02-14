
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct msm_dsi {int id; struct platform_device* pdev; } ;


 int FUNC_0 (char*,struct msm_dsi*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct msm_dsi* FUNC_1 (int) ;
 int VAR_2 ;
 struct msm_dsi* FUNC_2 (int *,int,int ) ;
 int FUNC_3 (struct msm_dsi*) ;
 int FUNC_4 (struct msm_dsi*) ;
 int FUNC_5 (struct msm_dsi*) ;
 int FUNC_6 (struct msm_dsi*) ;
 int FUNC_7 (struct platform_device*,struct msm_dsi*) ;

__attribute__((used)) static struct msm_dsi *FUNC_8(struct platform_device *VAR_3)
{
 struct msm_dsi *VAR_4;
 int VAR_5;

 if (!VAR_3)
  return FUNC_1(-VAR_1);

 VAR_4 = FUNC_2(&VAR_3->dev, sizeof(*VAR_4), VAR_2);
 if (!VAR_4)
  return FUNC_1(-VAR_0);
 FUNC_0("dsi probed=%p", VAR_4);

 VAR_4->id = -1;
 VAR_4->pdev = VAR_3;
 FUNC_7(VAR_3, VAR_4);


 VAR_5 = FUNC_5(VAR_4);
 if (VAR_5)
  goto destroy_dsi;


 VAR_5 = FUNC_4(VAR_4);
 if (VAR_5)
  goto destroy_dsi;


 VAR_5 = FUNC_6(VAR_4);
 if (VAR_5)
  goto destroy_dsi;

 return VAR_4;

destroy_dsi:
 FUNC_3(VAR_4);
 return FUNC_1(VAR_5);
}
