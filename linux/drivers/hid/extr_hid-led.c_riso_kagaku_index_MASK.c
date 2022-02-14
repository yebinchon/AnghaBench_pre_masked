
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_11__ {int brightness; } ;
struct TYPE_12__ {TYPE_5__ cdev; } ;
struct TYPE_9__ {int brightness; } ;
struct TYPE_10__ {TYPE_3__ cdev; } ;
struct TYPE_7__ {int brightness; } ;
struct TYPE_8__ {TYPE_1__ cdev; } ;
struct hidled_rgb {TYPE_6__ blue; TYPE_4__ green; TYPE_2__ red; } ;
typedef enum led_brightness { ____Placeholder_led_brightness } led_brightness ;


 int FUNC_0 (int,int,int) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static u8 FUNC_1(struct hidled_rgb *VAR_1)
{
 enum led_brightness VAR_2, VAR_3, VAR_4;

 VAR_2 = VAR_1->red.cdev.brightness;
 VAR_3 = VAR_1->green.cdev.brightness;
 VAR_4 = VAR_1->blue.cdev.brightness;

 if (VAR_0)
  return FUNC_0(VAR_2, VAR_4, VAR_3);
 else
  return FUNC_0(VAR_2, VAR_3, VAR_4);
}
