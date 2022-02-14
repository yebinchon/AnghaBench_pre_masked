
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct led_classdev {int dummy; } ;
struct ar8327_led {int active_low; int enable_hw_mode; int lock; } ;
typedef enum led_brightness { ____Placeholder_led_brightness } led_brightness ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ar8327_led*,int ) ;
 struct ar8327_led* FUNC_1 (struct led_classdev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct led_classdev *VAR_3,
     enum led_brightness VAR_4)
{
 struct ar8327_led *VAR_5 = FUNC_1(VAR_3);
 u8 VAR_6;
 bool VAR_7;

 VAR_7 = (VAR_4 != VAR_2);
 VAR_7 ^= VAR_5->active_low;

 VAR_6 = (VAR_7) ? VAR_1 :
        VAR_0;

 FUNC_2(&VAR_5->lock);

 VAR_5->enable_hw_mode = 0;
 FUNC_0(VAR_5, VAR_6);

 FUNC_3(&VAR_5->lock);
}
