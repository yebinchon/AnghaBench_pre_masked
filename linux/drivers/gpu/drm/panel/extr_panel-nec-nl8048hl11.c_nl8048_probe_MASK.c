
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct spi_device {int bits_per_word; int dev; int mode; } ;
struct TYPE_3__ {int * funcs; int * dev; } ;
struct nl8048_panel {TYPE_1__ panel; struct spi_device* spi; int reset_gpio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,char*,int ) ;
 struct nl8048_panel* FUNC_4 (int *,int,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_4 ;
 int FUNC_7 (struct nl8048_panel*) ;
 int FUNC_8 (struct spi_device*,struct nl8048_panel*) ;
 int FUNC_9 (struct spi_device*) ;

__attribute__((used)) static int FUNC_10(struct spi_device *VAR_5)
{
 struct nl8048_panel *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_4(&VAR_5->dev, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 FUNC_8(VAR_5, VAR_6);
 VAR_6->spi = VAR_5;

 VAR_6->reset_gpio = FUNC_3(&VAR_5->dev, "reset", VAR_2);
 if (FUNC_0(VAR_6->reset_gpio)) {
  FUNC_2(&VAR_5->dev, "failed to parse reset gpio\n");
  return FUNC_1(VAR_6->reset_gpio);
 }

 VAR_5->mode = VAR_3;
 VAR_5->bits_per_word = 32;

 VAR_7 = FUNC_9(VAR_5);
 if (VAR_7 < 0) {
  FUNC_2(&VAR_5->dev, "failed to setup SPI: %d\n", VAR_7);
  return VAR_7;
 }

 VAR_7 = FUNC_7(VAR_6);
 if (VAR_7 < 0)
  return VAR_7;

 FUNC_6(&VAR_6->panel);
 VAR_6->panel.dev = &VAR_6->spi->dev;
 VAR_6->panel.funcs = &VAR_4;

 return FUNC_5(&VAR_6->panel);
}
