
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led_classdev {int flags; int led_access; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

void FUNC_1(struct led_classdev *VAR_1)
{
 FUNC_0(&VAR_1->led_access);

 VAR_1->flags |= VAR_0;
}
