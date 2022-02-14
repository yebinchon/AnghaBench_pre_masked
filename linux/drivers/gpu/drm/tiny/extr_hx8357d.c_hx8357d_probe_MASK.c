
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device {int dummy; } ;
struct spi_device {struct device dev; } ;
struct drm_device {int dummy; } ;
struct mipi_dbi_dev {int dbi; struct gpio_desc* backlight; struct drm_device drm; } ;
struct gpio_desc {int dummy; } ;


 int FUNC_0 (struct device*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct gpio_desc*) ;
 int FUNC_2 (struct gpio_desc*) ;
 int FUNC_3 (struct device*,char*,int *) ;
 int FUNC_4 (struct device*,struct drm_device*,int *) ;
 struct gpio_desc* FUNC_5 (struct device*,char*,int ) ;
 struct gpio_desc* FUNC_6 (struct device*) ;
 int FUNC_7 (struct drm_device*,int ) ;
 int FUNC_8 (struct drm_device*,int ) ;
 int FUNC_9 (struct drm_device*) ;
 int FUNC_10 (struct drm_device*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_11 (struct mipi_dbi_dev*) ;
 struct mipi_dbi_dev* FUNC_12 (int,int ) ;
 int FUNC_13 (struct mipi_dbi_dev*,int *,int *,int ) ;
 int FUNC_14 (struct spi_device*,int *,struct gpio_desc*) ;
 int FUNC_15 (struct spi_device*,struct drm_device*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_16(struct spi_device *VAR_6)
{
 struct device *VAR_7 = &VAR_6->dev;
 struct mipi_dbi_dev *VAR_8;
 struct drm_device *VAR_9;
 struct gpio_desc *VAR_10;
 u32 VAR_11 = 0;
 int VAR_12;

 VAR_8 = FUNC_12(sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_9 = &VAR_8->drm;
 VAR_12 = FUNC_4(VAR_7, VAR_9, &VAR_3);
 if (VAR_12) {
  FUNC_11(VAR_8);
  return VAR_12;
 }

 FUNC_9(VAR_9);

 VAR_10 = FUNC_5(VAR_7, "dc", VAR_2);
 if (FUNC_1(VAR_10)) {
  FUNC_0(VAR_7, "Failed to get gpio 'dc'\n");
  return FUNC_2(VAR_10);
 }

 VAR_8->backlight = FUNC_6(VAR_7);
 if (FUNC_1(VAR_8->backlight))
  return FUNC_2(VAR_8->backlight);

 FUNC_3(VAR_7, "rotation", &VAR_11);

 VAR_12 = FUNC_14(VAR_6, &VAR_8->dbi, VAR_10);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_13(VAR_8, &VAR_4, &VAR_5, VAR_11);
 if (VAR_12)
  return VAR_12;

 FUNC_10(VAR_9);

 VAR_12 = FUNC_7(VAR_9, 0);
 if (VAR_12)
  return VAR_12;

 FUNC_15(VAR_6, VAR_9);

 FUNC_8(VAR_9, 0);

 return 0;
}
