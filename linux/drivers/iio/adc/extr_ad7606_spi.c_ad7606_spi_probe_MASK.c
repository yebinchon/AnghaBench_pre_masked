
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device_id {int driver_data; int name; } ;
struct spi_device {int irq; int dev; } ;
struct ad7606_bus_ops {int dummy; } ;




 struct ad7606_bus_ops VAR_0 ;
 int FUNC_0 (int *,int ,int *,int ,int,struct ad7606_bus_ops const*) ;
 struct ad7606_bus_ops VAR_1 ;
 struct ad7606_bus_ops VAR_2 ;
 struct spi_device_id* FUNC_1 (struct spi_device*) ;

__attribute__((used)) static int FUNC_2(struct spi_device *VAR_3)
{
 const struct spi_device_id *VAR_4 = FUNC_1(VAR_3);
 const struct ad7606_bus_ops *VAR_5;

 switch (VAR_4->driver_data) {
 case 128:
  VAR_5 = &VAR_2;
  break;
 case 129:
  VAR_5 = &VAR_0;
  break;
 default:
  VAR_5 = &VAR_1;
  break;
 }

 return FUNC_0(&VAR_3->dev, VAR_3->irq, ((void*)0),
       VAR_4->name, VAR_4->driver_data,
       VAR_5);
}
