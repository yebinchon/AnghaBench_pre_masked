
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct wm97xx_pdata {int dummy; } ;
struct wm97xx {TYPE_7__* input_dev; TYPE_3__* touch_dev; int dev; } ;
struct TYPE_12__ {int parent; } ;
struct TYPE_15__ {char* name; char* phys; TYPE_1__ dev; int keybit; int evbit; int close; int open; } ;
struct TYPE_13__ {struct wm97xx_pdata* platform_data; int parent; } ;
struct TYPE_14__ {TYPE_2__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int * VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 struct wm97xx_pdata* FUNC_1 (int ) ;
 TYPE_7__* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_7__*) ;
 int FUNC_4 (TYPE_7__*,int ,int ,int ,int ,int ) ;
 int FUNC_5 (TYPE_7__*,struct wm97xx*) ;
 int FUNC_6 (TYPE_7__*) ;
 int FUNC_7 (TYPE_3__*) ;
 TYPE_3__* FUNC_8 (char*,int) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_3__*,struct wm97xx*) ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_11(struct wm97xx *VAR_12)
{
 struct wm97xx_pdata *VAR_13 = FUNC_1(VAR_12->dev);
 int VAR_14;

 VAR_12->input_dev = FUNC_2(VAR_12->dev);
 if (VAR_12->input_dev == ((void*)0))
  return -VAR_4;


 VAR_12->input_dev->name = "wm97xx touchscreen";
 VAR_12->input_dev->phys = "wm97xx";
 VAR_12->input_dev->open = VAR_11;
 VAR_12->input_dev->close = VAR_10;

 FUNC_0(VAR_5, VAR_12->input_dev->evbit);
 FUNC_0(VAR_6, VAR_12->input_dev->evbit);
 FUNC_0(VAR_3, VAR_12->input_dev->keybit);

 FUNC_4(VAR_12->input_dev, VAR_1, VAR_8[0], VAR_8[1],
        VAR_8[2], 0);
 FUNC_4(VAR_12->input_dev, VAR_2, VAR_9[0], VAR_9[1],
        VAR_9[2], 0);
 FUNC_4(VAR_12->input_dev, VAR_0, VAR_7[0], VAR_7[1],
        VAR_7[2], 0);

 FUNC_5(VAR_12->input_dev, VAR_12);
 VAR_12->input_dev->dev.parent = VAR_12->dev;

 VAR_14 = FUNC_3(VAR_12->input_dev);
 if (VAR_14)
  return VAR_14;





 VAR_12->touch_dev = FUNC_8("wm97xx-touch", -1);
 if (!VAR_12->touch_dev) {
  VAR_14 = -VAR_4;
  goto touch_err;
 }
 FUNC_10(VAR_12->touch_dev, VAR_12);
 VAR_12->touch_dev->dev.parent = VAR_12->dev;
 VAR_12->touch_dev->dev.platform_data = VAR_13;
 VAR_14 = FUNC_7(VAR_12->touch_dev);
 if (VAR_14 < 0)
  goto touch_reg_err;

 return 0;
touch_reg_err:
 FUNC_9(VAR_12->touch_dev);
touch_err:
 FUNC_6(VAR_12->input_dev);
 VAR_12->input_dev = ((void*)0);

 return VAR_14;
}
