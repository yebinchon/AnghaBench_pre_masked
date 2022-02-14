
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device {int dummy; } ;
struct spi_device {struct device dev; } ;
struct drm_device {int dummy; } ;
struct mipi_dbi {struct gpio_desc* reset; } ;
struct mipi_dbi_dev {struct gpio_desc* backlight; struct gpio_desc* regulator; struct drm_device drm; struct mipi_dbi dbi; } ;
struct gpio_desc {int dummy; } ;


 int FUNC_0 (struct device*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct gpio_desc*) ;
 int FUNC_2 (struct gpio_desc*) ;
 int FUNC_3 (struct device*,char*,int *) ;
 int FUNC_4 (struct device*,struct drm_device*,int *) ;
 void* FUNC_5 (struct device*,char*,int ) ;
 struct gpio_desc* FUNC_6 (struct device*) ;
 struct gpio_desc* FUNC_7 (struct device*,char*) ;
 int FUNC_8 (struct drm_device*,int ) ;
 int FUNC_9 (struct drm_device*,int ) ;
 int FUNC_10 (struct drm_device*) ;
 int FUNC_11 (struct drm_device*) ;
 int FUNC_12 (struct mipi_dbi_dev*) ;
 struct mipi_dbi_dev* FUNC_13 (int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_14 (struct mipi_dbi_dev*,int *,int *,int ) ;
 int FUNC_15 (struct spi_device*,struct mipi_dbi*,struct gpio_desc*) ;
 int FUNC_16 (struct spi_device*,struct drm_device*) ;

__attribute__((used)) static int FUNC_17(struct spi_device *VAR_7)
{
 struct device *VAR_8 = &VAR_7->dev;
 struct mipi_dbi_dev *VAR_9;
 struct drm_device *VAR_10;
 struct mipi_dbi *VAR_11;
 struct gpio_desc *VAR_12;
 u32 VAR_13 = 0;
 int VAR_14;

 VAR_9 = FUNC_13(sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_11 = &VAR_9->dbi;
 VAR_10 = &VAR_9->drm;
 VAR_14 = FUNC_4(VAR_8, VAR_10, &VAR_4);
 if (VAR_14) {
  FUNC_12(VAR_9);
  return VAR_14;
 }

 FUNC_10(VAR_10);

 VAR_11->reset = FUNC_5(VAR_8, "reset", VAR_2);
 if (FUNC_1(VAR_11->reset)) {
  FUNC_0(VAR_8, "Failed to get gpio 'reset'\n");
  return FUNC_2(VAR_11->reset);
 }

 VAR_12 = FUNC_5(VAR_8, "dc", VAR_3);
 if (FUNC_1(VAR_12)) {
  FUNC_0(VAR_8, "Failed to get gpio 'dc'\n");
  return FUNC_2(VAR_12);
 }

 VAR_9->regulator = FUNC_7(VAR_8, "power");
 if (FUNC_1(VAR_9->regulator))
  return FUNC_2(VAR_9->regulator);

 VAR_9->backlight = FUNC_6(VAR_8);
 if (FUNC_1(VAR_9->backlight))
  return FUNC_2(VAR_9->backlight);

 FUNC_3(VAR_8, "rotation", &VAR_13);

 VAR_14 = FUNC_15(VAR_7, VAR_11, VAR_12);
 if (VAR_14)
  return VAR_14;

 VAR_14 = FUNC_14(VAR_9, &VAR_6, &VAR_5, VAR_13);
 if (VAR_14)
  return VAR_14;

 FUNC_11(VAR_10);

 VAR_14 = FUNC_8(VAR_10, 0);
 if (VAR_14)
  return VAR_14;

 FUNC_16(VAR_7, VAR_10);

 FUNC_9(VAR_10, 0);

 return 0;
}
