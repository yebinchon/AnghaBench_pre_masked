
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct mcde {int epod; int vana; int mcde_clk; } ;
struct drm_device {struct mcde* dev_private; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct drm_device*) ;
 int VAR_0 ;
 struct drm_device* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_1)
{
 struct drm_device *VAR_2 = FUNC_3(VAR_1);
 struct mcde *VAR_3 = VAR_2->dev_private;

 FUNC_1(&VAR_1->dev, &VAR_0);
 FUNC_0(VAR_3->mcde_clk);
 FUNC_4(VAR_3->vana);
 FUNC_4(VAR_3->epod);
 FUNC_2(VAR_2);

 return 0;
}
