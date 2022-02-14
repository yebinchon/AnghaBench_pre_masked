
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct st_sensors_platform_data {scalar_t__ spi_3wire; } ;
struct TYPE_2__ {scalar_t__ platform_data; struct device_node* of_node; } ;
struct spi_device {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;


 scalar_t__ FUNC_0 (struct device_node*,char*) ;

__attribute__((used)) static bool FUNC_1(struct spi_device *VAR_0)
{
 struct device_node *VAR_1 = VAR_0->dev.of_node;
 struct st_sensors_platform_data *VAR_2;

 VAR_2 = (struct st_sensors_platform_data *)VAR_0->dev.platform_data;
 if ((VAR_1 && FUNC_0(VAR_1, "spi-3wire")) ||
     (VAR_2 && VAR_2->spi_3wire)) {
  return 1;
 }

 return 0;
}
