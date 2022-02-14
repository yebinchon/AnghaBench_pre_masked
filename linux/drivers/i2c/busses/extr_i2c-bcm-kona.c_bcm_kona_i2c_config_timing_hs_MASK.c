
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bcm_kona_i2c_dev {scalar_t__ base; TYPE_1__* hs_cfg; } ;
struct TYPE_2__ {int prescale; int time_p; int no_div; int time_div; int hs_hold; int hs_high_phase; int hs_setup; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct bcm_kona_i2c_dev *VAR_10)
{
 FUNC_1((VAR_10->hs_cfg->prescale << VAR_8) |
        (VAR_10->hs_cfg->time_p << VAR_9) |
        (VAR_10->hs_cfg->no_div << VAR_6) |
        (VAR_10->hs_cfg->time_div << VAR_5),
        VAR_10->base + VAR_7);

 FUNC_1((VAR_10->hs_cfg->hs_hold << VAR_1) |
        (VAR_10->hs_cfg->hs_high_phase << VAR_0) |
        (VAR_10->hs_cfg->hs_setup << VAR_3),
        VAR_10->base + VAR_4);

 FUNC_1(FUNC_0(VAR_10->base + VAR_4) | VAR_2,
        VAR_10->base + VAR_4);
}
