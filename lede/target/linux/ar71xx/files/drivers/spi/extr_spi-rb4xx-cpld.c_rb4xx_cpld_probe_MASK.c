
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct rb4xx_cpld_platform_data* platform_data; } ;
struct spi_device {int mode; int bits_per_word; TYPE_1__ dev; } ;
struct rb4xx_cpld_platform_data {int gpio_base; } ;
struct rb4xx_cpld {int spi; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (TYPE_1__*,char*,...) ;
 int FUNC_2 (TYPE_1__*,struct rb4xx_cpld*) ;
 int FUNC_3 (struct rb4xx_cpld*) ;
 struct rb4xx_cpld* FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;
 struct rb4xx_cpld* VAR_5 ;
 int FUNC_6 (struct rb4xx_cpld*,int ) ;
 int FUNC_7 (struct spi_device*) ;
 int FUNC_8 (struct spi_device*) ;

__attribute__((used)) static int FUNC_9(struct spi_device *VAR_6)
{
 struct rb4xx_cpld *VAR_7;
 struct rb4xx_cpld_platform_data *VAR_8;
 int VAR_9;

 VAR_8 = VAR_6->dev.platform_data;
 if (!VAR_8) {
  FUNC_0(&VAR_6->dev, "no platform data\n");
  return -VAR_0;
 }

 VAR_7 = FUNC_4(sizeof(*VAR_7), VAR_2);
 if (!VAR_7) {
  FUNC_1(&VAR_6->dev, "no memory for private data\n");
  return -VAR_1;
 }

 FUNC_5(&VAR_7->lock);
 VAR_7->spi = FUNC_7(VAR_6);
 FUNC_2(&VAR_6->dev, VAR_7);

 VAR_6->mode = VAR_3 | VAR_4;
 VAR_6->bits_per_word = 8;
 VAR_9 = FUNC_8(VAR_6);
 if (VAR_9) {
  FUNC_1(&VAR_6->dev, "spi_setup failed, err=%d\n", VAR_9);
  goto err_drvdata;
 }

 VAR_9 = FUNC_6(VAR_7, VAR_8->gpio_base);
 if (VAR_9)
  goto err_drvdata;

 VAR_5 = VAR_7;

 return 0;

err_drvdata:
 FUNC_2(&VAR_6->dev, ((void*)0));
 FUNC_3(VAR_7);

 return VAR_9;
}
