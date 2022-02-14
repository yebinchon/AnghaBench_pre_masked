
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pos; int len; int* text; scalar_t__ line_pos; int line; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;

char FUNC_0 (void) {
  if (VAR_1.pos < VAR_1.len - 1) {
    VAR_0 = VAR_1.text[++VAR_1.pos];
  } else {
    VAR_0 = 0;
  }
  if (VAR_0 == 10) {
    VAR_1.line ++;
    VAR_1.line_pos = 0;
  } else {
    if (VAR_0) {
      VAR_1.line_pos ++;
    }
  }
  return VAR_0;
}
