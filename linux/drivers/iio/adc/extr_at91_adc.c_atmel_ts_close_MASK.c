
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct input_dev {int dummy; } ;
struct at91_adc_state {TYPE_1__* caps; } ;
struct TYPE_2__ {scalar_t__ has_tsmr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct at91_adc_state*,int ,int ) ;
 struct at91_adc_state* FUNC_1 (struct input_dev*) ;

__attribute__((used)) static void FUNC_2(struct input_dev *VAR_3)
{
 struct at91_adc_state *VAR_4 = FUNC_1(VAR_3);

 if (VAR_4->caps->has_tsmr)
  FUNC_0(VAR_4, VAR_1, VAR_2);
 else
  FUNC_0(VAR_4, VAR_1, VAR_0);
}
