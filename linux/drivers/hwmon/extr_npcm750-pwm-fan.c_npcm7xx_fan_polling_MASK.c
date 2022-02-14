
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_2__ {scalar_t__ expires; } ;
struct npcm7xx_pwm_fan_data {int fan_select; TYPE_1__ fan_timer; int fan_base; scalar_t__* fan_present; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_6 ;
 struct npcm7xx_pwm_fan_data* FUNC_4 (struct npcm7xx_pwm_fan_data*,struct timer_list*,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (struct npcm7xx_pwm_fan_data*,int,int ) ;

__attribute__((used)) static void FUNC_9(struct timer_list *VAR_8)
{
 struct npcm7xx_pwm_fan_data *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_4(VAR_9, VAR_8, VAR_6);





 for (VAR_10 = VAR_9->fan_select; VAR_10 < VAR_2;
       VAR_10 = VAR_10 + 4) {

  FUNC_6(VAR_5,
    FUNC_2(VAR_9->fan_base, VAR_10));

  if (VAR_9->fan_present[VAR_10 * 2]) {
   FUNC_5(VAR_4,
      FUNC_0(VAR_9->fan_base, VAR_10));
   FUNC_8(VAR_9, VAR_10, VAR_0);
  }
  if (VAR_9->fan_present[(VAR_10 * 2) + 1]) {
   FUNC_5(VAR_4,
      FUNC_1(VAR_9->fan_base, VAR_10));
   FUNC_8(VAR_9, VAR_10, VAR_1);
  }
 }

 VAR_9->fan_select++;
 VAR_9->fan_select &= 0x3;


 VAR_9->fan_timer.expires = VAR_7 +
  FUNC_7(VAR_3);
 FUNC_3(&VAR_9->fan_timer);
}
