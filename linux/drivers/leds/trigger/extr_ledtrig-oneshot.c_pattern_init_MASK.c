
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct led_classdev {void* blink_delay_off; void* blink_delay_on; int dev; } ;


 void* VAR_0 ;
 int FUNC_0 (int ,char*,unsigned int) ;
 int FUNC_1 (void**) ;
 void** FUNC_2 (struct led_classdev*,unsigned int*) ;

__attribute__((used)) static void FUNC_3(struct led_classdev *VAR_1)
{
 u32 *VAR_2;
 unsigned int VAR_3 = 0;

 VAR_2 = FUNC_2(VAR_1, &VAR_3);
 if (!VAR_2)
  goto out_default;

 if (VAR_3 != 2) {
  FUNC_0(VAR_1->dev,
    "Expected 2 but got %u values for delays pattern\n",
    VAR_3);
  goto out_default;
 }

 VAR_1->blink_delay_on = VAR_2[0];
 VAR_1->blink_delay_off = VAR_2[1];
 FUNC_1(VAR_2);

 return;

out_default:
 FUNC_1(VAR_2);
 VAR_1->blink_delay_on = VAR_0;
 VAR_1->blink_delay_off = VAR_0;
}
