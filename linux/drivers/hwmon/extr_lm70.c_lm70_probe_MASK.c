
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_device {int mode; int modalias; int dev; } ;
struct of_device_id {scalar_t__ data; } ;
struct lm70 {int chip; struct spi_device* spi; int lock; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int driver_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*) ;
 int VAR_3 ;
 int VAR_4 ;
 struct device* FUNC_1 (int *,int ,struct lm70*,int ) ;
 struct lm70* FUNC_2 (int *,int,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int *) ;
 struct of_device_id* FUNC_4 (int ,int *) ;
 TYPE_1__* FUNC_5 (struct spi_device*) ;

__attribute__((used)) static int FUNC_6(struct spi_device *VAR_7)
{
 const struct of_device_id *VAR_8;
 struct device *VAR_9;
 struct lm70 *VAR_10;
 int VAR_11;

 VAR_8 = FUNC_4(VAR_6, &VAR_7->dev);
 if (VAR_8)
  VAR_11 = (int)(uintptr_t)VAR_8->data;
 else
  VAR_11 = FUNC_5(VAR_7)->driver_data;


 if (VAR_7->mode & (VAR_4 | VAR_3))
  return -VAR_0;



 VAR_10 = FUNC_2(&VAR_7->dev, sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  return -VAR_1;

 FUNC_3(&VAR_10->lock);
 VAR_10->chip = VAR_11;
 VAR_10->spi = VAR_7;

 VAR_9 = FUNC_1(&VAR_7->dev,
          VAR_7->modalias,
          VAR_10, VAR_5);
 return FUNC_0(VAR_9);
}
