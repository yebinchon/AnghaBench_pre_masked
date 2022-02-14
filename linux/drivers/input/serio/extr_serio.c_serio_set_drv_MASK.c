
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serio_driver {int dummy; } ;
struct serio {struct serio_driver* drv; } ;


 int FUNC_0 (struct serio*) ;
 int FUNC_1 (struct serio*) ;

__attribute__((used)) static void FUNC_2(struct serio *VAR_0, struct serio_driver *VAR_1)
{
 FUNC_1(VAR_0);
 VAR_0->drv = VAR_1;
 FUNC_0(VAR_0);
}
