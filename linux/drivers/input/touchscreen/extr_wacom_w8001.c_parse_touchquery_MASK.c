
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct w8001_touch_query {int panel_res; int sensor_id; int capacity_res; int x; int y; } ;


 int VAR_0 ;
 int FUNC_0 (struct w8001_touch_query*,int ,int) ;

__attribute__((used)) static void FUNC_1(u8 *VAR_1, struct w8001_touch_query *VAR_2)
{
 FUNC_0(VAR_2, 0, sizeof(*VAR_2));

 VAR_2->panel_res = VAR_1[1];
 VAR_2->sensor_id = VAR_1[2] & 0x7;
 VAR_2->capacity_res = VAR_1[7];

 VAR_2->x = VAR_1[3] << 9;
 VAR_2->x |= VAR_1[4] << 2;
 VAR_2->x |= (VAR_1[2] >> 5) & 0x3;

 VAR_2->y = VAR_1[5] << 9;
 VAR_2->y |= VAR_1[6] << 2;
 VAR_2->y |= (VAR_1[2] >> 3) & 0x3;


 if (!VAR_2->x && !VAR_2->y) {
  VAR_2->x = 1024;
  VAR_2->y = 1024;
  if (VAR_2->panel_res)
   VAR_2->x = VAR_2->y = (1 << VAR_2->panel_res);
  VAR_2->panel_res = VAR_0;
 }
}
