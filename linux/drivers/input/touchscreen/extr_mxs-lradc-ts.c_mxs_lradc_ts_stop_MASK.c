
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mxs_lradc_ts {scalar_t__ base; struct mxs_lradc* lradc; } ;
struct mxs_lradc {size_t soc; int buffer_vchans; } ;
struct TYPE_2__ {int mask; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__* VAR_8 ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct mxs_lradc_ts *VAR_9)
{
 int VAR_10;
 struct mxs_lradc *VAR_11 = VAR_9->lradc;


 FUNC_2(VAR_3 |
        FUNC_0(VAR_6) |
        FUNC_0(VAR_7),
        VAR_9->base + VAR_1 + VAR_5);


 FUNC_2(VAR_8[VAR_11->soc].mask,
        VAR_9->base + VAR_0 + VAR_5);

 FUNC_2(VAR_11->buffer_vchans << VAR_2,
        VAR_9->base + VAR_1 + VAR_5);

 for (VAR_10 = 1; VAR_10 < VAR_4; VAR_10++)
  FUNC_2(0, VAR_9->base + FUNC_1(VAR_10));
}
