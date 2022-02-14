
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int val; } ;
struct TYPE_3__ {int val; } ;
struct led_classdev_flash {TYPE_2__ timeout; TYPE_1__ brightness; } ;
struct led_classdev {int dummy; } ;


 int FUNC_0 (struct led_classdev_flash*,int ,int ) ;
 int VAR_0 ;
 struct led_classdev_flash* FUNC_1 (struct led_classdev*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(struct led_classdev *VAR_2)
{
 struct led_classdev_flash *VAR_3 = FUNC_1(VAR_2);

 FUNC_0(VAR_3, VAR_0,
     VAR_3->brightness.val);
 FUNC_0(VAR_3, VAR_1, VAR_3->timeout.val);
}
