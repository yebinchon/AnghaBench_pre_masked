
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device_id {int name; int driver_data; } ;
struct spi_device {int dev; } ;


 int FUNC_0 (int *,int ,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct spi_device_id* FUNC_1 (struct spi_device*) ;

__attribute__((used)) static int FUNC_2(struct spi_device *VAR_2)
{
 const struct spi_device_id *VAR_3 = FUNC_1(VAR_2);

 return FUNC_0(&VAR_2->dev, VAR_3->driver_data, VAR_3->name,
       VAR_1, VAR_0);
}
