
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct mpc85xx_l2_pdata {scalar_t__ l2_vbase; int irq; } ;
struct edac_device_ctl_info {struct mpc85xx_l2_pdata* pvt_info; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct edac_device_ctl_info* FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct edac_device_ctl_info*) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int ) ;
 int VAR_4 ;
 int FUNC_5 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_5)
{
 struct edac_device_ctl_info *VAR_6 = FUNC_0(&VAR_5->dev);
 struct mpc85xx_l2_pdata *VAR_7 = VAR_6->pvt_info;

 FUNC_1(0, "\n");

 if (VAR_3 == VAR_0) {
  FUNC_5(VAR_7->l2_vbase + VAR_2, 0);
  FUNC_4(VAR_7->irq);
 }

 FUNC_5(VAR_7->l2_vbase + VAR_1, VAR_4);
 FUNC_2(&VAR_5->dev);
 FUNC_3(VAR_6);
 return 0;
}
