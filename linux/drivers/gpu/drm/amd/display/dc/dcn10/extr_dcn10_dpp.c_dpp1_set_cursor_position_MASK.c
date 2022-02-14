
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct dpp {int dummy; } ;
struct dcn10_dpp {int dummy; } ;
struct dc_cursor_position {int x; int x_hotspot; int y; int y_hotspot; scalar_t__ enable; } ;
struct TYPE_2__ {int x; int y; scalar_t__ height; scalar_t__ width; } ;
struct dc_cursor_mi_param {scalar_t__ rotation; TYPE_1__ viewport; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct dcn10_dpp* FUNC_1 (struct dpp*) ;
 int FUNC_2 (int,int) ;

void FUNC_3(
  struct dpp *VAR_5,
  const struct dc_cursor_position *VAR_6,
  const struct dc_cursor_mi_param *VAR_7,
  uint32_t VAR_8,
  uint32_t VAR_9)
{
 struct dcn10_dpp *VAR_10 = FUNC_1(VAR_5);
 int VAR_11 = VAR_6->x - VAR_6->x_hotspot - VAR_7->viewport.x;
 int VAR_12 = VAR_6->y - VAR_6->y_hotspot - VAR_7->viewport.y;
 uint32_t VAR_13 = VAR_6->enable ? 1 : 0;


 if (VAR_7->rotation == VAR_4 || VAR_7->rotation == VAR_3) {
  FUNC_2(VAR_8, VAR_9);
  if (VAR_7->rotation == VAR_4) {
   VAR_11 = VAR_6->x - VAR_6->y_hotspot - VAR_7->viewport.x;
   VAR_12 = VAR_6->y - VAR_6->x_hotspot - VAR_7->viewport.y;
  }
 } else if (VAR_7->rotation == VAR_2) {
  VAR_11 = VAR_6->x - VAR_7->viewport.x;
  VAR_12 = VAR_6->y - VAR_7->viewport.y;
 }


 if (VAR_11 >= (int)VAR_7->viewport.width)
  VAR_13 = 0;

 if (VAR_11 + (int)VAR_8 <= 0)
  VAR_13 = 0;

 if (VAR_12 >= (int)VAR_7->viewport.height)
  VAR_13 = 0;

 if (VAR_12 + (int)VAR_9 <= 0)
  VAR_13 = 0;

 FUNC_0(VAR_1,
   VAR_0, VAR_13);

}
