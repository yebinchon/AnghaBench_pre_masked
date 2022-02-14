
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dummy; } ;
struct max31722_data {int hwmon_dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct max31722_data*,int ) ;
 struct max31722_data* FUNC_2 (struct spi_device*) ;

__attribute__((used)) static int FUNC_3(struct spi_device *VAR_1)
{
 struct max31722_data *VAR_2 = FUNC_2(VAR_1);

 FUNC_0(VAR_2->hwmon_dev);

 return FUNC_1(VAR_2, VAR_0);
}
