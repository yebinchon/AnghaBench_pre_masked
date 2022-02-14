
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum dc_cursor_color_format { ____Placeholder_dc_cursor_color_format } dc_cursor_color_format ;
typedef enum cursor_lines_per_chunk { ____Placeholder_cursor_lines_per_chunk } cursor_lines_per_chunk ;


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

enum cursor_lines_per_chunk FUNC_0(
 unsigned int VAR_11,
 enum dc_cursor_color_format VAR_12)
{
 enum cursor_lines_per_chunk VAR_13 = VAR_1;

 if (VAR_12 == VAR_10)
  VAR_13 = VAR_1;
 else if (VAR_12 == VAR_5 ||
   VAR_12 == VAR_8 ||
   VAR_12 == VAR_9) {
  if (VAR_11 >= 1 && VAR_11 <= 32)
   VAR_13 = VAR_1;
  else if (VAR_11 >= 33 && VAR_11 <= 64)
   VAR_13 = VAR_4;
  else if (VAR_11 >= 65 && VAR_11 <= 128)
   VAR_13 = VAR_3;
  else if (VAR_11 >= 129 && VAR_11 <= 256)
   VAR_13 = VAR_2;
 } else if (VAR_12 == VAR_6 ||
     VAR_12 == VAR_7) {
  if (VAR_11 >= 1 && VAR_11 <= 16)
   VAR_13 = VAR_1;
  else if (VAR_11 >= 17 && VAR_11 <= 32)
   VAR_13 = VAR_4;
  else if (VAR_11 >= 33 && VAR_11 <= 64)
   VAR_13 = VAR_3;
  else if (VAR_11 >= 65 && VAR_11 <= 128)
   VAR_13 = VAR_2;
  else if (VAR_11 >= 129 && VAR_11 <= 256)
   VAR_13 = VAR_0;
 }

 return VAR_13;
}
