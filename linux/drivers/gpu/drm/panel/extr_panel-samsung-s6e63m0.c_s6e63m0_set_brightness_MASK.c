
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s6e63m0 {int dummy; } ;
struct TYPE_2__ {int brightness; } ;
struct backlight_device {TYPE_1__ props; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct s6e63m0* FUNC_1 (struct backlight_device*) ;
 int FUNC_2 (struct s6e63m0*) ;
 int FUNC_3 (struct s6e63m0*,int ,int ) ;
 int FUNC_4 (struct s6e63m0*,int ,int) ;
 int * VAR_1 ;

__attribute__((used)) static int FUNC_5(struct backlight_device *VAR_2)
{
 struct s6e63m0 *VAR_3 = FUNC_1(VAR_2);

 int VAR_4 = VAR_2->props.brightness;


 FUNC_3(VAR_3, VAR_1[VAR_4],
     FUNC_0(VAR_1[VAR_4]));


 FUNC_4(VAR_3, VAR_0, 0x01);

 return FUNC_2(VAR_3);
}
