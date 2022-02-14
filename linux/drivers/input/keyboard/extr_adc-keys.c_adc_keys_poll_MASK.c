
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct input_polled_dev {int input; struct adc_keys_state* private; } ;
struct adc_keys_state {int keyup_voltage; int num_keys; int last_key; TYPE_1__* map; int channel; } ;
struct TYPE_2__ {int voltage; int keycode; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int*) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct input_polled_dev *VAR_0)
{
 struct adc_keys_state *VAR_1 = VAR_0->private;
 int VAR_2, VAR_3, VAR_4;
 u32 VAR_5, VAR_6 = 0xffffffff;
 int VAR_7 = 0;

 VAR_4 = FUNC_1(VAR_1->channel, &VAR_3);
 if (FUNC_4(VAR_4 < 0)) {

  VAR_3 = VAR_1->keyup_voltage;
 } else {
  for (VAR_2 = 0; VAR_2 < VAR_1->num_keys; VAR_2++) {
   VAR_5 = FUNC_0(VAR_1->map[VAR_2].voltage - VAR_3);
   if (VAR_5 < VAR_6) {
    VAR_6 = VAR_5;
    VAR_7 = VAR_1->map[VAR_2].keycode;
   }
  }
 }

 if (FUNC_0(VAR_1->keyup_voltage - VAR_3) < VAR_6)
  VAR_7 = 0;

 if (VAR_1->last_key && VAR_1->last_key != VAR_7)
  FUNC_2(VAR_0->input, VAR_1->last_key, 0);

 if (VAR_7)
  FUNC_2(VAR_0->input, VAR_7, 1);

 FUNC_3(VAR_0->input);
 VAR_1->last_key = VAR_7;
}
