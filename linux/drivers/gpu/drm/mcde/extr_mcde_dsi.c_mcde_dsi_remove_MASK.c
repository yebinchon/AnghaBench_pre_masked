
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct mcde_dsi {int dsi_host; } ;


 int FUNC_0 (int *,int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 struct mcde_dsi* FUNC_2 (struct platform_device*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_1)
{
 struct mcde_dsi *VAR_2 = FUNC_2(VAR_1);

 FUNC_0(&VAR_1->dev, &VAR_0);
 FUNC_1(&VAR_2->dsi_host);

 return 0;
}
