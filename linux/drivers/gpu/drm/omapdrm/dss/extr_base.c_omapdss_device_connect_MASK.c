
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct omap_dss_device {struct dss_device* dss; TYPE_1__* ops; scalar_t__ panel; scalar_t__ bridge; int dev; } ;
struct dss_device {TYPE_2__* pdev; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int (* connect ) (struct omap_dss_device*,struct omap_dss_device*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,char*,char*) ;
 char* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct omap_dss_device*) ;
 int FUNC_3 (struct omap_dss_device*,struct omap_dss_device*) ;

int FUNC_4(struct dss_device *VAR_2,
      struct omap_dss_device *VAR_3,
      struct omap_dss_device *VAR_4)
{
 int VAR_5;

 FUNC_0(&VAR_2->pdev->dev, "connect(%s, %s)\n",
  VAR_3 ? FUNC_1(VAR_3->dev) : "NULL",
  VAR_4 ? FUNC_1(VAR_4->dev) : "NULL");

 if (!VAR_4) {






  return VAR_3 && (VAR_3->bridge || VAR_3->panel) ? 0 : -VAR_1;
 }

 if (FUNC_2(VAR_4))
  return -VAR_0;

 VAR_4->dss = VAR_2;

 VAR_5 = VAR_4->ops->connect(VAR_3, VAR_4);
 if (VAR_5 < 0) {
  VAR_4->dss = ((void*)0);
  return VAR_5;
 }

 return 0;
}
