
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm97xx_platform_data {int batt_pdata; int ac97; } ;
struct wm97xx {int ac97; int * dev; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct wm97xx*) ;
 struct wm97xx_platform_data* FUNC_1 (int *) ;
 struct wm97xx* FUNC_2 (int *,int,int ) ;
 int FUNC_3 (struct wm97xx*,int ) ;
 int FUNC_4 (struct wm97xx*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_2)
{
 struct wm97xx *VAR_3;
 struct wm97xx_platform_data *VAR_4 = FUNC_1(&VAR_2->dev);
 int VAR_5;

 VAR_3 = FUNC_2(&VAR_2->dev, sizeof(struct wm97xx), VAR_1);
 if (!VAR_3)
  return -VAR_0;

 VAR_3->dev = &VAR_2->dev;
 VAR_3->ac97 = VAR_4->ac97;

 VAR_5 = FUNC_0(VAR_3);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_3(VAR_3, VAR_4->batt_pdata);
 if (VAR_5 < 0)
  goto batt_err;

 return VAR_5;

batt_err:
 FUNC_4(VAR_3);
 return VAR_5;
}
