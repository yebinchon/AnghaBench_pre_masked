
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct item {int value_len; int value; } ;


 int FUNC_0 (struct item*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct item*,int) ;
 int VAR_3 ;
 int FUNC_3 (int ,int*,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int) ;

void FUNC_6 (struct item *VAR_4, int VAR_5, int *VAR_6) {
  if (VAR_4->value_len >= 0) {
    FUNC_4 (VAR_4->value, 4 * VAR_4->value_len);
    VAR_3 -= 4 * VAR_4->value_len;
  } else {
    FUNC_1 (FUNC_0 (VAR_4) == (VAR_0 | VAR_2));
    FUNC_2 (VAR_4, VAR_1 | VAR_2);
  }
  VAR_4->value_len = VAR_5;
  VAR_4->value = FUNC_5 (4 * VAR_5);
  FUNC_3 (VAR_4->value, VAR_6, 4 * VAR_5);
  VAR_3 += 4 * VAR_5;
}
