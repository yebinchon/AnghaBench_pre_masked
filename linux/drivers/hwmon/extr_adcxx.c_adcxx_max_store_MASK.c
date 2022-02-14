
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adcxx {unsigned long reference; int lock; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (char const*,int,unsigned long*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct adcxx* FUNC_3 (struct spi_device*) ;
 struct spi_device* FUNC_4 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_2,
          struct device_attribute *VAR_3,
          const char *VAR_4, size_t VAR_5)
{
 struct spi_device *VAR_6 = FUNC_4(VAR_2);
 struct adcxx *VAR_7 = FUNC_3(VAR_6);
 unsigned long VAR_8;

 if (FUNC_0(VAR_4, 10, &VAR_8))
  return -VAR_0;

 if (FUNC_1(&VAR_7->lock))
  return -VAR_1;

 VAR_7->reference = VAR_8;

 FUNC_2(&VAR_7->lock);

 return VAR_5;
}
