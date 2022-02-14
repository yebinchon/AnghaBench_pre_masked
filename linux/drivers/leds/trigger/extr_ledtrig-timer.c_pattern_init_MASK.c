
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct led_classdev {void* blink_delay_off; void* blink_delay_on; int dev; } ;


 int FUNC_0 (int ,char*,unsigned int) ;
 int FUNC_1 (void**) ;
 void** FUNC_2 (struct led_classdev*,unsigned int*) ;

__attribute__((used)) static void FUNC_3(struct led_classdev *VAR_0)
{
 u32 *VAR_1;
 unsigned int VAR_2 = 0;

 VAR_1 = FUNC_2(VAR_0, &VAR_2);
 if (!VAR_1)
  return;

 if (VAR_2 != 2) {
  FUNC_0(VAR_0->dev,
    "Expected 2 but got %u values for delays pattern\n",
    VAR_2);
  goto out;
 }

 VAR_0->blink_delay_on = VAR_1[0];
 VAR_0->blink_delay_off = VAR_1[1];


out:
 FUNC_1(VAR_1);
}
