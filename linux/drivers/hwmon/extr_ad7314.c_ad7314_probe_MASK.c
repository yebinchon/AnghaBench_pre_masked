
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int modalias; int dev; } ;
struct device {int dummy; } ;
struct ad7314_data {struct spi_device* spi_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*) ;
 int VAR_2 ;
 struct device* FUNC_1 (int *,int ,struct ad7314_data*,int ) ;
 struct ad7314_data* FUNC_2 (int *,int,int ) ;

__attribute__((used)) static int FUNC_3(struct spi_device *VAR_3)
{
 struct ad7314_data *VAR_4;
 struct device *VAR_5;

 VAR_4 = FUNC_2(&VAR_3->dev, sizeof(*VAR_4), VAR_1);
 if (VAR_4 == ((void*)0))
  return -VAR_0;

 VAR_4->spi_dev = VAR_3;
 VAR_5 = FUNC_1(&VAR_3->dev,
          VAR_3->modalias,
          VAR_4, VAR_2);
 return FUNC_0(VAR_5);
}
