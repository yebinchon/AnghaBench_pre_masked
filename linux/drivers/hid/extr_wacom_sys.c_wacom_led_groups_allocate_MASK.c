
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wacom_group_leds {int dummy; } ;
struct TYPE_4__ {int count; struct wacom_group_leds* groups; } ;
struct wacom {TYPE_2__ led; TYPE_1__* hdev; } ;
struct device {int dummy; } ;
struct TYPE_3__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,int ,struct wacom*) ;
 struct wacom_group_leds* FUNC_1 (struct device*,int,int,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(struct wacom *VAR_3, int VAR_4)
{
 struct device *VAR_5 = &VAR_3->hdev->dev;
 struct wacom_group_leds *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_1(VAR_5, VAR_4, sizeof(struct wacom_group_leds),
         VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_7 = FUNC_0(VAR_5, VAR_2, VAR_3);
 if (VAR_7)
  return VAR_7;

 VAR_3->led.groups = VAR_6;
 VAR_3->led.count = VAR_4;

 return 0;
}
