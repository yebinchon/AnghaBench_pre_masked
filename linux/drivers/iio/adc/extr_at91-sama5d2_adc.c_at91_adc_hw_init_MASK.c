
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int min_sample_rate; } ;
struct at91_adc_state {TYPE_1__ soc_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct at91_adc_state*) ;
 int FUNC_2 (struct at91_adc_state*,int ) ;
 int FUNC_3 (struct at91_adc_state*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct at91_adc_state *VAR_5)
{
 FUNC_3(VAR_5, VAR_0, VAR_1);
 FUNC_3(VAR_5, VAR_2, 0xffffffff);




 FUNC_3(VAR_5, VAR_3,
   FUNC_0(2) | VAR_4);

 FUNC_2(VAR_5, VAR_5->soc_info.min_sample_rate);


 FUNC_1(VAR_5);
}
