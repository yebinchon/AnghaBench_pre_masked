
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct device {int of_node; } ;
struct spi_device {struct device dev; } ;
struct TYPE_5__ {scalar_t__ brightness; scalar_t__ max_brightness; int (* brightness_set_blocking ) (TYPE_2__*,scalar_t__) ;int name; } ;
struct spi_byte_led {int mutex; TYPE_2__ ldev; TYPE_1__* cdef; int name; struct spi_device* spi; } ;
struct of_device_id {TYPE_1__* data; } ;
struct device_node {int dummy; } ;
struct TYPE_4__ {scalar_t__ off_value; scalar_t__ max_value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct device*,char*) ;
 struct spi_byte_led* FUNC_1 (struct device*,int,int ) ;
 int FUNC_2 (struct device*,TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 struct device_node* FUNC_6 (int ,int *) ;
 char* FUNC_7 (struct device_node*,char*,int *) ;
 struct of_device_id* FUNC_8 (int ,struct device*) ;
 int FUNC_9 (struct device_node*,char*,char const**) ;
 int FUNC_10 (TYPE_2__*,scalar_t__) ;
 int VAR_4 ;
 int FUNC_11 (struct spi_device*,struct spi_byte_led*) ;
 scalar_t__ FUNC_12 (char const*,char*) ;
 int FUNC_13 (int ,char const*,int) ;

__attribute__((used)) static int FUNC_14(struct spi_device *VAR_5)
{
 const struct of_device_id *VAR_6;
 struct device_node *VAR_7;
 struct device *VAR_8 = &VAR_5->dev;
 struct spi_byte_led *VAR_9;
 const char *VAR_10 = "leds-spi-byte::";
 const char *VAR_11;
 int VAR_12;

 VAR_6 = FUNC_8(VAR_4, VAR_8);
 if (!VAR_6)
  return -VAR_0;

 if (FUNC_5(VAR_8->of_node) != 1) {
  FUNC_0(VAR_8, "Device must have exactly one LED sub-node.");
  return -VAR_0;
 }
 VAR_7 = FUNC_6(VAR_8->of_node, ((void*)0));

 VAR_9 = FUNC_1(VAR_8, sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_1;

 FUNC_9(VAR_7, "label", &VAR_10);
 FUNC_13(VAR_9->name, VAR_10, sizeof(VAR_9->name));
 VAR_9->spi = VAR_5;
 FUNC_4(&VAR_9->mutex);
 VAR_9->cdef = VAR_6->data;
 VAR_9->ldev.name = VAR_9->name;
 VAR_9->ldev.brightness = VAR_3;
 VAR_9->ldev.max_brightness = VAR_9->cdef->max_value - VAR_9->cdef->off_value;
 VAR_9->ldev.brightness_set_blocking = FUNC_10;

 VAR_11 = FUNC_7(VAR_7, "default-state", ((void*)0));
 if (VAR_11) {
  if (!FUNC_12(VAR_11, "on")) {
   VAR_9->ldev.brightness = VAR_9->ldev.max_brightness;
  } else if (FUNC_12(VAR_11, "off")) {

   FUNC_0(VAR_8, "default-state can only be 'on' or 'off'");
   return -VAR_0;
  }
 }
 FUNC_10(&VAR_9->ldev,
      VAR_9->ldev.brightness);

 VAR_12 = FUNC_2(&VAR_5->dev, &VAR_9->ldev);
 if (VAR_12) {
  FUNC_3(&VAR_9->mutex);
  return VAR_12;
 }
 FUNC_11(VAR_5, VAR_9);

 return 0;
}
