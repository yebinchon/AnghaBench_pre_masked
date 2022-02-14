
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nct6683_data {int have_fan; int* fanin_cfg; int have_pwm; int* fanout_cfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct nct6683_data*,int ) ;

__attribute__((used)) static void
FUNC_3(struct nct6683_data *VAR_2)
{
 int VAR_3;
 u8 VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_4 = FUNC_2(VAR_2, FUNC_0(VAR_3));
  if (VAR_4 & 0x80)
   VAR_2->have_fan |= 1 << VAR_3;
  VAR_2->fanin_cfg[VAR_3] = VAR_4;
 }
 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  VAR_4 = FUNC_2(VAR_2, FUNC_1(VAR_3));
  if (VAR_4 & 0x80)
   VAR_2->have_pwm |= 1 << VAR_3;
  VAR_2->fanout_cfg[VAR_3] = VAR_4;
 }
}
