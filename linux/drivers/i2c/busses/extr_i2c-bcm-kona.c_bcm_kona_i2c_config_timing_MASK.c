
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bcm_kona_i2c_dev {scalar_t__ base; TYPE_1__* std_cfg; } ;
struct TYPE_2__ {int prescale; int time_p; int no_div; int time_div; int time_m; int time_n; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct bcm_kona_i2c_dev *VAR_11)
{
 FUNC_1(FUNC_0(VAR_11->base + VAR_5) & ~VAR_4,
        VAR_11->base + VAR_5);

 FUNC_1((VAR_11->std_cfg->prescale << VAR_9) |
        (VAR_11->std_cfg->time_p << VAR_10) |
        (VAR_11->std_cfg->no_div << VAR_7) |
        (VAR_11->std_cfg->time_div << VAR_6),
        VAR_11->base + VAR_8);

 FUNC_1((VAR_11->std_cfg->time_m << VAR_1) |
        (VAR_11->std_cfg->time_n << VAR_2) |
        VAR_0,
        VAR_11->base + VAR_3);
}
