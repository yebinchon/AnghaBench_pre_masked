
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lm3532_led {int dummy; } ;
struct lm3532_data {int regmap; struct lm3532_als_data* als_data; } ;
struct lm3532_als_data {int als_vmin; int als_vmax; int* zones_lo; int* zones_hi; int config; int als_avrg_time; int als_input_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int,int) ;

__attribute__((used)) static int FUNC_1(struct lm3532_data *VAR_7,
    struct lm3532_led *VAR_8)
{
 struct lm3532_als_data *VAR_9 = VAR_7->als_data;
 u32 VAR_10, VAR_11, VAR_12;
 int VAR_13 = VAR_6;
 int VAR_14;
 int VAR_15;

 VAR_10 = VAR_9->als_vmin;
 VAR_11 = VAR_9->als_vmax;

 VAR_12 = (VAR_11 - VAR_10) / ((VAR_4 + 1) * 2);

 for (VAR_15 = 0; VAR_15 < VAR_4; VAR_15++) {
  VAR_9->zones_lo[VAR_15] = ((VAR_10 + VAR_12 + (VAR_15 * VAR_12)) *
    VAR_0) / 1000;
  VAR_9->zones_hi[VAR_15] = ((VAR_10 + VAR_2 +
    VAR_12 + (VAR_15 * VAR_12)) * VAR_0) / 1000;

  VAR_13 = VAR_6 + VAR_15 * 2;
  VAR_14 = FUNC_0(VAR_7->regmap, VAR_13, VAR_9->zones_lo[VAR_15]);
  if (VAR_14)
   return VAR_14;

  VAR_13 += 1;
  VAR_14 = FUNC_0(VAR_7->regmap, VAR_13, VAR_9->zones_hi[VAR_15]);
  if (VAR_14)
   return VAR_14;
 }

 VAR_9->config = (VAR_9->als_avrg_time | (VAR_5) |
  (VAR_9->als_input_mode << VAR_3));

 return FUNC_0(VAR_7->regmap, VAR_1, VAR_9->config);
}
