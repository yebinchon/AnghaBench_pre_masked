
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
 scalar_t__ FUNC_0 (struct at91_adc_state*) ;

__attribute__((used)) static int FUNC_1(struct at91_adc_state *VAR_3, int VAR_4, u16 *VAR_5)
{
 *VAR_5 = 0;
 if (!VAR_3->touch_st.touching)
  return -VAR_1;
 if (VAR_4 == VAR_0)
  *VAR_5 = FUNC_0(VAR_3);
 else
  return -VAR_1;

 return VAR_2;
}
