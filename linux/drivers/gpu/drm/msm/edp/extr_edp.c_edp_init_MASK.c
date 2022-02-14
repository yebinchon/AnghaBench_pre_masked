
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct msm_edp {struct platform_device* pdev; } ;


 int FUNC_0 (char*,struct msm_edp*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct msm_edp* FUNC_1 (int) ;
 int VAR_2 ;
 struct msm_edp* FUNC_2 (int *,int,int ) ;
 int FUNC_3 (struct platform_device*) ;
 int FUNC_4 (struct msm_edp*) ;
 int FUNC_5 (struct platform_device*,struct msm_edp*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static struct msm_edp *FUNC_7(struct platform_device *VAR_3)
{
 struct msm_edp *VAR_4 = ((void*)0);
 int VAR_5;

 if (!VAR_3) {
  FUNC_6("no eDP device\n");
  VAR_5 = -VAR_1;
  goto fail;
 }

 VAR_4 = FUNC_2(&VAR_3->dev, sizeof(*VAR_4), VAR_2);
 if (!VAR_4) {
  VAR_5 = -VAR_0;
  goto fail;
 }
 FUNC_0("eDP probed=%p", VAR_4);

 VAR_4->pdev = VAR_3;
 FUNC_5(VAR_3, VAR_4);

 VAR_5 = FUNC_4(VAR_4);
 if (VAR_5)
  goto fail;

 return VAR_4;

fail:
 if (VAR_4)
  FUNC_3(VAR_3);

 return FUNC_1(VAR_5);
}
