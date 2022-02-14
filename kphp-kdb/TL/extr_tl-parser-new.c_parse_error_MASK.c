
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ pos; int line_pos; int line; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__ VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (char const*) ;

void FUNC_3 (const char *VAR_5) {
  if (VAR_4.pos > VAR_3) {
    VAR_3 = VAR_4.pos;
    VAR_1 = VAR_4.line;
    VAR_2 = VAR_4.line_pos;
    if (VAR_0) {
      FUNC_1 (VAR_0, FUNC_0 (VAR_0) + 1);
    }
    VAR_0 = FUNC_2 (VAR_5);
  }
}
