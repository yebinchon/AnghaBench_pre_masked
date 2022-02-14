
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct gameport_driver {int (* disconnect ) (struct gameport*) ;int description; scalar_t__ (* connect ) (struct gameport*,struct gameport_driver*) ;int driver; } ;
struct TYPE_3__ {int * driver; } ;
struct gameport {TYPE_1__ dev; int name; int phys; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*,int ,int ,int ,int) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (struct gameport*,struct gameport_driver*) ;
 int FUNC_3 (struct gameport*) ;

__attribute__((used)) static int FUNC_4(struct gameport *VAR_1, struct gameport_driver *VAR_2)
{
 int VAR_3;

 VAR_1->dev.driver = &VAR_2->driver;
 if (VAR_2->connect(VAR_1, VAR_2)) {
  VAR_1->dev.driver = ((void*)0);
  return -VAR_0;
 }

 VAR_3 = FUNC_1(&VAR_1->dev);
 if (VAR_3) {
  FUNC_0(&VAR_1->dev,
    "device_bind_driver() failed for %s (%s) and %s, error: %d\n",
   VAR_1->phys, VAR_1->name,
   VAR_2->description, VAR_3);
  VAR_2->disconnect(VAR_1);
  VAR_1->dev.driver = ((void*)0);
  return VAR_3;
 }

 return 0;
}
