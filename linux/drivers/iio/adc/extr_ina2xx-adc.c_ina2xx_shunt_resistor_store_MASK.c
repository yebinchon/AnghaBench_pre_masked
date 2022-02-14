
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ina2xx_chip_info {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (struct device*) ;
 struct ina2xx_chip_info* FUNC_1 (int ) ;
 int FUNC_2 (char const*,int,int*,int*) ;
 int FUNC_3 (struct ina2xx_chip_info*,int) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
        struct device_attribute *VAR_1,
        const char *VAR_2, size_t VAR_3)
{
 struct ina2xx_chip_info *VAR_4 = FUNC_1(FUNC_0(VAR_0));
 int VAR_5, VAR_6, VAR_7;

 VAR_7 = FUNC_2(VAR_2, 100000, &VAR_5, &VAR_6);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_3(VAR_4, VAR_5 * 1000000 + VAR_6);
 if (VAR_7)
  return VAR_7;

 return VAR_3;
}
