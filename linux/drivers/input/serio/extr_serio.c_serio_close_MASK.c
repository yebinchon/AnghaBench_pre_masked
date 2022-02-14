
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serio {int (* close ) (struct serio*) ;} ;


 int FUNC_0 (struct serio*,int *) ;
 int FUNC_1 (struct serio*) ;

void FUNC_2(struct serio *VAR_0)
{
 if (VAR_0->close)
  VAR_0->close(VAR_0);

 FUNC_0(VAR_0, ((void*)0));
}
