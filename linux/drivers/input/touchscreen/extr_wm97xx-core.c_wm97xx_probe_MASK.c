
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm97xx_pdata {int * batt_pdata; } ;
struct wm97xx {int ac97; struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct wm97xx*) ;
 struct wm97xx_pdata* FUNC_1 (struct device*) ;
 struct wm97xx* FUNC_2 (struct device*,int,int ) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct wm97xx*,int *) ;
 int FUNC_5 (struct wm97xx*) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_2)
{
 struct wm97xx *VAR_3;
 int VAR_4;
 struct wm97xx_pdata *VAR_5 = FUNC_1(VAR_2);

 VAR_3 = FUNC_2(VAR_2, sizeof(struct wm97xx), VAR_1);
 if (!VAR_3)
  return -VAR_0;

 VAR_3->dev = VAR_2;
 VAR_3->ac97 = FUNC_3(VAR_2);

 VAR_4 = FUNC_0(VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_4(VAR_3, VAR_5 ? VAR_5->batt_pdata : ((void*)0));
 if (VAR_4 < 0)
  goto batt_err;

 return VAR_4;

batt_err:
 FUNC_5(VAR_3);
 return VAR_4;
}
