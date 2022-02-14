
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct imx6ul_tsc {int measure_delay_time; int pre_charge_time; scalar_t__ tsc_regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct imx6ul_tsc *VAR_14)
{
 u32 VAR_15 = 0;
 u32 VAR_16;

 VAR_15 |= VAR_14->measure_delay_time << 8;
 VAR_15 |= VAR_1 | VAR_0;
 FUNC_1(VAR_15, VAR_14->tsc_regs + VAR_5);

 FUNC_1(VAR_2, VAR_14->tsc_regs + VAR_6);

 FUNC_1(VAR_14->pre_charge_time, VAR_14->tsc_regs + VAR_10);
 FUNC_1(VAR_3, VAR_14->tsc_regs + VAR_8);
 FUNC_1(VAR_4 | VAR_13,
  VAR_14->tsc_regs + VAR_9);


 VAR_16 = FUNC_0(VAR_14->tsc_regs + VAR_7);
 VAR_16 |= VAR_11;
 VAR_16 &= ~VAR_12;
 FUNC_1(VAR_16, VAR_14->tsc_regs + VAR_7);
}
