
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value_data {int fields_mask; int zero_mask; int* data; } ;


 int VAR_0 ;
 struct value_data* FUNC_0 (int) ;
 int FUNC_1 (struct value_data*) ;

__attribute__((used)) static struct value_data *FUNC_2 (struct value_data *VAR_1, struct value_data *VAR_2, int VAR_3, int VAR_4) {
  int VAR_5;
  struct value_data *VAR_6;
  int *VAR_7, *VAR_8, *VAR_9;

  VAR_3 &= VAR_2->fields_mask;
  if ((VAR_3 | VAR_1->fields_mask) != VAR_1->fields_mask) {
    VAR_6 = FUNC_0 (VAR_3 | VAR_1->fields_mask);
  } else {
    VAR_6 = VAR_1;
  }
  if (VAR_4) {
    VAR_6->zero_mask = (VAR_3 & VAR_2->zero_mask) | VAR_1->zero_mask;
  } else {
    VAR_6->zero_mask = VAR_1->zero_mask;
  }

  VAR_9 = VAR_6->data;
  VAR_7 = VAR_1->data;
  VAR_8 = VAR_2->data;

  for (VAR_5 = 1; VAR_5 < VAR_0; VAR_5 <<= 1) {
    if (VAR_3 & VAR_5) {
      if ((VAR_2->zero_mask & VAR_5) || !(VAR_1->fields_mask & VAR_5)) {
        if (VAR_5 < 256) {
          *VAR_9++ = *VAR_8;
        } else {
          *(long long *) VAR_9 = *(long long *) VAR_8;
          VAR_9 += 2;
        }
      } else {
        if (VAR_5 < 256) {
          *VAR_9++ = *VAR_8 + *VAR_7;
        } else {
          *(long long *) VAR_9 = *(long long *) VAR_8 + *(long long *) VAR_7;
          VAR_9 += 2;
        }
      }
    } else if (VAR_1->fields_mask & VAR_5) {
      if (VAR_5 < 256) {
        *VAR_9++ = *VAR_7;
      } else {
        *(long long *) VAR_9 = *(long long *) VAR_7;
        VAR_9 += 2;
      }
    }

    if (VAR_1->fields_mask & VAR_5) {
      VAR_7 += VAR_5 < 256 ? 1 : 2;
    }

    if (VAR_2->fields_mask & VAR_5) {
      VAR_8 += VAR_5 < 256 ? 1 : 2;
    }
  }
  if (VAR_6 != VAR_1) {
    FUNC_1 (VAR_1);
  }

  return VAR_6;
}
