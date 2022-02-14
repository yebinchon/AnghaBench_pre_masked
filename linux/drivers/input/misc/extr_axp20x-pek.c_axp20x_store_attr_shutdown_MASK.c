
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct axp20x_pek {TYPE_1__* info; } ;
typedef int ssize_t ;
struct TYPE_2__ {int shutdown_mask; int shutdown_time; } ;


 int FUNC_0 (struct device*,int ,int ,char const*,size_t) ;
 struct axp20x_pek* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
       struct device_attribute *VAR_1,
       const char *VAR_2, size_t VAR_3)
{
 struct axp20x_pek *VAR_4 = FUNC_1(VAR_0);

 return FUNC_0(VAR_0, VAR_4->info->shutdown_time,
     VAR_4->info->shutdown_mask, VAR_2, VAR_3);
}
