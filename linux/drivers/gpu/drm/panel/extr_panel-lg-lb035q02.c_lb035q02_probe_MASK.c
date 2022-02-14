
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct spi_device {int dev; } ;
struct TYPE_3__ {int * funcs; int * dev; } ;
struct lb035q02_device {TYPE_1__ panel; struct spi_device* spi; int enable_gpio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*,int ) ;
 struct lb035q02_device* FUNC_4 (int *,int,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_7 (struct lb035q02_device*) ;
 int FUNC_8 (struct spi_device*,struct lb035q02_device*) ;

__attribute__((used)) static int FUNC_9(struct spi_device *VAR_4)
{
 struct lb035q02_device *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_4(&VAR_4->dev, sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 FUNC_8(VAR_4, VAR_5);
 VAR_5->spi = VAR_4;

 VAR_5->enable_gpio = FUNC_3(&VAR_4->dev, "enable", VAR_2);
 if (FUNC_0(VAR_5->enable_gpio)) {
  FUNC_2(&VAR_4->dev, "failed to parse enable gpio\n");
  return FUNC_1(VAR_5->enable_gpio);
 }

 VAR_6 = FUNC_7(VAR_5);
 if (VAR_6 < 0)
  return VAR_6;

 FUNC_6(&VAR_5->panel);
 VAR_5->panel.dev = &VAR_5->spi->dev;
 VAR_5->panel.funcs = &VAR_3;

 return FUNC_5(&VAR_5->panel);
}
