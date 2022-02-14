
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct tilcdc_module {int dummy; } ;
struct tfp410_module {scalar_t__ gpio; int i2c; struct tilcdc_module base; } ;
struct TYPE_5__ {struct tilcdc_module* platform_data; struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct pinctrl {int dummy; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct pinctrl*) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 struct tfp410_module* FUNC_3 (TYPE_1__*,int,int ) ;
 struct pinctrl* FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (scalar_t__,char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct device_node*) ;
 struct device_node* FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (struct device_node*,char*,int ,int *) ;
 int FUNC_10 (struct device_node*) ;
 scalar_t__ FUNC_11 (struct device_node*,char*,int *) ;
 int VAR_4 ;
 int FUNC_12 (struct tilcdc_module*) ;
 int FUNC_13 (struct tilcdc_module*,char*,int *) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_5)
{
 struct device_node *VAR_6 = VAR_5->dev.of_node;
 struct device_node *VAR_7;
 struct tfp410_module *VAR_8;
 struct tilcdc_module *VAR_9;
 struct pinctrl *VAR_10;
 uint32_t VAR_11;
 int VAR_12 = -VAR_0;


 if (!VAR_6) {
  FUNC_1(&VAR_5->dev, "device-tree data is missing\n");
  return -VAR_2;
 }

 VAR_8 = FUNC_3(&VAR_5->dev, sizeof(*VAR_8), VAR_3);
 if (!VAR_8)
  return -VAR_1;

 VAR_9 = &VAR_8->base;
 VAR_5->dev.platform_data = VAR_9;

 FUNC_13(VAR_9, "tfp410", &VAR_4);

 VAR_10 = FUNC_4(&VAR_5->dev);
 if (FUNC_0(VAR_10))
  FUNC_2(&VAR_5->dev, "pins are not configured\n");

 if (FUNC_11(VAR_6, "i2c", &VAR_11)) {
  FUNC_1(&VAR_5->dev, "could not get i2c bus phandle\n");
  goto fail;
 }

 VAR_7 = FUNC_8(VAR_11);
 if (!VAR_7) {
  FUNC_1(&VAR_5->dev, "could not get i2c bus node\n");
  goto fail;
 }

 VAR_8->i2c = FUNC_7(VAR_7);
 if (!VAR_8->i2c) {
  FUNC_1(&VAR_5->dev, "could not get i2c\n");
  FUNC_10(VAR_7);
  goto fail;
 }

 FUNC_10(VAR_7);

 VAR_8->gpio = FUNC_9(VAR_6, "powerdn-gpio",
   0, ((void*)0));
 if (VAR_8->gpio < 0) {
  FUNC_2(&VAR_5->dev, "No power down GPIO\n");
 } else {
  VAR_12 = FUNC_5(VAR_8->gpio, "DVI_PDn");
  if (VAR_12) {
   FUNC_1(&VAR_5->dev, "could not get DVI_PDn gpio\n");
   goto fail_adapter;
  }
 }

 return 0;

fail_adapter:
 FUNC_6(VAR_8->i2c);

fail:
 FUNC_12(VAR_9);
 return VAR_12;
}
