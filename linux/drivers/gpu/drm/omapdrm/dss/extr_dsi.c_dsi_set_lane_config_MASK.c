
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct dsi_data {int num_lanes_used; unsigned int num_lanes_supported; TYPE_1__* lanes; } ;
typedef enum dsi_lane_function { ____Placeholder_dsi_lane_function } dsi_lane_function ;
struct TYPE_2__ {int const function; unsigned int polarity; } ;


 int VAR_0 ;





 int VAR_1 ;
 int FUNC_0 (int ,unsigned int,unsigned int,unsigned int) ;
 int FUNC_1 (struct dsi_data*,int ) ;
 int FUNC_2 (struct dsi_data*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct dsi_data *VAR_2)
{
 static const u8 VAR_3[] = { 0, 4, 8, 12, 16 };
 static const enum dsi_lane_function VAR_4[] = {
  132,
  131,
  130,
  129,
  128,
 };
 u32 VAR_5;
 int VAR_6;

 VAR_5 = FUNC_1(VAR_2, VAR_0);

 for (VAR_6 = 0; VAR_6 < VAR_2->num_lanes_used; ++VAR_6) {
  unsigned int VAR_7 = VAR_3[VAR_6];
  unsigned int VAR_8, VAR_9;
  unsigned int VAR_10;

  for (VAR_10 = 0; VAR_10 < VAR_2->num_lanes_supported; ++VAR_10)
   if (VAR_2->lanes[VAR_10].function == VAR_4[VAR_6])
    break;

  if (VAR_10 == VAR_2->num_lanes_supported)
   return -VAR_1;

  VAR_9 = VAR_10;
  VAR_8 = VAR_2->lanes[VAR_10].polarity;

  VAR_5 = FUNC_0(VAR_5, VAR_9 + 1, VAR_7 + 2, VAR_7);
  VAR_5 = FUNC_0(VAR_5, VAR_8, VAR_7 + 3, VAR_7 + 3);
 }


 for (; VAR_6 < VAR_2->num_lanes_supported; ++VAR_6) {
  unsigned int VAR_11 = VAR_3[VAR_6];

  VAR_5 = FUNC_0(VAR_5, 0, VAR_11 + 2, VAR_11);
  VAR_5 = FUNC_0(VAR_5, 0, VAR_11 + 3, VAR_11 + 3);
 }

 FUNC_2(VAR_2, VAR_0, VAR_5);

 return 0;
}
