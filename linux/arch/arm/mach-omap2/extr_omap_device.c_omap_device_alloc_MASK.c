
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct omap_device* od; } ;
struct platform_device {int dev; TYPE_1__ archdata; } ;
struct omap_hwmod {struct omap_device* od; } ;
struct omap_device {int hwmods_cnt; struct platform_device* pdev; struct omap_hwmod** hwmods; } ;


 int VAR_0 ;
 struct omap_device* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct omap_device*,struct omap_hwmod*) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (struct omap_device*) ;
 struct omap_hwmod** FUNC_4 (struct omap_hwmod**,int,int ) ;
 struct omap_device* FUNC_5 (int,int ) ;

struct omap_device *FUNC_6(struct platform_device *VAR_2,
     struct omap_hwmod **VAR_3, int VAR_4)
{
 int VAR_5 = -VAR_0;
 struct omap_device *VAR_6;
 int VAR_7;
 struct omap_hwmod **VAR_8;

 VAR_6 = FUNC_5(sizeof(struct omap_device), VAR_1);
 if (!VAR_6) {
  VAR_5 = -VAR_0;
  goto oda_exit1;
 }
 VAR_6->hwmods_cnt = VAR_4;

 VAR_8 = FUNC_4(VAR_3, sizeof(struct omap_hwmod *) * VAR_4, VAR_1);
 if (!VAR_8)
  goto oda_exit2;

 VAR_6->hwmods = VAR_8;
 VAR_6->pdev = VAR_2;
 VAR_2->archdata.od = VAR_6;

 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  VAR_8[VAR_7]->od = VAR_6;
  FUNC_1(VAR_6, VAR_8[VAR_7]);
 }

 return VAR_6;

oda_exit2:
 FUNC_3(VAR_6);
oda_exit1:
 FUNC_2(&VAR_2->dev, "omap_device: build failed (%d)\n", VAR_5);

 return FUNC_0(VAR_5);
}
