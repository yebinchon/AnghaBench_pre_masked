
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hwmon_chip_info {int dummy; } ;
struct device {int dummy; } ;
struct attribute_group {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct device* FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct device*) ;
 int VAR_3 ;
 int FUNC_2 (struct device*,struct device**) ;
 struct device** FUNC_3 (int ,int,int ) ;
 int FUNC_4 (struct device**) ;
 struct device* FUNC_5 (struct device*,char const*,void*,struct hwmon_chip_info const*,struct attribute_group const**) ;

struct device *
FUNC_6(struct device *VAR_4, const char *VAR_5,
         void *VAR_6,
         const struct hwmon_chip_info *VAR_7,
         const struct attribute_group **VAR_8)
{
 struct device **VAR_9, *VAR_10;

 if (!VAR_4)
  return FUNC_0(-VAR_0);

 VAR_9 = FUNC_3(VAR_3, sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return FUNC_0(-VAR_1);

 VAR_10 = FUNC_5(VAR_4, VAR_5, VAR_6, VAR_7,
      VAR_8);
 if (FUNC_1(VAR_10))
  goto error;

 *VAR_9 = VAR_10;
 FUNC_2(VAR_4, VAR_9);

 return VAR_10;

error:
 FUNC_4(VAR_9);
 return VAR_10;
}
