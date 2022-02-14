
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hwmon_chip_info {int info; TYPE_1__* ops; } ;
struct device {int dummy; } ;
struct attribute_group {int dummy; } ;
struct TYPE_2__ {int is_visible; } ;


 int VAR_0 ;
 struct device* FUNC_0 (int ) ;
 struct device* FUNC_1 (struct device*,char const*,void*,struct hwmon_chip_info const*,struct attribute_group const**) ;

struct device *
FUNC_2(struct device *VAR_1, const char *VAR_2,
    void *VAR_3,
    const struct hwmon_chip_info *VAR_4,
    const struct attribute_group **VAR_5)
{
 if (!VAR_2)
  return FUNC_0(-VAR_0);

 if (VAR_4 && (!VAR_4->ops || !VAR_4->ops->is_visible || !VAR_4->info))
  return FUNC_0(-VAR_0);

 if (VAR_4 && !VAR_1)
  return FUNC_0(-VAR_0);

 return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
}
