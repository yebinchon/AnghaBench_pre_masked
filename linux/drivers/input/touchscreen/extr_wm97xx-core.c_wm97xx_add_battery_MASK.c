
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct wm97xx_batt_pdata {int dummy; } ;
struct wm97xx {TYPE_2__* battery_dev; int dev; } ;
struct TYPE_6__ {struct wm97xx_batt_pdata* platform_data; int parent; } ;
struct TYPE_7__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (char*,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,struct wm97xx*) ;

__attribute__((used)) static int FUNC_4(struct wm97xx *VAR_1,
         struct wm97xx_batt_pdata *VAR_2)
{
 int VAR_3;

 VAR_1->battery_dev = FUNC_1("wm97xx-battery", -1);
 if (!VAR_1->battery_dev)
  return -VAR_0;

 FUNC_3(VAR_1->battery_dev, VAR_1);
 VAR_1->battery_dev->dev.parent = VAR_1->dev;
 VAR_1->battery_dev->dev.platform_data = VAR_2;
 VAR_3 = FUNC_0(VAR_1->battery_dev);
 if (VAR_3)
  FUNC_2(VAR_1->battery_dev);

 return VAR_3;
}
