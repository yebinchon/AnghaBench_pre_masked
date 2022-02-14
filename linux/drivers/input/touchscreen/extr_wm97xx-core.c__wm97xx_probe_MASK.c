
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct wm97xx {int id; void** gpio; TYPE_1__* codec; int dev; int variant; int codec_mutex; } ;
struct TYPE_4__ {int (* phy_init ) (struct wm97xx*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,struct wm97xx*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct wm97xx*) ;
 TYPE_1__ VAR_11 ;
 TYPE_1__ VAR_12 ;
 TYPE_1__ VAR_13 ;
 void* FUNC_5 (struct wm97xx*,int ) ;
 int FUNC_6 (struct wm97xx*) ;

__attribute__((used)) static int FUNC_7(struct wm97xx *VAR_14)
{
 int VAR_15 = 0;

 FUNC_3(&VAR_14->codec_mutex);
 FUNC_2(VAR_14->dev, VAR_14);


 VAR_15 = FUNC_5(VAR_14, VAR_6);
 if (VAR_15 != VAR_9) {
  FUNC_0(VAR_14->dev,
   "Device with vendor %04x is not a wm97xx\n", VAR_15);
  return -VAR_8;
 }

 VAR_14->id = FUNC_5(VAR_14, VAR_7);

 VAR_14->variant = VAR_10;

 FUNC_1(VAR_14->dev, "detected a wm97%02x codec\n", VAR_14->id & 0xff);

 switch (VAR_14->id & 0xff) {
 default:
  FUNC_0(VAR_14->dev, "Support for wm97%02x not compiled in.\n",
   VAR_14->id & 0xff);
  return -VAR_8;
 }


 VAR_14->codec->phy_init(VAR_14);


 VAR_14->gpio[0] = FUNC_5(VAR_14, VAR_0);
 VAR_14->gpio[1] = FUNC_5(VAR_14, VAR_1);
 VAR_14->gpio[2] = FUNC_5(VAR_14, VAR_3);
 VAR_14->gpio[3] = FUNC_5(VAR_14, VAR_4);
 VAR_14->gpio[4] = FUNC_5(VAR_14, VAR_2);
 VAR_14->gpio[5] = FUNC_5(VAR_14, VAR_5);

 return FUNC_6(VAR_14);
}
