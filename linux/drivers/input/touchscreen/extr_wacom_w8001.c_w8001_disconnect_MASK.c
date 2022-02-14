
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w8001 {scalar_t__ touch_dev; scalar_t__ pen_dev; } ;
struct serio {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct w8001*) ;
 int FUNC_2 (struct serio*) ;
 struct w8001* FUNC_3 (struct serio*) ;
 int FUNC_4 (struct serio*,int *) ;

__attribute__((used)) static void FUNC_5(struct serio *VAR_0)
{
 struct w8001 *VAR_1 = FUNC_3(VAR_0);

 FUNC_2(VAR_0);

 if (VAR_1->pen_dev)
  FUNC_0(VAR_1->pen_dev);
 if (VAR_1->touch_dev)
  FUNC_0(VAR_1->touch_dev);
 FUNC_1(VAR_1);

 FUNC_4(VAR_0, ((void*)0));
}
