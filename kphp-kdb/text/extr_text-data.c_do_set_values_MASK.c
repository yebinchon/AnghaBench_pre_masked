
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value_data {int fields_mask; int zero_mask; int* data; } ;
struct lev_set_extra_fields {int local_id; int extra; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int,struct value_data*) ;
 struct lev_set_extra_fields* FUNC_1 (scalar_t__,int,int) ;
 scalar_t__ FUNC_2 (int) ;
 struct value_data* FUNC_3 (struct value_data*,int,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,char*,int,int,int,int,int) ;
 int FUNC_6 (int ,int*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_7 (int VAR_5, int VAR_6, struct value_data *VAR_7) {
  if (VAR_3 > 1) {
    FUNC_5 (VAR_2, "do_set_values(%d,%d,%d:%d,%d,...):\n", VAR_5, VAR_6, VAR_7->fields_mask, VAR_7->zero_mask, VAR_7->fields_mask ? VAR_7->data[0] : 0);
  }
  if (VAR_7->fields_mask != VAR_7->zero_mask || (VAR_7->fields_mask & ~VAR_1)) {
    return -1;
  }
  if (!(VAR_7->fields_mask & VAR_4)) {
    return 0;
  }
  if (FUNC_2 (VAR_5) < 0 || VAR_6 <= 0) {
    return -1;
  }
  VAR_7 = FUNC_3 (VAR_7, 1, VAR_4);
  int VAR_8 = 4 * FUNC_4 (VAR_7->fields_mask);
  struct lev_set_extra_fields *VAR_9 = FUNC_1 (VAR_0 + VAR_7->fields_mask, 12 + VAR_8, VAR_5);
  VAR_9->local_id = VAR_6;
  FUNC_6 (VAR_9->extra, VAR_7->data, VAR_8);
  return FUNC_0 (VAR_5, VAR_6, VAR_7) > 0;
}
