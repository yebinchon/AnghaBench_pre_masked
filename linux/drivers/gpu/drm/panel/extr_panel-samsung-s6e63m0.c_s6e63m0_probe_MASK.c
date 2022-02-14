
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct device {int dummy; } ;
struct spi_device {int bits_per_word; int mode; struct device dev; } ;
struct TYPE_5__ {int * funcs; struct device* dev; } ;
struct s6e63m0 {int enabled; int prepared; TYPE_1__ panel; int reset_gpio; TYPE_3__* supplies; struct device* dev; } ;
struct TYPE_6__ {char* supply; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (struct device*,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int FUNC_4 (struct device*,char*,int ) ;
 struct s6e63m0* FUNC_5 (struct device*,int,int ) ;
 int FUNC_6 (struct device*,int ,TYPE_3__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (struct s6e63m0*) ;
 int VAR_4 ;
 int FUNC_10 (struct spi_device*,struct s6e63m0*) ;
 int FUNC_11 (struct spi_device*) ;

__attribute__((used)) static int FUNC_12(struct spi_device *VAR_5)
{
 struct device *VAR_6 = &VAR_5->dev;
 struct s6e63m0 *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_5(VAR_6, sizeof(struct s6e63m0), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 FUNC_10(VAR_5, VAR_7);

 VAR_7->dev = VAR_6;
 VAR_7->enabled = 0;
 VAR_7->prepared = 0;

 VAR_7->supplies[0].supply = "vdd3";
 VAR_7->supplies[1].supply = "vci";
 VAR_8 = FUNC_6(VAR_6, FUNC_0(VAR_7->supplies),
          VAR_7->supplies);
 if (VAR_8 < 0) {
  FUNC_1(VAR_6, "failed to get regulators: %d\n", VAR_8);
  return VAR_8;
 }

 VAR_7->reset_gpio = FUNC_4(VAR_6, "reset", VAR_2);
 if (FUNC_2(VAR_7->reset_gpio)) {
  FUNC_1(VAR_6, "cannot get reset-gpios %ld\n",
         FUNC_3(VAR_7->reset_gpio));
  return FUNC_3(VAR_7->reset_gpio);
 }

 VAR_5->bits_per_word = 9;
 VAR_5->mode = VAR_3;
 VAR_8 = FUNC_11(VAR_5);
 if (VAR_8 < 0) {
  FUNC_1(VAR_6, "spi setup failed.\n");
  return VAR_8;
 }

 FUNC_8(&VAR_7->panel);
 VAR_7->panel.dev = VAR_6;
 VAR_7->panel.funcs = &VAR_4;

 VAR_8 = FUNC_9(VAR_7);
 if (VAR_8 < 0)
  return VAR_8;

 return FUNC_7(&VAR_7->panel);
}
