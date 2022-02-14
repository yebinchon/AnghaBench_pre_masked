
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hwmon_chip_info {scalar_t__* info; int ops; } ;
struct device {int dummy; } ;
struct attribute {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct attribute** FUNC_0 (int) ;
 int VAR_2 ;
 struct attribute** FUNC_1 (struct device*,int,int,int ) ;
 int FUNC_2 (struct device*,void const*,struct attribute**,int ,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

__attribute__((used)) static struct attribute **
FUNC_4(struct device *VAR_3, const void *VAR_4,
       const struct hwmon_chip_info *VAR_5)
{
 int VAR_6, VAR_7, VAR_8 = 0, VAR_9 = 0;
 struct attribute **VAR_10;

 for (VAR_7 = 0; VAR_5->info[VAR_7]; VAR_7++)
  VAR_9 += FUNC_3(VAR_5->info[VAR_7]);

 if (VAR_9 == 0)
  return FUNC_0(-VAR_0);

 VAR_10 = FUNC_1(VAR_3, VAR_9 + 1, sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  return FUNC_0(-VAR_1);

 for (VAR_7 = 0; VAR_5->info[VAR_7]; VAR_7++) {
  VAR_6 = FUNC_2(VAR_3, VAR_4, &VAR_10[VAR_8], VAR_5->ops,
         VAR_5->info[VAR_7]);
  if (VAR_6 < 0)
   return FUNC_0(VAR_6);
  VAR_8 += VAR_6;
 }

 return VAR_10;
}
