
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value_data {int fields_mask; int* data; int zero_mask; } ;


 int VAR_0 ;
 struct value_data* FUNC_0 (int) ;
 int FUNC_1 (struct value_data*) ;

struct value_data *FUNC_2 (struct value_data *VAR_1, int VAR_2, int VAR_3) {
  struct value_data *VAR_4 = FUNC_0 (VAR_1->fields_mask & VAR_3);
  int VAR_5, *VAR_6 = VAR_1->data, *VAR_7 = VAR_4->data;
  VAR_4->zero_mask = VAR_1->zero_mask & VAR_3;
  for (VAR_5 = 1; VAR_5 < VAR_0; VAR_5 <<= 1) {
    if (VAR_4->fields_mask & VAR_5) {
      if (VAR_5 < 256) {
        *VAR_7++ = *VAR_6;
      } else {
        *(long long *) VAR_7 = *(long long *) VAR_6;
        VAR_7 += 2;
      }
    }
    if (VAR_1->fields_mask & VAR_5) {
      VAR_6 += VAR_5 < 256 ? 1 : 2;
    }
  }
  if (!VAR_2) {
    FUNC_1 (VAR_1);
  }
  return VAR_4;
}
