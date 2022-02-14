
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lm3530_platform_data {scalar_t__ als_vmax; int als_vmin; int als_avrg_time; int als_input_mode; int als1_resistor_sel; int als2_resistor_sel; } ;
struct lm3530_als_data {int* zones; int config; int imp_sel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_0(struct lm3530_platform_data *VAR_9,
    struct lm3530_als_data *VAR_10)
{
 int VAR_11;
 u32 VAR_12, VAR_13, VAR_14;

 if (VAR_9->als_vmax == 0) {
  VAR_9->als_vmin = 0;
  VAR_9->als_vmax = VAR_6;
 }

 VAR_12 = VAR_9->als_vmin;
 VAR_13 = VAR_9->als_vmax;

 if ((VAR_13 - VAR_12) > VAR_6)
  VAR_9->als_vmax = VAR_13 = VAR_12 + VAR_6;


 VAR_14 = (VAR_13 - VAR_12) / (VAR_7 + 1);

 for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11++)
  VAR_10->zones[VAR_11] = (((VAR_12 + VAR_4) +
   VAR_14 + (VAR_11 * VAR_14)) * VAR_0) / 1000;

 VAR_10->config =
  (VAR_9->als_avrg_time << VAR_3) |
  (VAR_8) |
  (VAR_9->als_input_mode << VAR_5);

 VAR_10->imp_sel =
  (VAR_9->als1_resistor_sel << VAR_1) |
  (VAR_9->als2_resistor_sel << VAR_2);
}
