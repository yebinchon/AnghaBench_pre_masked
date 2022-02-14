
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * funcs; TYPE_3__* dev; } ;
struct td043mtea1_panel {TYPE_1__ panel; struct spi_device* spi; int reset_gpio; int vcc_reg; int gamma; int mode; } ;
struct TYPE_8__ {int kobj; } ;
struct spi_device {int bits_per_word; TYPE_3__ dev; int mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_3__*,char*,...) ;
 int FUNC_3 (TYPE_3__*,char*,int ) ;
 struct td043mtea1_panel* FUNC_4 (TYPE_3__*,int,int ) ;
 int FUNC_5 (TYPE_3__*,char*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (struct spi_device*,struct td043mtea1_panel*) ;
 int FUNC_10 (struct spi_device*) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_13(struct spi_device *VAR_8)
{
 struct td043mtea1_panel *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_4(&VAR_8->dev, sizeof(*VAR_9), VAR_1);
 if (VAR_9 == ((void*)0))
  return -VAR_0;

 FUNC_9(VAR_8, VAR_9);
 VAR_9->spi = VAR_8;
 VAR_9->mode = VAR_4;
 FUNC_8(VAR_9->gamma, VAR_6, sizeof(VAR_9->gamma));

 VAR_9->vcc_reg = FUNC_5(&VAR_8->dev, "vcc");
 if (FUNC_0(VAR_9->vcc_reg)) {
  FUNC_2(&VAR_8->dev, "failed to get VCC regulator\n");
  return FUNC_1(VAR_9->vcc_reg);
 }

 VAR_9->reset_gpio = FUNC_3(&VAR_8->dev, "reset", VAR_2);
 if (FUNC_0(VAR_9->reset_gpio)) {
  FUNC_2(&VAR_8->dev, "failed to get reset GPIO\n");
  return FUNC_1(VAR_9->reset_gpio);
 }

 VAR_8->bits_per_word = 16;
 VAR_8->mode = VAR_3;

 VAR_10 = FUNC_10(VAR_8);
 if (VAR_10 < 0) {
  FUNC_2(&VAR_8->dev, "failed to setup SPI: %d\n", VAR_10);
  return VAR_10;
 }

 VAR_10 = FUNC_11(&VAR_8->dev.kobj, &VAR_5);
 if (VAR_10 < 0) {
  FUNC_2(&VAR_8->dev, "failed to create sysfs files\n");
  return VAR_10;
 }

 FUNC_7(&VAR_9->panel);
 VAR_9->panel.dev = &VAR_9->spi->dev;
 VAR_9->panel.funcs = &VAR_7;

 VAR_10 = FUNC_6(&VAR_9->panel);
 if (VAR_10 < 0) {
  FUNC_12(&VAR_8->dev.kobj, &VAR_5);
  return VAR_10;
 }

 return 0;
}
