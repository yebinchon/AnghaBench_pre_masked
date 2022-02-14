
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dev; } ;
struct ads7846_platform_data {scalar_t__ gpio_pendown_debounce; int gpio_pendown; scalar_t__ get_pendown_state; } ;
struct ads7846 {int gpio_pendown; scalar_t__ get_pendown_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,...) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct spi_device *VAR_2,
     struct ads7846 *VAR_3,
     const struct ads7846_platform_data *VAR_4)
{
 int VAR_5;







 if (VAR_4->get_pendown_state) {
  VAR_3->get_pendown_state = VAR_4->get_pendown_state;
 } else if (FUNC_1(VAR_4->gpio_pendown)) {

  VAR_5 = FUNC_2(VAR_4->gpio_pendown, VAR_1,
           "ads7846_pendown");
  if (VAR_5) {
   FUNC_0(&VAR_2->dev,
    "failed to request/setup pendown GPIO%d: %d\n",
    VAR_4->gpio_pendown, VAR_5);
   return VAR_5;
  }

  VAR_3->gpio_pendown = VAR_4->gpio_pendown;

  if (VAR_4->gpio_pendown_debounce)
   FUNC_3(VAR_4->gpio_pendown,
       VAR_4->gpio_pendown_debounce);
 } else {
  FUNC_0(&VAR_2->dev, "no get_pendown_state nor gpio_pendown?\n");
  return -VAR_0;
 }

 return 0;
}
