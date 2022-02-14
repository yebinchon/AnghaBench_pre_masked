
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct spear_adc_state {int current_clk; TYPE_1__* adc_base_spear6xx; int clk; } ;
struct TYPE_2__ {int clk; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct spear_adc_state *VAR_0, u32 VAR_1)
{
 u32 VAR_2, VAR_3, VAR_4;
 u32 VAR_5 = FUNC_4(VAR_0->clk);

 VAR_4 = FUNC_0(VAR_5, VAR_1);
 VAR_3 = VAR_4 / 2;
 VAR_2 = VAR_4 - VAR_3;
 VAR_0->current_clk = VAR_5 / VAR_4;

 FUNC_3(FUNC_2(VAR_3) | FUNC_1(VAR_2),
       &VAR_0->adc_base_spear6xx->clk);
}
