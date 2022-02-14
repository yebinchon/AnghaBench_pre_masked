
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct item {int key_len; int value_len; int value; int key; } ;


 int* VAR_0 ;
 int VAR_1 ;
 scalar_t__* VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (int*,int ,int) ;

int FUNC_1 (struct item *VAR_6) {
  if (VAR_5 < VAR_3 && VAR_2[VAR_5] == VAR_4) {
    VAR_5 ++;
    VAR_4 ++;
    if (2 + VAR_6->key_len + VAR_6->value_len < VAR_1) {
      VAR_0[0] = VAR_6->key_len;
      FUNC_0 (VAR_0 + 1, VAR_6->key, 4 * VAR_6->key_len);
      VAR_0 += (1 + VAR_6->key_len);
      VAR_0[0] = VAR_6->value_len;
      FUNC_0 (VAR_0 + 1, VAR_6->value, 4 * VAR_6->value_len);
      VAR_0 += (1 + VAR_6->value_len);
      VAR_1 -= (2 + VAR_6->key_len + VAR_6->value_len);
      return 0;
    } else {
      VAR_3 = VAR_5;
      return -1;
    }
  } else {
    VAR_4 ++;
    return 0;
  }
}
