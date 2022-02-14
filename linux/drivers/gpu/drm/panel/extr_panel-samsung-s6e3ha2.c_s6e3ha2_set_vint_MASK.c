
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s6e3ha2 {struct backlight_device* bl_dev; } ;
struct TYPE_2__ {unsigned int brightness; } ;
struct backlight_device {TYPE_1__ props; } ;


 int FUNC_0 (unsigned char*) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct s6e3ha2*,unsigned char*,int ) ;
 int* VAR_2 ;

__attribute__((used)) static int FUNC_2(struct s6e3ha2 *VAR_3)
{
 struct backlight_device *VAR_4 = VAR_3->bl_dev;
 unsigned int VAR_5 = VAR_4->props.brightness;
 unsigned char VAR_6[] = { 0xf4, 0x8b,
   VAR_2[VAR_5 * (VAR_1 - 1) /
   VAR_0] };

 return FUNC_1(VAR_3, VAR_6, FUNC_0(VAR_6));
}
