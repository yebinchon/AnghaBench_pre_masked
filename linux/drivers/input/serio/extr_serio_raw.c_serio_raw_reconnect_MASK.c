
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serio_raw {int dummy; } ;
struct serio_driver {int dummy; } ;
struct serio {int dev; struct serio_driver* drv; } ;


 int FUNC_0 (int *,char*) ;
 struct serio_raw* FUNC_1 (struct serio*) ;

__attribute__((used)) static int FUNC_2(struct serio *VAR_0)
{
 struct serio_raw *VAR_1 = FUNC_1(VAR_0);
 struct serio_driver *VAR_2 = VAR_0->drv;

 if (!VAR_2 || !VAR_1) {
  FUNC_0(&VAR_0->dev,
   "reconnect request, but serio is disconnected, ignoring...\n");
  return -1;
 }





 return 0;
}
