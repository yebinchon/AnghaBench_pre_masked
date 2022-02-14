
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct imx_sc_pd_soc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct imx_sc_pd_soc const*) ;
 struct imx_sc_pd_soc* FUNC_2 (int *) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_2)
{
 const struct imx_sc_pd_soc *VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(&VAR_1);
 if (VAR_4)
  return VAR_4;

 VAR_3 = FUNC_2(&VAR_2->dev);
 if (!VAR_3)
  return -VAR_0;

 return FUNC_1(&VAR_2->dev, VAR_3);
}
