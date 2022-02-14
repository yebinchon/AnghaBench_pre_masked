
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * funcs; struct device* dev; } ;
struct tpg110 {TYPE_1__ panel; struct spi_device* spi; int grestb; int backlight; int height; int width; struct device* dev; } ;
struct device {struct device_node* of_node; } ;
struct spi_device {int bits_per_word; int mode; struct device dev; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (struct device*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 (struct device*,char*,int ) ;
 struct tpg110* FUNC_4 (struct device*,int,int ) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (struct device_node*,char*,int *) ;
 int FUNC_9 (struct spi_device*,struct tpg110*) ;
 int FUNC_10 (struct spi_device*) ;
 int VAR_5 ;
 int FUNC_11 (struct tpg110*) ;

__attribute__((used)) static int FUNC_12(struct spi_device *VAR_6)
{
 struct device *VAR_7 = &VAR_6->dev;
 struct device_node *VAR_8 = VAR_7->of_node;
 struct tpg110 *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_4(VAR_7, sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_1;
 VAR_9->dev = VAR_7;


 VAR_10 = FUNC_8(VAR_8, "width-mm", &VAR_9->width);
 if (VAR_10)
  FUNC_0(VAR_7, "no panel width specified\n");
 VAR_10 = FUNC_8(VAR_8, "height-mm", &VAR_9->height);
 if (VAR_10)
  FUNC_0(VAR_7, "no panel height specified\n");


 VAR_9->backlight = FUNC_5(VAR_7);
 if (FUNC_1(VAR_9->backlight))
  return FUNC_2(VAR_9->backlight);


 VAR_9->grestb = FUNC_3(VAR_7, "grestb", VAR_3);
 if (FUNC_1(VAR_9->grestb)) {
  FUNC_0(VAR_7, "no GRESTB GPIO\n");
  return -VAR_0;
 }

 VAR_6->bits_per_word = 8;
 VAR_6->mode |= VAR_4;
 VAR_10 = FUNC_10(VAR_6);
 if (VAR_10 < 0) {
  FUNC_0(VAR_7, "spi setup failed.\n");
  return VAR_10;
 }
 VAR_9->spi = VAR_6;

 VAR_10 = FUNC_11(VAR_9);
 if (VAR_10)
  return VAR_10;

 FUNC_7(&VAR_9->panel);
 VAR_9->panel.dev = VAR_7;
 VAR_9->panel.funcs = &VAR_5;
 FUNC_9(VAR_6, VAR_9);

 return FUNC_6(&VAR_9->panel);
}
