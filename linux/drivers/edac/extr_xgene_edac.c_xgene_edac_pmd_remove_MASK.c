
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgene_edac_pmd_ctx {struct edac_device_ctl_info* edac_dev; } ;
struct edac_device_ctl_info {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct edac_device_ctl_info*) ;
 int FUNC_2 (struct edac_device_ctl_info*,int ) ;

__attribute__((used)) static int FUNC_3(struct xgene_edac_pmd_ctx *VAR_0)
{
 struct edac_device_ctl_info *VAR_1 = VAR_0->edac_dev;

 FUNC_2(VAR_1, 0);
 FUNC_0(VAR_1->dev);
 FUNC_1(VAR_1);
 return 0;
}
