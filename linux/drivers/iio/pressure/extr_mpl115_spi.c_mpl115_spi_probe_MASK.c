
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device_id {int name; } ;
struct spi_device {int dev; } ;


 int FUNC_0 (int *,int ,int *) ;
 int VAR_0 ;
 struct spi_device_id* FUNC_1 (struct spi_device*) ;

__attribute__((used)) static int FUNC_2(struct spi_device *VAR_1)
{
 const struct spi_device_id *VAR_2 = FUNC_1(VAR_1);

 return FUNC_0(&VAR_1->dev, VAR_2->name, &VAR_0);
}
