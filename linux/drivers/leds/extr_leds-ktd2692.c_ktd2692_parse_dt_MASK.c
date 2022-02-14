
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ktd2692_led_config_data {int flash_max_timeout; int flash_max_microamp; int movie_max_microamp; } ;
struct TYPE_3__ {int name; } ;
struct TYPE_4__ {TYPE_1__ led_cdev; } ;
struct ktd2692_context {TYPE_2__ fled_cdev; int * regulator; void* aux_gpio; void* ctrl_gpio; } ;
struct device_node {int name; } ;
struct device {struct device_node* of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (struct device*,char*,...) ;
 void* FUNC_3 (struct device*,char*,int ) ;
 int * FUNC_4 (struct device*,char*) ;
 struct device_node* FUNC_5 (struct device_node*,int *) ;
 scalar_t__ FUNC_6 (struct device_node*,char*,int *) ;
 int FUNC_7 (struct device_node*) ;
 int FUNC_8 (struct device_node*,char*,int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct ktd2692_context *VAR_3, struct device *VAR_4,
       struct ktd2692_led_config_data *VAR_5)
{
 struct device_node *VAR_6 = VAR_4->of_node;
 struct device_node *VAR_7;
 int VAR_8;

 if (!VAR_4->of_node)
  return -VAR_1;

 VAR_3->ctrl_gpio = FUNC_3(VAR_4, "ctrl", VAR_2);
 VAR_8 = FUNC_1(VAR_3->ctrl_gpio);
 if (VAR_8) {
  FUNC_2(VAR_4, "cannot get ctrl-gpios %d\n", VAR_8);
  return VAR_8;
 }

 VAR_3->aux_gpio = FUNC_3(VAR_4, "aux", VAR_2);
 VAR_8 = FUNC_1(VAR_3->aux_gpio);
 if (VAR_8) {
  FUNC_2(VAR_4, "cannot get aux-gpios %d\n", VAR_8);
  return VAR_8;
 }

 VAR_3->regulator = FUNC_4(VAR_4, "vin");
 if (FUNC_0(VAR_3->regulator))
  VAR_3->regulator = ((void*)0);

 if (VAR_3->regulator) {
  VAR_8 = FUNC_9(VAR_3->regulator);
  if (VAR_8)
   FUNC_2(VAR_4, "Failed to enable supply: %d\n", VAR_8);
 }

 VAR_7 = FUNC_5(VAR_6, ((void*)0));
 if (!VAR_7) {
  FUNC_2(VAR_4, "No DT child node found for connected LED.\n");
  return -VAR_0;
 }

 VAR_3->fled_cdev.led_cdev.name =
  FUNC_6(VAR_7, "label", ((void*)0)) ? : VAR_7->name;

 VAR_8 = FUNC_8(VAR_7, "led-max-microamp",
       &VAR_5->movie_max_microamp);
 if (VAR_8) {
  FUNC_2(VAR_4, "failed to parse led-max-microamp\n");
  goto err_parse_dt;
 }

 VAR_8 = FUNC_8(VAR_7, "flash-max-microamp",
       &VAR_5->flash_max_microamp);
 if (VAR_8) {
  FUNC_2(VAR_4, "failed to parse flash-max-microamp\n");
  goto err_parse_dt;
 }

 VAR_8 = FUNC_8(VAR_7, "flash-max-timeout-us",
       &VAR_5->flash_max_timeout);
 if (VAR_8) {
  FUNC_2(VAR_4, "failed to parse flash-max-timeout-us\n");
  goto err_parse_dt;
 }

err_parse_dt:
 FUNC_7(VAR_7);
 return VAR_8;
}
