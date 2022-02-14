
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s6e63j0x03 {struct backlight_device* bl_dev; } ;
struct TYPE_2__ {unsigned int brightness; } ;
struct backlight_device {TYPE_1__ props; } ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (struct s6e63j0x03*,int) ;
 int FUNC_1 (struct s6e63j0x03*,int ,int ) ;
 unsigned int FUNC_2 (unsigned int) ;

__attribute__((used)) static int FUNC_3(struct s6e63j0x03 *VAR_2,
     unsigned int VAR_3)
{
 struct backlight_device *VAR_4 = VAR_2->bl_dev;
 unsigned int VAR_5 = FUNC_2(VAR_3);
 int VAR_6;

 VAR_6 = FUNC_0(VAR_2, 1);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_6 = FUNC_1(VAR_2, VAR_1[VAR_5], VAR_0);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_6 = FUNC_0(VAR_2, 0);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_4->props.brightness = VAR_3;

 return 0;
}
