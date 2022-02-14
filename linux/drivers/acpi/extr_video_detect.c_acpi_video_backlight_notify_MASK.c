
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct notifier_block {int dummy; } ;
struct TYPE_2__ {scalar_t__ type; } ;
struct backlight_device {TYPE_1__ props; } ;


 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct notifier_block *VAR_4,
           unsigned long VAR_5, void *VAR_6)
{
 struct backlight_device *VAR_7 = VAR_6;


 if (VAR_7->props.type == VAR_0 &&
     VAR_5 == VAR_1)
  FUNC_0(&VAR_3);

 return VAR_2;
}
