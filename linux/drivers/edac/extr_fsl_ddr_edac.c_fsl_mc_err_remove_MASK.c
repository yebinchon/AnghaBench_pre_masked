
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct mem_ctl_info {struct fsl_mc_pdata* pvt_info; } ;
struct fsl_mc_pdata {scalar_t__ mc_vbase; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__,int ) ;
 struct mem_ctl_info* FUNC_1 (int *) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct mem_ctl_info*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

int FUNC_5(struct platform_device *VAR_7)
{
 struct mem_ctl_info *VAR_8 = FUNC_1(&VAR_7->dev);
 struct fsl_mc_pdata *VAR_9 = VAR_8->pvt_info;

 FUNC_2(0, "\n");

 if (VAR_4 == VAR_0) {
  FUNC_0(VAR_9->mc_vbase + VAR_2, 0);
 }

 FUNC_0(VAR_9->mc_vbase + VAR_1,
    VAR_5);
 FUNC_0(VAR_9->mc_vbase + VAR_3, VAR_6);

 FUNC_3(&VAR_7->dev);
 FUNC_4(VAR_8);
 return 0;
}
