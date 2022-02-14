
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct i2c_mux_core {int parent; } ;
struct i2c_arbitrator_data {int slew_delay_us; int wait_retry_us; int wait_free_us; struct gpio_desc* their_gpio; struct gpio_desc* our_gpio; } ;
struct gpio_desc {int dummy; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct gpio_desc*) ;
 int FUNC_1 (struct gpio_desc*) ;
 int FUNC_2 (struct device*,char*,...) ;
 scalar_t__ FUNC_3 (struct device*) ;
 void* FUNC_4 (struct device*,char*,int ) ;
 struct gpio_desc* FUNC_5 (struct device*,char*,int,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (struct i2c_mux_core*,int ,int ,int ) ;
 struct i2c_mux_core* FUNC_7 (int *,struct device*,int,int,int ,int ,int ) ;
 struct i2c_arbitrator_data* FUNC_8 (struct i2c_mux_core*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct device_node*) ;
 int FUNC_11 (struct device_node*) ;
 struct device_node* FUNC_12 (struct device_node*,char*,int ) ;
 scalar_t__ FUNC_13 (struct device_node*,char*,int*) ;
 int FUNC_14 (struct platform_device*,struct i2c_mux_core*) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_9)
{
 struct device *VAR_10 = &VAR_9->dev;
 struct device_node *VAR_11 = VAR_10->of_node;
 struct device_node *VAR_12;
 struct i2c_mux_core *VAR_13;
 struct i2c_arbitrator_data *VAR_14;
 struct gpio_desc *VAR_15;
 int VAR_16;


 if (!VAR_11) {
  FUNC_2(VAR_10, "Cannot find device tree node\n");
  return -VAR_1;
 }
 if (FUNC_3(VAR_10)) {
  FUNC_2(VAR_10, "Platform data is not supported\n");
  return -VAR_0;
 }

 VAR_13 = FUNC_7(((void*)0), VAR_10, 1, sizeof(*VAR_14), VAR_6,
        VAR_8, VAR_7);
 if (!VAR_13)
  return -VAR_2;
 VAR_14 = FUNC_8(VAR_13);

 FUNC_14(VAR_9, VAR_13);


 VAR_14->our_gpio = FUNC_4(VAR_10, "our-claim", VAR_5);
 if (FUNC_0(VAR_14->our_gpio)) {
  FUNC_2(VAR_10, "could not get \"our-claim\" GPIO (%ld)\n",
   FUNC_1(VAR_14->our_gpio));
  return FUNC_1(VAR_14->our_gpio);
 }

 VAR_14->their_gpio = FUNC_4(VAR_10, "their-claim", VAR_4);
 if (FUNC_0(VAR_14->their_gpio)) {
  FUNC_2(VAR_10, "could not get \"their-claim\" GPIO (%ld)\n",
   FUNC_1(VAR_14->their_gpio));
  return FUNC_1(VAR_14->their_gpio);
 }


 VAR_15 = FUNC_5(VAR_10, "their-claim", 1, VAR_4);
 if (!FUNC_0(VAR_15)) {
  FUNC_2(VAR_10, "Only one other master is supported\n");
  return -VAR_0;
 } else if (FUNC_1(VAR_15) == -VAR_3) {
  return -VAR_3;
 }


 if (FUNC_13(VAR_11, "slew-delay-us", &VAR_14->slew_delay_us))
  VAR_14->slew_delay_us = 10;
 if (FUNC_13(VAR_11, "wait-retry-us", &VAR_14->wait_retry_us))
  VAR_14->wait_retry_us = 3000;
 if (FUNC_13(VAR_11, "wait-free-us", &VAR_14->wait_free_us))
  VAR_14->wait_free_us = 50000;


 VAR_12 = FUNC_12(VAR_11, "i2c-parent", 0);
 if (!VAR_12) {
  FUNC_2(VAR_10, "Cannot parse i2c-parent\n");
  return -VAR_0;
 }
 VAR_13->parent = FUNC_10(VAR_12);
 FUNC_11(VAR_12);
 if (!VAR_13->parent) {
  FUNC_2(VAR_10, "Cannot find parent bus\n");
  return -VAR_3;
 }


 VAR_16 = FUNC_6(VAR_13, 0, 0, 0);
 if (VAR_16)
  FUNC_9(VAR_13->parent);

 return VAR_16;
}
