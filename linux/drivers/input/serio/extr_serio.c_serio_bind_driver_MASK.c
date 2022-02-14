
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct serio_driver {int description; int driver; int id_table; } ;
struct TYPE_3__ {int * driver; } ;
struct serio {TYPE_1__ dev; int name; int phys; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*,int ,int ,int ,int) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (struct serio*,struct serio_driver*) ;
 int FUNC_3 (struct serio*) ;
 scalar_t__ FUNC_4 (int ,struct serio*) ;

__attribute__((used)) static int FUNC_5(struct serio *VAR_1, struct serio_driver *VAR_2)
{
 int VAR_3;

 if (FUNC_4(VAR_2->id_table, VAR_1)) {

  VAR_1->dev.driver = &VAR_2->driver;
  if (FUNC_2(VAR_1, VAR_2)) {
   VAR_1->dev.driver = ((void*)0);
   return -VAR_0;
  }

  VAR_3 = FUNC_1(&VAR_1->dev);
  if (VAR_3) {
   FUNC_0(&VAR_1->dev,
     "device_bind_driver() failed for %s (%s) and %s, error: %d\n",
     VAR_1->phys, VAR_1->name,
     VAR_2->description, VAR_3);
   FUNC_3(VAR_1);
   VAR_1->dev.driver = ((void*)0);
   return VAR_3;
  }
 }
 return 0;
}
