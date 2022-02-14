
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_2__ {int touching; } ;
struct at91_adc_state {TYPE_1__ touch_st; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct at91_adc_state*) ;
 scalar_t__ FUNC_1 (struct at91_adc_state*) ;

__attribute__((used)) static int FUNC_2(struct at91_adc_state *VAR_4, int VAR_5, u16 *VAR_6)
{
 *VAR_6 = 0;
 if (!VAR_4->touch_st.touching)
  return -VAR_2;
 if (VAR_5 == VAR_0)
  *VAR_6 = FUNC_0(VAR_4);
 else if (VAR_5 == VAR_1)
  *VAR_6 = FUNC_1(VAR_4);
 else
  return -VAR_2;

 return VAR_3;
}
