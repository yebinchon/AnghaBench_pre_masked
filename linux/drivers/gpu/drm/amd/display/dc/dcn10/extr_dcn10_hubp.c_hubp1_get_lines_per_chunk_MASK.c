
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

__attribute__((used)) static enum cursor_lines_per_chunk FUNC_0(
  unsigned int VAR_5,
  enum dc_cursor_color_format VAR_6)
{
 enum cursor_lines_per_chunk VAR_7;

 if (VAR_6 == VAR_4)

  VAR_7 = VAR_0;
 else if (VAR_5 <= 32)
  VAR_7 = VAR_0;
 else if (VAR_5 <= 64)
  VAR_7 = VAR_3;
 else if (VAR_5 <= 128)
  VAR_7 = VAR_2;
 else
  VAR_7 = VAR_1;

 return VAR_7;
}
