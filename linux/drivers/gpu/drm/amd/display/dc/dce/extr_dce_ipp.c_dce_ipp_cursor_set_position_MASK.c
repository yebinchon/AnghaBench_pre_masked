
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_pixel_processor {int dummy; } ;
struct dce_ipp {int dummy; } ;
struct dc_cursor_position {int enable; int y_hotspot; int x_hotspot; int y; int x; } ;
struct dc_cursor_mi_param {int dummy; } ;


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
 int FUNC_0 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 struct dce_ipp* FUNC_2 (struct input_pixel_processor*) ;

__attribute__((used)) static void FUNC_3(
 struct input_pixel_processor *VAR_10,
 const struct dc_cursor_position *VAR_11,
 const struct dc_cursor_mi_param *VAR_12)
{
 struct dce_ipp *VAR_13 = FUNC_2(VAR_10);


 FUNC_1(VAR_9, VAR_3, 1);



 FUNC_1(VAR_6, VAR_0, VAR_11->enable);

 FUNC_0(VAR_8, 0,
  VAR_4, VAR_11->x,
  VAR_5, VAR_11->y);

 FUNC_0(VAR_7, 0,
  VAR_1, VAR_11->x_hotspot,
  VAR_2, VAR_11->y_hotspot);


 FUNC_1(VAR_9, VAR_3, 0);
}
