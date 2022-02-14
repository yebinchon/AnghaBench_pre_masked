
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max31722_data {int spi_device; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef int s16 ;


 int VAR_0 ;
 struct max31722_data* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
      struct device_attribute *VAR_2, char *VAR_3)
{
 ssize_t VAR_4;
 struct max31722_data *VAR_5 = FUNC_0(VAR_1);

 VAR_4 = FUNC_2(VAR_5->spi_device, VAR_0);
 if (VAR_4 < 0)
  return VAR_4;

 return FUNC_3(VAR_3, "%d\n", (s16)FUNC_1(VAR_4) * 125 / 32);
}
