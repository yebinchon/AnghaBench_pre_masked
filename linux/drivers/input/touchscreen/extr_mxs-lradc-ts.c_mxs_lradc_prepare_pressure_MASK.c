
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mxs_lradc_ts {int cur_plate; scalar_t__ base; struct mxs_lradc* lradc; } ;
struct mxs_lradc {size_t soc; } ;
struct TYPE_2__ {int pressure; int mask; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__* VAR_8 ;
 int FUNC_0 (struct mxs_lradc_ts*,int ,int ) ;
 int FUNC_1 (struct mxs_lradc_ts*,int ,int ) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct mxs_lradc_ts *VAR_9)
{
 struct mxs_lradc *VAR_10 = VAR_9->lradc;

 FUNC_2(VAR_8[VAR_10->soc].mask,
        VAR_9->base + VAR_0 + VAR_2);
 FUNC_2(VAR_8[VAR_10->soc].pressure,
        VAR_9->base + VAR_0 + VAR_3);

 VAR_9->cur_plate = VAR_1;
 FUNC_0(VAR_9, VAR_4, VAR_7);
 FUNC_0(VAR_9, VAR_5, VAR_6);
 FUNC_1(VAR_9, VAR_5,
        VAR_4);
}
