
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct soc_button_info {int autorepeat; int wakeup; scalar_t__ name; int event_code; int event_type; int acpi_index; } ;
struct platform_device {int dev; } ;
struct gpio_keys_platform_data {int nbuttons; int rep; struct gpio_keys_button* buttons; } ;
struct gpio_keys_button {int gpio; int active_low; int debounce_interval; int wakeup; scalar_t__ desc; int code; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct platform_device* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,struct gpio_keys_platform_data*) ;
 struct gpio_keys_platform_data* FUNC_4 (int *,int,int ) ;
 int FUNC_5 (int) ;
 struct platform_device* FUNC_6 (int *,char*,int ,int *,int ,struct gpio_keys_platform_data*,int) ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static struct platform_device *
FUNC_8(struct platform_device *VAR_4,
    const struct soc_button_info *VAR_5,
    bool VAR_6)
{
 const struct soc_button_info *VAR_7;
 struct platform_device *VAR_8;
 struct gpio_keys_button *VAR_9;
 struct gpio_keys_platform_data *VAR_10;
 int VAR_11 = 0;
 int VAR_12;
 int VAR_13;

 for (VAR_7 = VAR_5; VAR_7->name; VAR_7++)
  if (VAR_7->autorepeat == VAR_6)
   VAR_11++;

 VAR_10 = FUNC_4(&VAR_4->dev,
           sizeof(*VAR_10) +
     sizeof(*VAR_9) * VAR_11,
           VAR_2);
 if (!VAR_10)
  return FUNC_0(-VAR_1);

 VAR_9 = (void *)(VAR_10 + 1);
 VAR_11 = 0;

 for (VAR_7 = VAR_5; VAR_7->name; VAR_7++) {
  if (VAR_7->autorepeat != VAR_6)
   continue;

  VAR_12 = FUNC_7(&VAR_4->dev, VAR_7->acpi_index);
  if (!FUNC_5(VAR_12)) {
   continue;
  }

  VAR_9[VAR_11].type = VAR_7->event_type;
  VAR_9[VAR_11].code = VAR_7->event_code;
  VAR_9[VAR_11].gpio = VAR_12;
  VAR_9[VAR_11].active_low = 1;
  VAR_9[VAR_11].desc = VAR_7->name;
  VAR_9[VAR_11].wakeup = VAR_7->wakeup;

  VAR_9[VAR_11].debounce_interval = 50;
  VAR_11++;
 }

 if (VAR_11 == 0) {
  VAR_13 = -VAR_0;
  goto err_free_mem;
 }

 VAR_10->buttons = VAR_9;
 VAR_10->nbuttons = VAR_11;
 VAR_10->rep = VAR_6;

 VAR_8 = FUNC_6(&VAR_4->dev, "gpio-keys",
            VAR_3, ((void*)0), 0,
            VAR_10,
            sizeof(*VAR_10));
 VAR_13 = FUNC_1(VAR_8);
 if (VAR_13) {
  FUNC_2(&VAR_4->dev,
   "failed registering gpio-keys: %d\n", VAR_13);
  goto err_free_mem;
 }

 return VAR_8;

err_free_mem:
 FUNC_3(&VAR_4->dev, VAR_10);
 return FUNC_0(VAR_13);
}
