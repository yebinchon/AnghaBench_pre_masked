
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spear_adc_state {int sampling_freq; TYPE_1__* adc_base_spear6xx; } ;
struct TYPE_2__ {int clk; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct spear_adc_state*,int ) ;
 int FUNC_2 (struct spear_adc_state*,int,int ) ;
 int FUNC_3 (struct spear_adc_state*,int ) ;
 int FUNC_4 (struct spear_adc_state*,int ) ;

__attribute__((used)) static int FUNC_5(struct spear_adc_state *VAR_0)
{
 int VAR_1;


 FUNC_4(VAR_0, 0);
 FUNC_0(0, &VAR_0->adc_base_spear6xx->clk);
 for (VAR_1 = 0; VAR_1 < 8; VAR_1++)
  FUNC_2(VAR_0, VAR_1, 0);
 FUNC_3(VAR_0, 0);

 FUNC_1(VAR_0, VAR_0->sampling_freq);

 return 0;
}
