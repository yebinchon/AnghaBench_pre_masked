
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct spi_device {int bits_per_word; int dev; } ;
struct TYPE_3__ {int * funcs; int * dev; } ;
struct lg4573 {TYPE_1__ panel; struct spi_device* spi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 struct lg4573* FUNC_1 (int *,int,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_4 (struct spi_device*,struct lg4573*) ;
 int FUNC_5 (struct spi_device*) ;

__attribute__((used)) static int FUNC_6(struct spi_device *VAR_3)
{
 struct lg4573 *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_1(&VAR_3->dev, sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_4->spi = VAR_3;

 FUNC_4(VAR_3, VAR_4);
 VAR_3->bits_per_word = 8;

 VAR_5 = FUNC_5(VAR_3);
 if (VAR_5 < 0) {
  FUNC_0(&VAR_3->dev, "SPI setup failed: %d\n", VAR_5);
  return VAR_5;
 }

 FUNC_3(&VAR_4->panel);
 VAR_4->panel.dev = &VAR_3->dev;
 VAR_4->panel.funcs = &VAR_2;

 return FUNC_2(&VAR_4->panel);
}
