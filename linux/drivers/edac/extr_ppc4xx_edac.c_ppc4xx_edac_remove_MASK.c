
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ded; int sec; } ;
struct ppc4xx_edac_pdata {int dcr_host; TYPE_1__ irqs; } ;
struct platform_device {int dev; } ;
struct mem_ctl_info {int pdev; struct ppc4xx_edac_pdata* pvt_info; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 struct mem_ctl_info* FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mem_ctl_info*) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int ,struct mem_ctl_info*) ;

__attribute__((used)) static int
FUNC_5(struct platform_device *VAR_3)
{
 struct mem_ctl_info *VAR_4 = FUNC_1(&VAR_3->dev);
 struct ppc4xx_edac_pdata *VAR_5 = VAR_4->pvt_info;

 if (VAR_2 == VAR_0) {
  FUNC_4(VAR_5->irqs.sec, VAR_4);
  FUNC_4(VAR_5->irqs.ded, VAR_4);
 }

 FUNC_0(VAR_5->dcr_host, VAR_1);

 FUNC_2(VAR_4->pdev);
 FUNC_3(VAR_4);

 return 0;
}
