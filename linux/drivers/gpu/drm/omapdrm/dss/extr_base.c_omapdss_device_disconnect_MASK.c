
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct omap_dss_device {scalar_t__ state; struct dss_device* dss; TYPE_2__* ops; int display; int id; int panel; int bridge; int dev; } ;
struct dss_device {TYPE_1__* pdev; } ;
struct TYPE_4__ {int (* disconnect ) (struct omap_dss_device*,struct omap_dss_device*) ;} ;
struct TYPE_3__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*,char*,char*) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (struct omap_dss_device*) ;
 int FUNC_4 (struct omap_dss_device*,struct omap_dss_device*) ;

void FUNC_5(struct omap_dss_device *VAR_1,
          struct omap_dss_device *VAR_2)
{
 struct dss_device *VAR_3 = VAR_1 ? VAR_1->dss : VAR_2->dss;

 FUNC_1(&VAR_3->pdev->dev, "disconnect(%s, %s)\n",
  VAR_1 ? FUNC_2(VAR_1->dev) : "NULL",
  VAR_2 ? FUNC_2(VAR_2->dev) : "NULL");

 if (!VAR_2) {
  FUNC_0(!VAR_1->bridge && !VAR_1->panel);
  return;
 }

 if (!VAR_2->id && !FUNC_3(VAR_2)) {
  FUNC_0(!VAR_2->display);
  return;
 }

 FUNC_0(VAR_2->state != VAR_0);

 VAR_2->ops->disconnect(VAR_1, VAR_2);
 VAR_2->dss = ((void*)0);
}
