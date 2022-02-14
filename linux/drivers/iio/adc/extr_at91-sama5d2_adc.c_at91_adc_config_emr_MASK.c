
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct at91_adc_state {int oversampling_ratio; } ;





 int VAR_0 ;
 unsigned int FUNC_0 (int) ;
 unsigned int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int FUNC_2 (struct at91_adc_state*,int ) ;
 int FUNC_3 (struct at91_adc_state*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_4(struct at91_adc_state *VAR_5)
{

 unsigned int VAR_6 = FUNC_2(VAR_5, VAR_0);


 VAR_6 |= FUNC_0(1);


 VAR_6 &= ~VAR_4;


 switch (VAR_5->oversampling_ratio) {
 case 129:
  VAR_6 |= FUNC_1(VAR_2) &
         VAR_4;
  break;
 case 128:
  VAR_6 |= FUNC_1(VAR_3) &
         VAR_4;
  break;
 case 130:
  VAR_6 |= FUNC_1(VAR_1) &
         VAR_4;
  break;
 }

 FUNC_3(VAR_5, VAR_0, VAR_6);
}
