
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gpio_device {TYPE_1__* descs; int dev; } ;
struct gpio_desc {int dummy; } ;
struct gpio_chip {int ngpio; int * names; struct gpio_device* gpiodev; } ;
struct TYPE_2__ {int name; } ;


 int FUNC_0 (int *,char*,int ) ;
 struct gpio_desc* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct gpio_chip *VAR_0)
{
 struct gpio_device *VAR_1 = VAR_0->gpiodev;
 int VAR_2;

 if (!VAR_0->names)
  return 0;


 for (VAR_2 = 0; VAR_2 != VAR_0->ngpio; ++VAR_2) {
  struct gpio_desc *VAR_3;

  VAR_3 = FUNC_1(VAR_0->names[VAR_2]);
  if (VAR_3)
   FUNC_0(&VAR_1->dev,
     "Detected name collision for GPIO name '%s'\n",
     VAR_0->names[VAR_2]);
 }


 for (VAR_2 = 0; VAR_2 != VAR_0->ngpio; ++VAR_2)
  VAR_1->descs[VAR_2].name = VAR_0->names[VAR_2];

 return 0;
}
