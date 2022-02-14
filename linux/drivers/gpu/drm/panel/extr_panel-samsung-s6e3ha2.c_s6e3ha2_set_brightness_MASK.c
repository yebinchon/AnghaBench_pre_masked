
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s6e3ha2 {int dev; } ;
struct TYPE_2__ {unsigned int brightness; unsigned int max_brightness; scalar_t__ power; } ;
struct backlight_device {TYPE_1__ props; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 struct s6e3ha2* FUNC_0 (struct backlight_device*) ;
 int FUNC_1 (int ,char*,unsigned int) ;
 int FUNC_2 (struct s6e3ha2*) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (struct s6e3ha2*) ;
 int FUNC_5 (struct s6e3ha2*) ;
 int FUNC_6 (struct s6e3ha2*) ;
 int FUNC_7 (struct s6e3ha2*,unsigned int) ;

__attribute__((used)) static int FUNC_8(struct backlight_device *VAR_4)
{
 struct s6e3ha2 *VAR_5 = FUNC_0(VAR_4);
 unsigned int VAR_6 = VAR_4->props.brightness;
 int VAR_7;

 if (VAR_6 < VAR_3 ||
  VAR_6 > VAR_4->props.max_brightness) {
  FUNC_1(VAR_5->dev, "Invalid brightness: %u\n", VAR_6);
  return -VAR_0;
 }

 if (VAR_4->props.power > VAR_2)
  return -VAR_1;

 FUNC_3(VAR_7, FUNC_6(VAR_5));
 FUNC_3(VAR_7, FUNC_7(VAR_5, VAR_6));
 FUNC_3(VAR_7, FUNC_2(VAR_5));
 FUNC_3(VAR_7, FUNC_4(VAR_5));
 FUNC_3(VAR_7, FUNC_5(VAR_5));

 return 0;
}
