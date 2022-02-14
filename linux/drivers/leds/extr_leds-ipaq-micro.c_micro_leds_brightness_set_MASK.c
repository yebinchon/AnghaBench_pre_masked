
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct led_classdev {TYPE_2__* dev; } ;
struct ipaq_micro_msg {int tx_len; int* tx_data; int id; } ;
struct ipaq_micro {int dummy; } ;
typedef enum led_brightness { ____Placeholder_led_brightness } led_brightness ;
struct TYPE_4__ {TYPE_1__* parent; } ;
struct TYPE_3__ {int parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ipaq_micro* FUNC_0 (int ) ;
 int FUNC_1 (struct ipaq_micro*,struct ipaq_micro_msg*) ;

__attribute__((used)) static int FUNC_2(struct led_classdev *VAR_2,
          enum led_brightness VAR_3)
{
 struct ipaq_micro *VAR_4 = FUNC_0(VAR_2->dev->parent->parent);
 struct ipaq_micro_msg VAR_5 = {
  .id = VAR_1,
  .tx_len = 4,
 };

 VAR_5.tx_data[0] = VAR_0;
 VAR_5.tx_data[1] = 0;
 if (VAR_3) {
  VAR_5.tx_data[2] = 0;
  VAR_5.tx_data[3] = 1;
 } else {
  VAR_5.tx_data[2] = 1;
  VAR_5.tx_data[3] = 0;
 }
 return FUNC_1(VAR_4, &VAR_5);
}
