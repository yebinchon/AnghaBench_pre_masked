
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gpio_desc {int dummy; } ;
struct goodix_ts_data {struct gpio_desc* gpiod_rst; struct gpio_desc* gpiod_int; struct gpio_desc* vddio; struct gpio_desc* avdd28; TYPE_1__* client; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct gpio_desc*) ;
 int FUNC_1 (struct gpio_desc*) ;
 int FUNC_2 (struct device*,char*,int ,int) ;
 int FUNC_3 (struct device*,char*,int) ;
 struct gpio_desc* FUNC_4 (struct device*,int ,int ) ;
 void* FUNC_5 (struct device*,char*) ;

__attribute__((used)) static int FUNC_6(struct goodix_ts_data *VAR_5)
{
 int VAR_6;
 struct device *VAR_7;
 struct gpio_desc *VAR_8;

 if (!VAR_5->client)
  return -VAR_0;
 VAR_7 = &VAR_5->client->dev;

 VAR_5->avdd28 = FUNC_5(VAR_7, "AVDD28");
 if (FUNC_0(VAR_5->avdd28)) {
  VAR_6 = FUNC_1(VAR_5->avdd28);
  if (VAR_6 != -VAR_1)
   FUNC_3(VAR_7,
    "Failed to get AVDD28 regulator: %d\n", VAR_6);
  return VAR_6;
 }

 VAR_5->vddio = FUNC_5(VAR_7, "VDDIO");
 if (FUNC_0(VAR_5->vddio)) {
  VAR_6 = FUNC_1(VAR_5->vddio);
  if (VAR_6 != -VAR_1)
   FUNC_3(VAR_7,
    "Failed to get VDDIO regulator: %d\n", VAR_6);
  return VAR_6;
 }


 VAR_8 = FUNC_4(VAR_7, VAR_2, VAR_4);
 if (FUNC_0(VAR_8)) {
  VAR_6 = FUNC_1(VAR_8);
  if (VAR_6 != -VAR_1)
   FUNC_2(VAR_7, "Failed to get %s GPIO: %d\n",
    VAR_2, VAR_6);
  return VAR_6;
 }

 VAR_5->gpiod_int = VAR_8;


 VAR_8 = FUNC_4(VAR_7, VAR_3, VAR_4);
 if (FUNC_0(VAR_8)) {
  VAR_6 = FUNC_1(VAR_8);
  if (VAR_6 != -VAR_1)
   FUNC_2(VAR_7, "Failed to get %s GPIO: %d\n",
    VAR_3, VAR_6);
  return VAR_6;
 }

 VAR_5->gpiod_rst = VAR_8;

 return 0;
}
