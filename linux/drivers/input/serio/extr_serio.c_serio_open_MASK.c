
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serio_driver {int dummy; } ;
struct serio {scalar_t__ (* open ) (struct serio*) ;} ;


 int FUNC_0 (struct serio*,struct serio_driver*) ;
 scalar_t__ FUNC_1 (struct serio*) ;

int FUNC_2(struct serio *VAR_0, struct serio_driver *VAR_1)
{
 FUNC_0(VAR_0, VAR_1);

 if (VAR_0->open && VAR_0->open(VAR_0)) {
  FUNC_0(VAR_0, ((void*)0));
  return -1;
 }
 return 0;
}
