
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int mrb_irep_debug_info_line ;
typedef int mrb_debug_line_type ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static mrb_debug_line_type
FUNC_0(const uint16_t *VAR_2, size_t VAR_3)
{
  size_t VAR_4 = 0;
  int VAR_5 = -1;
  size_t VAR_6;
  for (VAR_6 = 0; VAR_6 < VAR_3; ++VAR_6) {
    if (VAR_2[VAR_6] != VAR_5) {
      ++VAR_4;
    }
  }
  return (sizeof(uint16_t) * VAR_3) <= (sizeof(mrb_irep_debug_info_line) * VAR_4)
      ? VAR_0 : VAR_1;
}
