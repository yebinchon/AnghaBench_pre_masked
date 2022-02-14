
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int kobj; } ;
struct spi_device {int bits_per_word; TYPE_2__ dev; int mode; } ;
struct max1111_data {int lsb; int hwmon_dev; struct spi_device* spi; int drvdata_lock; void* sel_sh; } ;
typedef enum chips { ____Placeholder_chips } chips ;
struct TYPE_5__ {int driver_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 void* VAR_2 ;
 void* VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (TYPE_2__*,char*) ;
 struct max1111_data* FUNC_3 (TYPE_2__*,int,int ) ;
 int FUNC_4 (TYPE_2__*) ;

 int VAR_5 ;

 int VAR_6 ;


 int FUNC_5 (int *) ;
 int FUNC_6 (struct max1111_data*) ;
 TYPE_1__* FUNC_7 (struct spi_device*) ;
 int FUNC_8 (struct spi_device*,struct max1111_data*) ;
 int FUNC_9 (struct spi_device*) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *,int *) ;
 struct max1111_data* VAR_7 ;

__attribute__((used)) static int FUNC_12(struct spi_device *VAR_8)
{
 enum chips VAR_9 = FUNC_7(VAR_8)->driver_data;
 struct max1111_data *VAR_10;
 int VAR_11;

 VAR_8->bits_per_word = 8;
 VAR_8->mode = VAR_4;
 VAR_11 = FUNC_9(VAR_8);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_10 = FUNC_3(&VAR_8->dev, sizeof(struct max1111_data), VAR_1);
 if (VAR_10 == ((void*)0))
  return -VAR_0;

 switch (VAR_9) {
 case 131:
  VAR_10->lsb = 8;
  VAR_10->sel_sh = VAR_2;
  break;
 case 130:
  VAR_10->lsb = 8;
  VAR_10->sel_sh = VAR_3;
  break;
 case 129:
  VAR_10->lsb = 16;
  VAR_10->sel_sh = VAR_2;
  break;
 case 128:
  VAR_10->lsb = 16;
  VAR_10->sel_sh = VAR_3;
  break;
 }
 VAR_11 = FUNC_6(VAR_10);
 if (VAR_11)
  return VAR_11;

 FUNC_5(&VAR_10->drvdata_lock);

 VAR_10->spi = VAR_8;
 FUNC_8(VAR_8, VAR_10);

 VAR_11 = FUNC_10(&VAR_8->dev.kobj, &VAR_6);
 if (VAR_11) {
  FUNC_2(&VAR_8->dev, "failed to create attribute group\n");
  return VAR_11;
 }
 if (VAR_9 == 131 || VAR_9 == 129) {
  VAR_11 = FUNC_10(&VAR_8->dev.kobj, &VAR_5);
  if (VAR_11) {
   FUNC_2(&VAR_8->dev,
    "failed to create extended attribute group\n");
   goto err_remove;
  }
 }

 VAR_10->hwmon_dev = FUNC_4(&VAR_8->dev);
 if (FUNC_0(VAR_10->hwmon_dev)) {
  FUNC_2(&VAR_8->dev, "failed to create hwmon device\n");
  VAR_11 = FUNC_1(VAR_10->hwmon_dev);
  goto err_remove;
 }




 return 0;

err_remove:
 FUNC_11(&VAR_8->dev.kobj, &VAR_5);
 FUNC_11(&VAR_8->dev.kobj, &VAR_6);
 return VAR_11;
}
