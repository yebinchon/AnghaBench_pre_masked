
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value_data {int fields_mask; scalar_t__ zero_mask; } ;


 int FUNC_0 (int) ;
 struct value_data* FUNC_1 (int) ;

struct value_data *FUNC_2 (int VAR_0) {
  struct value_data *VAR_1 = FUNC_1 (4 + 4 * FUNC_0 (VAR_0));
  VAR_1->fields_mask = VAR_0;
  VAR_1->zero_mask = 0;
  return VAR_1;
}
