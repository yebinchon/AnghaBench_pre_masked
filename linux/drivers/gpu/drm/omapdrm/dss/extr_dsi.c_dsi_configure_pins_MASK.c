
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct omap_dss_device {int dummy; } ;
struct omap_dsi_pin_config {int num_pins; int* pins; } ;
struct dsi_lane_config {int function; size_t polarity; } ;
struct dsi_data {int num_lanes_supported; int num_lanes_used; int lanes; } ;
typedef enum dsi_lane_function { ____Placeholder_dsi_lane_function } dsi_lane_function ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct dsi_lane_config*,int) ;
 struct dsi_data* FUNC_1 (struct omap_dss_device*) ;

__attribute__((used)) static int FUNC_2(struct omap_dss_device *VAR_3,
  const struct omap_dsi_pin_config *VAR_4)
{
 struct dsi_data *VAR_5 = FUNC_1(VAR_3);
 int VAR_6;
 const int *VAR_7;
 struct dsi_lane_config VAR_8[VAR_1];
 int VAR_9;
 int VAR_10;

 static const enum dsi_lane_function VAR_11[] = {
  132,
  131,
  130,
  129,
  128,
 };

 VAR_6 = VAR_4->num_pins;
 VAR_7 = VAR_4->pins;

 if (VAR_6 < 4 || VAR_6 > VAR_5->num_lanes_supported * 2
   || VAR_6 % 2 != 0)
  return -VAR_2;

 for (VAR_10 = 0; VAR_10 < VAR_1; ++VAR_10)
  VAR_8[VAR_10].function = VAR_0;

 VAR_9 = 0;

 for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10 += 2) {
  u8 VAR_12, VAR_13;
  int VAR_14, VAR_15;

  VAR_14 = VAR_7[VAR_10];
  VAR_15 = VAR_7[VAR_10 + 1];

  if (VAR_14 < 0 || VAR_14 >= VAR_5->num_lanes_supported * 2)
   return -VAR_2;

  if (VAR_15 < 0 || VAR_15 >= VAR_5->num_lanes_supported * 2)
   return -VAR_2;

  if (VAR_14 & 1) {
   if (VAR_15 != VAR_14 - 1)
    return -VAR_2;
   VAR_13 = 1;
  } else {
   if (VAR_15 != VAR_14 + 1)
    return -VAR_2;
   VAR_13 = 0;
  }

  VAR_12 = VAR_14 / 2;

  VAR_8[VAR_12].function = VAR_11[VAR_10 / 2];
  VAR_8[VAR_12].polarity = VAR_13;
  VAR_9++;
 }

 FUNC_0(VAR_5->lanes, VAR_8, sizeof(VAR_5->lanes));
 VAR_5->num_lanes_used = VAR_9;

 return 0;
}
