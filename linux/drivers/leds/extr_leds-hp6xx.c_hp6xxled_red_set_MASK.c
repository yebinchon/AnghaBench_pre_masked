
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct led_classdev {int dummy; } ;
typedef enum led_brightness { ____Placeholder_led_brightness } led_brightness ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static void FUNC_2(struct led_classdev *VAR_2,
        enum led_brightness VAR_3)
{
 u16 VAR_4;

 VAR_4 = FUNC_0(VAR_0);
 if (VAR_3)
  FUNC_1(VAR_4 & (~VAR_1), VAR_0);
 else
  FUNC_1(VAR_4 | VAR_1, VAR_0);
}
