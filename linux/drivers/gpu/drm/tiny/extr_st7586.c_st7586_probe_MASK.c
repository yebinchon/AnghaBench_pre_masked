
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct device {int dummy; } ;
struct spi_device {struct device dev; } ;
struct drm_device {int dummy; } ;
struct mipi_dbi {int swap_bytes; int * read_commands; struct gpio_desc* reset; } ;
struct mipi_dbi_dev {struct drm_device drm; struct mipi_dbi dbi; } ;
struct gpio_desc {int dummy; } ;
struct TYPE_3__ {int vdisplay; int hdisplay; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct device*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct gpio_desc*) ;
 int FUNC_3 (struct gpio_desc*) ;
 int FUNC_4 (struct device*,char*,int *) ;
 int FUNC_5 (struct device*,struct drm_device*,int *) ;
 void* FUNC_6 (struct device*,char*,int ) ;
 int FUNC_7 (struct drm_device*,int ) ;
 int FUNC_8 (struct drm_device*,int ) ;
 int FUNC_9 (struct drm_device*) ;
 int FUNC_10 (struct drm_device*) ;
 int FUNC_11 (struct mipi_dbi_dev*) ;
 struct mipi_dbi_dev* FUNC_12 (int,int ) ;
 int FUNC_13 (struct mipi_dbi_dev*,int *,int ,int ,TYPE_1__*,int ,size_t) ;
 int FUNC_14 (struct spi_device*,struct mipi_dbi*,struct gpio_desc*) ;
 int FUNC_15 (struct spi_device*,struct drm_device*) ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_16(struct spi_device *VAR_8)
{
 struct device *VAR_9 = &VAR_8->dev;
 struct mipi_dbi_dev *VAR_10;
 struct drm_device *VAR_11;
 struct mipi_dbi *VAR_12;
 struct gpio_desc *VAR_13;
 u32 VAR_14 = 0;
 size_t VAR_15;
 int VAR_16;

 VAR_10 = FUNC_12(sizeof(*VAR_10), VAR_1);
 if (!VAR_10)
  return -VAR_0;

 VAR_12 = &VAR_10->dbi;
 VAR_11 = &VAR_10->drm;
 VAR_16 = FUNC_5(VAR_9, VAR_11, &VAR_4);
 if (VAR_16) {
  FUNC_11(VAR_10);
  return VAR_16;
 }

 FUNC_9(VAR_11);

 VAR_15 = (VAR_6.vdisplay + 2) / 3 * VAR_6.hdisplay;

 VAR_12->reset = FUNC_6(VAR_9, "reset", VAR_2);
 if (FUNC_2(VAR_12->reset)) {
  FUNC_1(VAR_9, "Failed to get gpio 'reset'\n");
  return FUNC_3(VAR_12->reset);
 }

 VAR_13 = FUNC_6(VAR_9, "a0", VAR_3);
 if (FUNC_2(VAR_13)) {
  FUNC_1(VAR_9, "Failed to get gpio 'a0'\n");
  return FUNC_3(VAR_13);
 }

 FUNC_4(VAR_9, "rotation", &VAR_14);

 VAR_16 = FUNC_14(VAR_8, VAR_12, VAR_13);
 if (VAR_16)
  return VAR_16;


 VAR_12->read_commands = ((void*)0);

 VAR_16 = FUNC_13(VAR_10, &VAR_7,
          VAR_5, FUNC_0(VAR_5),
          &VAR_6, VAR_14, VAR_15);
 if (VAR_16)
  return VAR_16;
 VAR_12->swap_bytes = 1;

 FUNC_10(VAR_11);

 VAR_16 = FUNC_7(VAR_11, 0);
 if (VAR_16)
  return VAR_16;

 FUNC_15(VAR_8, VAR_11);

 FUNC_8(VAR_11, 0);

 return 0;
}
