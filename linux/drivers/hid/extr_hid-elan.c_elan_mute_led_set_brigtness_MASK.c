
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
struct led_classdev {TYPE_1__* dev; } ;
struct hid_device {int dummy; } ;
struct elan_drvdata {void* mute_led_state; } ;
struct device {int dummy; } ;
typedef enum led_brightness { ____Placeholder_led_brightness } led_brightness ;
struct TYPE_2__ {struct device* parent; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct hid_device*,char*,int) ;
 struct elan_drvdata* FUNC_1 (struct hid_device*) ;
 int FUNC_2 (struct hid_device*,unsigned char,unsigned char*,int,int ,int ) ;
 int FUNC_3 (unsigned char*) ;
 unsigned char* FUNC_4 (int,int ) ;
 struct hid_device* FUNC_5 (struct device*) ;

__attribute__((used)) static int FUNC_6(struct led_classdev *VAR_6,
           enum led_brightness VAR_7)
{
 int VAR_8;
 u8 VAR_9;
 struct device *VAR_10 = VAR_6->dev->parent;
 struct hid_device *VAR_11 = FUNC_5(VAR_10);
 struct elan_drvdata *VAR_12 = FUNC_1(VAR_11);

 unsigned char *VAR_13 = FUNC_4(VAR_0, VAR_3);

 if (!VAR_13)
  return -VAR_2;

 VAR_9 = !!VAR_7;

 VAR_13[0] = VAR_1;
 VAR_13[1] = 0x02;
 VAR_13[2] = VAR_9;

 VAR_8 = FUNC_2(VAR_11, VAR_13[0], VAR_13, VAR_0,
     VAR_4, VAR_5);

 FUNC_3(VAR_13);

 if (VAR_8 != VAR_0) {
  FUNC_0(VAR_11, "Failed to set mute led brightness: %d\n", VAR_8);
  return VAR_8;
 }

 VAR_12->mute_led_state = VAR_9;
 return 0;
}
