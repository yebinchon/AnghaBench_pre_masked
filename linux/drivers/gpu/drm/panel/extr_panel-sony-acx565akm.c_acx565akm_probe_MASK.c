
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct spi_device {int dev; int mode; } ;
struct TYPE_3__ {int * funcs; int * dev; } ;
struct acx565akm_panel {scalar_t__ has_bc; TYPE_1__ panel; struct spi_device* spi; int reset_gpio; int mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (struct acx565akm_panel*) ;
 int FUNC_3 (struct acx565akm_panel*) ;
 int FUNC_4 (struct acx565akm_panel*) ;
 int VAR_4 ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,char*,int ) ;
 struct acx565akm_panel* FUNC_7 (int *,int,int ) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct spi_device*,struct acx565akm_panel*) ;

__attribute__((used)) static int FUNC_12(struct spi_device *VAR_5)
{
 struct acx565akm_panel *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_7(&VAR_5->dev, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 FUNC_11(VAR_5, VAR_6);
 VAR_5->mode = VAR_3;

 VAR_6->spi = VAR_5;
 FUNC_10(&VAR_6->mutex);

 VAR_6->reset_gpio = FUNC_6(&VAR_5->dev, "reset", VAR_2);
 if (FUNC_0(VAR_6->reset_gpio)) {
  FUNC_5(&VAR_5->dev, "failed to get reset GPIO\n");
  return FUNC_1(VAR_6->reset_gpio);
 }

 VAR_7 = FUNC_4(VAR_6);
 if (VAR_7 < 0) {
  FUNC_5(&VAR_5->dev, "panel detection failed\n");
  return VAR_7;
 }

 if (VAR_6->has_bc) {
  VAR_7 = FUNC_3(VAR_6);
  if (VAR_7 < 0)
   return VAR_7;
 }

 FUNC_9(&VAR_6->panel);
 VAR_6->panel.dev = &VAR_6->spi->dev;
 VAR_6->panel.funcs = &VAR_4;

 VAR_7 = FUNC_8(&VAR_6->panel);
 if (VAR_7 < 0) {
  if (VAR_6->has_bc)
   FUNC_2(VAR_6);
  return VAR_7;
 }

 return 0;
}
