
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lm3601x_led {TYPE_1__* client; int max_flash_timeout; int flash_current_max; int torch_current_max; int led_mode; } ;
struct fwnode_handle {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 struct fwnode_handle* FUNC_2 (int *,struct fwnode_handle*) ;
 int FUNC_3 (struct fwnode_handle*) ;
 int FUNC_4 (struct fwnode_handle*,char*,int *) ;

__attribute__((used)) static int FUNC_5(struct lm3601x_led *VAR_4,
         struct fwnode_handle **VAR_5)
{
 struct fwnode_handle *VAR_6 = ((void*)0);
 int VAR_7 = -VAR_1;

 VAR_6 = FUNC_2(&VAR_4->client->dev, VAR_6);
 if (!VAR_6) {
  FUNC_0(&VAR_4->client->dev, "No LED Child node\n");
  return VAR_7;
 }

 VAR_7 = FUNC_4(VAR_6, "reg", &VAR_4->led_mode);
 if (VAR_7) {
  FUNC_0(&VAR_4->client->dev, "reg DT property missing\n");
  goto out_err;
 }

 if (VAR_4->led_mode > VAR_3 ||
     VAR_4->led_mode < VAR_2) {
  FUNC_1(&VAR_4->client->dev, "Invalid led mode requested\n");
  VAR_7 = -VAR_0;
  goto out_err;
 }

 VAR_7 = FUNC_4(VAR_6, "led-max-microamp",
     &VAR_4->torch_current_max);
 if (VAR_7) {
  FUNC_1(&VAR_4->client->dev,
   "led-max-microamp DT property missing\n");
  goto out_err;
 }

 VAR_7 = FUNC_4(VAR_6, "flash-max-microamp",
    &VAR_4->flash_current_max);
 if (VAR_7) {
  FUNC_1(&VAR_4->client->dev,
    "flash-max-microamp DT property missing\n");
  goto out_err;
 }

 VAR_7 = FUNC_4(VAR_6, "flash-max-timeout-us",
    &VAR_4->max_flash_timeout);
 if (VAR_7) {
  FUNC_1(&VAR_4->client->dev,
    "flash-max-timeout-us DT property missing\n");
  goto out_err;
 }

 *VAR_5 = VAR_6;

out_err:
 FUNC_3(VAR_6);
 return VAR_7;
}
