
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mxs_lradc_ts {scalar_t__ base; struct mxs_lradc* lradc; } ;
struct mxs_lradc {size_t soc; } ;
struct TYPE_2__ {int bit; int mask; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct mxs_lradc_ts *VAR_4)
{
 struct mxs_lradc *VAR_5 = VAR_4->lradc;







 FUNC_0(VAR_3[VAR_5->soc].mask,
        VAR_4->base + VAR_0 + VAR_1);
 FUNC_0(VAR_3[VAR_5->soc].bit,
        VAR_4->base + VAR_0 + VAR_2);
}
