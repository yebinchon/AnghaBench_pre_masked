
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct at91_adc_state {int dummy; } ;


 int FUNC_0 (struct at91_adc_state*,int*) ;

__attribute__((used)) static void FUNC_1(struct at91_adc_state *VAR_0, void *VAR_1,
       int VAR_2)
{
 int VAR_3 = 0, VAR_4;
 u16 *VAR_5 = (u16 *) VAR_1;
 while (VAR_3 < VAR_2 / 2) {
  VAR_4 = VAR_5[VAR_3];
  FUNC_0(VAR_0, &VAR_4);
  VAR_5[VAR_3] = VAR_4;
  VAR_3++;
 }
}
