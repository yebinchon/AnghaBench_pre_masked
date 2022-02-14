
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int modalias; int dev; } ;
struct max31722_data {int mode; int hwmon_dev; struct spi_device* spi_device; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 struct max31722_data* FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int *,int ,struct max31722_data*,int ) ;
 int VAR_5 ;
 int FUNC_4 (struct max31722_data*,int) ;
 int FUNC_5 (struct spi_device*,struct max31722_data*) ;

__attribute__((used)) static int FUNC_6(struct spi_device *VAR_6)
{
 int VAR_7;
 struct max31722_data *VAR_8;

 VAR_8 = FUNC_2(&VAR_6->dev, sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 FUNC_5(VAR_6, VAR_8);
 VAR_8->spi_device = VAR_6;




 VAR_8->mode = VAR_2 | VAR_4;
 VAR_7 = FUNC_4(VAR_8, VAR_2);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_8->hwmon_dev = FUNC_3(&VAR_6->dev,
           VAR_6->modalias,
           VAR_8,
           VAR_5);
 if (FUNC_0(VAR_8->hwmon_dev)) {
  FUNC_4(VAR_8, VAR_3);
  return FUNC_1(VAR_8->hwmon_dev);
 }

 return 0;
}
