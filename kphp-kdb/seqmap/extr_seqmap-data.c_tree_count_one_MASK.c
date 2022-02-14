
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct item {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct item*) ;
 int FUNC_1 (struct item*) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_2 (struct item *VAR_3, int VAR_4[3]) {
  int VAR_5 = FUNC_1 (VAR_3);
  int VAR_6 = FUNC_0 (VAR_3) == VAR_2;
  if (VAR_5 == VAR_1) {
    VAR_4[0] ++;
    if (VAR_6) { VAR_4[2] ++; }
  } else if (VAR_5 == VAR_0) {
    VAR_4[0] --;
    if (VAR_6) { VAR_4[1] ++; }
  }
}
