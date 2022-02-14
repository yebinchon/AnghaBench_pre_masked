
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct da9052_led {size_t led_index; TYPE_1__* da9052; } ;
typedef enum led_brightness { ____Placeholder_led_brightness } led_brightness ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (int ,char*,int) ;
 int * VAR_1 ;

__attribute__((used)) static int FUNC_2(struct da9052_led *VAR_2,
         enum led_brightness VAR_3)
{
 u8 VAR_4;
 int VAR_5;

 VAR_4 = (VAR_3 & 0x7f) | VAR_0;

 VAR_5 = FUNC_0(VAR_2->da9052, VAR_1[VAR_2->led_index], VAR_4);
 if (VAR_5 < 0)
  FUNC_1(VAR_2->da9052->dev, "Failed to set led brightness, %d\n",
   VAR_5);
 return VAR_5;
}
