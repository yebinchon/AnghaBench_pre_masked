
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int x_pos; } ;
struct at91_adc_state {TYPE_1__ touch_st; } ;


 int VAR_0 ;
 int FUNC_0 (struct at91_adc_state*,int ) ;

__attribute__((used)) static u16 FUNC_1(struct at91_adc_state *VAR_1)
{
 VAR_1->touch_st.x_pos = FUNC_0(VAR_1, VAR_0);
 return VAR_1->touch_st.x_pos;
}
