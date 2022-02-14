
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct device* parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct device {int dummy; } ;
struct adp5520_leds_platform_data {int led_on_time; int fade_out; int fade_in; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct device*,int ,int) ;
 struct adp5520_leds_platform_data* FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_5)
{
 struct adp5520_leds_platform_data *VAR_6 = FUNC_2(&VAR_5->dev);
 struct device *VAR_7 = VAR_5->dev.parent;
 int VAR_8 = 0;

 VAR_8 |= FUNC_1(VAR_7, VAR_0, 0);
 VAR_8 |= FUNC_1(VAR_7, VAR_1, 0);
 VAR_8 |= FUNC_1(VAR_7, VAR_2, 0);
 VAR_8 |= FUNC_1(VAR_7, VAR_4, VAR_6->led_on_time << 6);
 VAR_8 |= FUNC_1(VAR_7, VAR_3, FUNC_0(VAR_6->fade_in,
   VAR_6->fade_out));

 return VAR_8;
}
