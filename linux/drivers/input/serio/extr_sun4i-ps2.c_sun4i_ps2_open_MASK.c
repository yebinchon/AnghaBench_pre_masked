
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sun4i_ps2data {int lock; scalar_t__ reg_base; int clk; } ;
struct serio {struct sun4i_ps2data* port_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct serio *VAR_21)
{
 struct sun4i_ps2data *VAR_22 = VAR_21->port_data;
 u32 VAR_23 = 0;
 u32 VAR_24;
 u32 VAR_25;
 u32 VAR_26;
 unsigned long VAR_27;


 VAR_26 = VAR_14 | VAR_11
  | VAR_12 | VAR_13;
 FUNC_3(VAR_26, VAR_22->reg_base + VAR_18);


 VAR_26 = VAR_5 | VAR_2 | VAR_6
  | VAR_4 | VAR_3
  | VAR_0 | VAR_1;

 FUNC_3(VAR_26, VAR_22->reg_base + VAR_16);

 VAR_23 = FUNC_0(VAR_22->clk);

 VAR_24 = VAR_23 / VAR_19 - 1;
 VAR_25 = VAR_19 / VAR_20 - 1;
 VAR_26 = (VAR_24 << 8) | VAR_25;
 FUNC_3(VAR_26, VAR_22->reg_base + VAR_15);


 VAR_26 = VAR_10 | VAR_8 | VAR_9
  | VAR_7;

 FUNC_1(&VAR_22->lock, VAR_27);
 FUNC_3(VAR_26, VAR_22->reg_base + VAR_17);
 FUNC_2(&VAR_22->lock, VAR_27);

 return 0;
}
