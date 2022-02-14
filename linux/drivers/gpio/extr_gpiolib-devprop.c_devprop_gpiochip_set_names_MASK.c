
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gpio_device {int ngpio; TYPE_1__* descs; int dev; } ;
struct gpio_chip {struct gpio_device* gpiodev; } ;
struct fwnode_handle {int dummy; } ;
struct TYPE_2__ {char const* name; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct fwnode_handle const*,char*,char const**,int) ;
 char** FUNC_2 (int,int,int ) ;
 int FUNC_3 (char const**) ;

void FUNC_4(struct gpio_chip *VAR_1,
    const struct fwnode_handle *VAR_2)
{
 struct gpio_device *VAR_3 = VAR_1->gpiodev;
 const char **VAR_4;
 int VAR_5, VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_2, "gpio-line-names",
        ((void*)0), 0);
 if (VAR_7 < 0)
  return;

 if (VAR_7 > VAR_3->ngpio)
  VAR_7 = VAR_3->ngpio;

 VAR_4 = FUNC_2(VAR_7, sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return;

 VAR_5 = FUNC_1(VAR_2, "gpio-line-names",
      VAR_4, VAR_7);
 if (VAR_5 < 0) {
  FUNC_0(&VAR_3->dev, "failed to read GPIO line names\n");
  FUNC_3(VAR_4);
  return;
 }

 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++)
  VAR_3->descs[VAR_6].name = VAR_4[VAR_6];

 FUNC_3(VAR_4);
}
