
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * funcs; int * dev; } ;
struct td028ttec1_panel {TYPE_1__ panel; struct spi_device* spi; int backlight; } ;
struct spi_device {int bits_per_word; int dev; int mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int *,char*,int) ;
 struct td028ttec1_panel* FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (struct spi_device*,struct td028ttec1_panel*) ;
 int FUNC_8 (struct spi_device*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_9(struct spi_device *VAR_4)
{
 struct td028ttec1_panel *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_3(&VAR_4->dev, sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 FUNC_7(VAR_4, VAR_5);
 VAR_5->spi = VAR_4;

 VAR_5->backlight = FUNC_4(&VAR_4->dev);
 if (FUNC_0(VAR_5->backlight))
  return FUNC_1(VAR_5->backlight);

 VAR_4->mode = VAR_2;
 VAR_4->bits_per_word = 9;

 VAR_6 = FUNC_8(VAR_4);
 if (VAR_6 < 0) {
  FUNC_2(&VAR_4->dev, "failed to setup SPI: %d\n", VAR_6);
  return VAR_6;
 }

 FUNC_6(&VAR_5->panel);
 VAR_5->panel.dev = &VAR_5->spi->dev;
 VAR_5->panel.funcs = &VAR_3;

 return FUNC_5(&VAR_5->panel);
}
