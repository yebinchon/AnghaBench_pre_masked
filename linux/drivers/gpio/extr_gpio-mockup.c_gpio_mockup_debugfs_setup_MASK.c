
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gpio_mockup_dbgfs_private {int offset; int * desc; struct gpio_mockup_chip* chip; } ;
struct gpio_chip {int ngpio; TYPE_1__* gpiodev; } ;
struct gpio_mockup_chip {int dbg_dir; struct gpio_chip gc; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int * descs; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (char const*,int ) ;
 int FUNC_1 (char*,int,int ,struct gpio_mockup_dbgfs_private*,int *) ;
 char* FUNC_2 (int *) ;
 char* FUNC_3 (struct device*,int ,char*,int) ;
 struct gpio_mockup_dbgfs_private* FUNC_4 (struct device*,int,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_5(struct device *VAR_3,
          struct gpio_mockup_chip *VAR_4)
{
 struct gpio_mockup_dbgfs_private *VAR_5;
 struct gpio_chip *VAR_6;
 const char *VAR_7;
 char *VAR_8;
 int VAR_9;

 VAR_6 = &VAR_4->gc;
 VAR_7 = FUNC_2(&VAR_6->gpiodev->dev);

 VAR_4->dbg_dir = FUNC_0(VAR_7, VAR_1);

 for (VAR_9 = 0; VAR_9 < VAR_6->ngpio; VAR_9++) {
  VAR_8 = FUNC_3(VAR_3, VAR_0, "%d", VAR_9);
  if (!VAR_8)
   return;

  VAR_5 = FUNC_4(VAR_3, sizeof(*VAR_5), VAR_0);
  if (!VAR_5)
   return;

  VAR_5->chip = VAR_4;
  VAR_5->offset = VAR_9;
  VAR_5->desc = &VAR_6->gpiodev->descs[VAR_9];

  FUNC_1(VAR_8, 0200, VAR_4->dbg_dir, VAR_5,
        &VAR_2);
 }

 return;
}
