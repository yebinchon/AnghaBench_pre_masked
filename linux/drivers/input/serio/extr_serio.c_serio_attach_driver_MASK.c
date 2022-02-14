
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; } ;
struct serio_driver {TYPE_1__ driver; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct serio_driver *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_0(&VAR_0->driver);
 if (VAR_1)
  FUNC_1("driver_attach() failed for %s with error %d\n",
   VAR_0->driver.name, VAR_1);
}
