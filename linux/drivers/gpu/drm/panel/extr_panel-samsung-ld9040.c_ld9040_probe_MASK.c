
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct device {int dummy; } ;
struct spi_device {int bits_per_word; struct device dev; } ;
struct TYPE_7__ {int * funcs; struct device* dev; } ;
struct ld9040 {TYPE_2__ panel; int reset_gpio; TYPE_1__* supplies; scalar_t__ brightness; struct device* dev; } ;
struct TYPE_6__ {char* supply; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device*,char*,...) ;
 int FUNC_4 (struct device*,char*,int ) ;
 struct ld9040* FUNC_5 (struct device*,int,int ) ;
 int FUNC_6 (struct device*,int ,TYPE_1__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_9 (struct ld9040*) ;
 int FUNC_10 (struct spi_device*,struct ld9040*) ;
 int FUNC_11 (struct spi_device*) ;

__attribute__((used)) static int FUNC_12(struct spi_device *VAR_5)
{
 struct device *VAR_6 = &VAR_5->dev;
 struct ld9040 *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_5(VAR_6, sizeof(struct ld9040), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 FUNC_10(VAR_5, VAR_7);

 VAR_7->dev = VAR_6;
 VAR_7->brightness = FUNC_0(VAR_4) - 1;

 VAR_8 = FUNC_9(VAR_7);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_7->supplies[0].supply = "vdd3";
 VAR_7->supplies[1].supply = "vci";
 VAR_8 = FUNC_6(VAR_6, FUNC_0(VAR_7->supplies),
          VAR_7->supplies);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_7->reset_gpio = FUNC_4(VAR_6, "reset", VAR_2);
 if (FUNC_1(VAR_7->reset_gpio)) {
  FUNC_3(VAR_6, "cannot get reset-gpios %ld\n",
   FUNC_2(VAR_7->reset_gpio));
  return FUNC_2(VAR_7->reset_gpio);
 }

 VAR_5->bits_per_word = 9;
 VAR_8 = FUNC_11(VAR_5);
 if (VAR_8 < 0) {
  FUNC_3(VAR_6, "spi setup failed.\n");
  return VAR_8;
 }

 FUNC_8(&VAR_7->panel);
 VAR_7->panel.dev = VAR_6;
 VAR_7->panel.funcs = &VAR_3;

 return FUNC_7(&VAR_7->panel);
}
