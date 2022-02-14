
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ina2xx_chip_info {int allow_async_readout; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (struct device*) ;
 struct ina2xx_chip_info* FUNC_1 (int ) ;
 int FUNC_2 (char const*,int*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
    struct device_attribute *VAR_1,
    const char *VAR_2, size_t VAR_3)
{
 struct ina2xx_chip_info *VAR_4 = FUNC_1(FUNC_0(VAR_0));
 bool VAR_5;
 int VAR_6;

 VAR_6 = FUNC_2((const char *) VAR_2, &VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_4->allow_async_readout = VAR_5;

 return VAR_3;
}
