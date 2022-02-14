
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device {int dummy; } ;
struct spi_device {struct device dev; } ;
struct drm_device {int dummy; } ;
struct mipi_dbi {int command; struct gpio_desc* reset; } ;
struct mipi_dbi_dev {struct drm_device drm; struct mipi_dbi dbi; } ;
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
 int FUNC_6 (struct drm_device*,int ) ;
 int FUNC_7 (struct drm_device*,int ) ;
 int FUNC_8 (struct drm_device*) ;
 int FUNC_9 (struct drm_device*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_10 (struct mipi_dbi_dev*) ;
 struct mipi_dbi_dev* FUNC_11 (int,int ) ;
 int FUNC_12 (struct mipi_dbi_dev*,int *,int *,int ) ;
 int FUNC_13 (struct spi_device*,struct mipi_dbi*,struct gpio_desc*) ;
 int FUNC_14 (struct spi_device*,struct drm_device*) ;

__attribute__((used)) static int FUNC_15(struct spi_device *VAR_8)
{
 struct device *VAR_9 = &VAR_8->dev;
 struct mipi_dbi_dev *VAR_10;
 struct drm_device *VAR_11;
 struct mipi_dbi *VAR_12;
 struct gpio_desc *VAR_13;
 u32 VAR_14 = 0;
 int VAR_15;

 VAR_10 = FUNC_11(sizeof(*VAR_10), VAR_1);
 if (!VAR_10)
  return -VAR_0;

 VAR_12 = &VAR_10->dbi;
 VAR_11 = &VAR_10->drm;
 VAR_15 = FUNC_4(VAR_9, VAR_11, &VAR_5);
 if (VAR_15) {
  FUNC_10(VAR_10);
  return VAR_15;
 }

 FUNC_8(VAR_11);

 VAR_12->reset = FUNC_5(VAR_9, "reset", VAR_2);
 if (FUNC_1(VAR_12->reset)) {
  FUNC_0(VAR_9, "Failed to get gpio 'reset'\n");
  return FUNC_2(VAR_12->reset);
 }

 VAR_13 = FUNC_5(VAR_9, "rs", VAR_3);
 if (FUNC_1(VAR_13)) {
  FUNC_0(VAR_9, "Failed to get gpio 'rs'\n");
  return FUNC_2(VAR_13);
 }

 FUNC_3(VAR_9, "rotation", &VAR_14);

 VAR_15 = FUNC_13(VAR_8, VAR_12, VAR_13);
 if (VAR_15)
  return VAR_15;


 VAR_12->command = VAR_4;

 VAR_15 = FUNC_12(VAR_10, &VAR_7, &VAR_6, VAR_14);
 if (VAR_15)
  return VAR_15;

 FUNC_9(VAR_11);

 VAR_15 = FUNC_6(VAR_11, 0);
 if (VAR_15)
  return VAR_15;

 FUNC_14(VAR_8, VAR_11);

 FUNC_7(VAR_11, 0);

 return 0;
}
