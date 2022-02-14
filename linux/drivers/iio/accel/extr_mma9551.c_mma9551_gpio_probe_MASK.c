
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mma9551_data {int* irqs; TYPE_1__* client; } ;
struct iio_dev {int dummy; } ;
struct gpio_desc {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct gpio_desc*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct gpio_desc*) ;
 int FUNC_2 (struct gpio_desc*) ;
 int FUNC_3 (struct device*,char*,int ,int) ;
 int FUNC_4 (struct device*,char*,...) ;
 struct gpio_desc* FUNC_5 (struct device*,int *,int,int ) ;
 int FUNC_6 (struct device*,int,int *,int ,int,int ,struct iio_dev*) ;
 int FUNC_7 (struct gpio_desc*) ;
 struct mma9551_data* FUNC_8 (struct iio_dev*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_9(struct iio_dev *VAR_6)
{
 struct gpio_desc *VAR_7;
 int VAR_8, VAR_9;
 struct mma9551_data *VAR_10 = FUNC_8(VAR_6);
 struct device *VAR_11 = &VAR_10->client->dev;

 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
  VAR_7 = FUNC_5(VAR_11, ((void*)0), VAR_8, VAR_0);
  if (FUNC_0(VAR_7)) {
   FUNC_4(VAR_11, "acpi gpio get index failed\n");
   return FUNC_1(VAR_7);
  }

  VAR_9 = FUNC_7(VAR_7);
  if (VAR_9 < 0)
   return VAR_9;

  VAR_10->irqs[VAR_8] = VAR_9;
  VAR_9 = FUNC_6(VAR_11, VAR_10->irqs[VAR_8],
    ((void*)0), VAR_5,
    VAR_2 | VAR_1,
    VAR_4, VAR_6);
  if (VAR_9 < 0) {
   FUNC_4(VAR_11, "request irq %d failed\n", VAR_10->irqs[VAR_8]);
   return VAR_9;
  }

  FUNC_3(VAR_11, "gpio resource, no:%d irq:%d\n",
   FUNC_2(VAR_7), VAR_10->irqs[VAR_8]);
 }

 return 0;
}
