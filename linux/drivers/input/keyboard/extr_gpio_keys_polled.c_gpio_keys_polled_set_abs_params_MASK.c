
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int dummy; } ;
struct gpio_keys_platform_data {int nbuttons; struct gpio_keys_button* buttons; } ;
struct gpio_keys_button {scalar_t__ type; unsigned int code; int value; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct input_dev*,unsigned int,int,int,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct input_dev *VAR_1,
 const struct gpio_keys_platform_data *VAR_2, unsigned int VAR_3)
{
 int VAR_4, VAR_5 = 0, VAR_6 = 0;

 for (VAR_4 = 0; VAR_4 < VAR_2->nbuttons; VAR_4++) {
  const struct gpio_keys_button *VAR_7 = &VAR_2->buttons[VAR_4];

  if (VAR_7->type != VAR_0 || VAR_7->code != VAR_3)
   continue;

  if (VAR_7->value < VAR_5)
   VAR_5 = VAR_7->value;
  if (VAR_7->value > VAR_6)
   VAR_6 = VAR_7->value;
 }

 FUNC_0(VAR_1, VAR_3, VAR_5, VAR_6, 0, 0);
}
