
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct backlight_properties {int brightness; int max_brightness; } ;
struct TYPE_2__ {struct backlight_properties props; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;

int FUNC_2(void)
{
 int VAR_4 = -VAR_0;

 FUNC_0(&VAR_3);
 if (VAR_2) {
  struct backlight_properties *VAR_5;

  VAR_5 = &VAR_2->props;

  VAR_4 = VAR_5->brightness *
   (VAR_1 + 1) /
   (VAR_5->max_brightness + 1);
 }
 FUNC_1(&VAR_3);

 return VAR_4;
}
