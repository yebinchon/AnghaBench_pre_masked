
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct led_classdev {int dummy; } ;
typedef enum led_brightness { ____Placeholder_led_brightness } led_brightness ;
struct TYPE_3__ {scalar_t__ complete; } ;




 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,int *,int,int,int,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct led_classdev *VAR_4,
   enum led_brightness VAR_5)
{
 unsigned long VAR_6;

 FUNC_1(&VAR_0, VAR_6);
 switch (VAR_5) {
 case 128:
  VAR_3 = 0;
  break;
 case 129:
  VAR_3 = 1;
  break;
 default:
  goto out;
  break;
 }

 if (VAR_1.complete && !VAR_2)
  FUNC_0(&VAR_1, ((void*)0), 4, 0xee, 4, 0, VAR_3);
 out:
  FUNC_2(&VAR_0, VAR_6);
}
