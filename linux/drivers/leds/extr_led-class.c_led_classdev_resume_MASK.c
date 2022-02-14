
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led_classdev {int flags; int (* flash_resume ) (struct led_classdev*) ;int brightness; } ;


 int VAR_0 ;
 int FUNC_0 (struct led_classdev*,int ) ;
 int FUNC_1 (struct led_classdev*) ;

void FUNC_2(struct led_classdev *VAR_1)
{
 FUNC_0(VAR_1, VAR_1->brightness);

 if (VAR_1->flash_resume)
  VAR_1->flash_resume(VAR_1);

 VAR_1->flags &= ~VAR_0;
}
