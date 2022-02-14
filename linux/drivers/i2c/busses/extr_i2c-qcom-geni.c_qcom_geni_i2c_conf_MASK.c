
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ base; } ;
struct geni_i2c_dev {TYPE_1__ se; struct geni_i2c_clk_fld* clk_fld; } ;
struct geni_i2c_clk_fld {int clk_div; int t_high_cnt; int t_low_cnt; int t_cycle_cnt; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct geni_i2c_dev *VAR_7)
{
 const struct geni_i2c_clk_fld *VAR_8 = VAR_7->clk_fld;
 u32 VAR_9;

 FUNC_0(0, VAR_7->se.base + VAR_5);

 VAR_9 = (VAR_8->clk_div << VAR_0) | VAR_4;
 FUNC_0(VAR_9, VAR_7->se.base + VAR_1);

 VAR_9 = VAR_8->t_high_cnt << VAR_2;
 VAR_9 |= VAR_8->t_low_cnt << VAR_3;
 VAR_9 |= VAR_8->t_cycle_cnt;
 FUNC_0(VAR_9, VAR_7->se.base + VAR_6);
}
