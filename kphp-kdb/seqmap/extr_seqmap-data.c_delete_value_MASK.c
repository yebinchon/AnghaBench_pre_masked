
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct item {int value_len; int value; } ;


 int FUNC_0 (struct item*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct item*,int) ;
 int FUNC_3 (struct item*) ;
 int VAR_5 ;
 int FUNC_4 (int ,int) ;

void FUNC_5 (struct item *VAR_6) {
  if (VAR_6->value_len >= 0) {
    if (FUNC_0 (VAR_6) == (VAR_1 | VAR_3)) {
      FUNC_4 (VAR_6->value, 4 * VAR_6->value_len);
      VAR_5 -= 4 * VAR_6->value_len;
      VAR_6->value_len = -1;
      FUNC_2 (VAR_6, VAR_0 | VAR_3);
    } else if (FUNC_0 (VAR_6) == (VAR_1 | VAR_2)) {
      FUNC_3 (VAR_6);
    } else {
      FUNC_1 (FUNC_0 (VAR_6) == (VAR_4 | VAR_2));
      FUNC_4 (VAR_6->value, 4 * VAR_6->value_len);
      VAR_5 -= 4 * VAR_6->value_len;
      VAR_6->value_len = -1;
      FUNC_2 (VAR_6, VAR_0 | VAR_2);
    }
  }
}
