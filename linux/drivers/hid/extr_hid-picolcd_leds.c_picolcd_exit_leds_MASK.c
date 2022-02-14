
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct picolcd_data {struct led_classdev** led; } ;
struct led_classdev {int dummy; } ;


 int FUNC_0 (struct led_classdev*) ;
 int FUNC_1 (struct led_classdev*) ;

void FUNC_2(struct picolcd_data *VAR_0)
{
 struct led_classdev *VAR_1;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < 8; VAR_2++) {
  VAR_1 = VAR_0->led[VAR_2];
  VAR_0->led[VAR_2] = ((void*)0);
  if (!VAR_1)
   continue;
  FUNC_1(VAR_1);
  FUNC_0(VAR_1);
 }
}
