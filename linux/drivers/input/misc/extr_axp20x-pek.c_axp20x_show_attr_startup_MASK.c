
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct axp20x_pek {TYPE_1__* info; } ;
typedef int ssize_t ;
struct TYPE_2__ {int startup_mask; int startup_time; } ;


 int FUNC_0 (struct device*,int ,int ,char*) ;
 struct axp20x_pek* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
     struct device_attribute *VAR_1,
     char *VAR_2)
{
 struct axp20x_pek *VAR_3 = FUNC_1(VAR_0);

 return FUNC_0(VAR_0, VAR_3->info->startup_time,
    VAR_3->info->startup_mask, VAR_2);
}
