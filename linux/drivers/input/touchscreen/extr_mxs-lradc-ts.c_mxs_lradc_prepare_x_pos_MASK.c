
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mxs_lradc_ts {int cur_plate; scalar_t__ base; struct mxs_lradc* lradc; } ;
struct mxs_lradc {size_t soc; } ;
struct TYPE_2__ {int x_plate; int mask; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;
 int FUNC_0 (struct mxs_lradc_ts*,int ,int ) ;
 int FUNC_1 (struct mxs_lradc_ts*,int ) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct mxs_lradc_ts *VAR_7)
{
 struct mxs_lradc *VAR_8 = VAR_7->lradc;

 FUNC_2(VAR_6[VAR_8->soc].mask,
        VAR_7->base + VAR_0 + VAR_2);
 FUNC_2(VAR_6[VAR_8->soc].x_plate,
        VAR_7->base + VAR_0 + VAR_3);

 VAR_7->cur_plate = VAR_1;
 FUNC_0(VAR_7, VAR_4, VAR_5);
 FUNC_1(VAR_7, VAR_4);
}
