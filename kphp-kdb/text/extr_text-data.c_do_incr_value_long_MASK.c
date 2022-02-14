
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value_data {int data; scalar_t__ zero_mask; } ;
struct lev_incr_field_long {int local_id; long long value; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int,int,struct value_data*) ;
 struct lev_incr_field_long* FUNC_1 (scalar_t__,int,int) ;
 struct value_data* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ,char*,int,int,int,long long) ;
 int FUNC_5 (int *,long long*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_6 (int VAR_5, int VAR_6, int VAR_7, long long VAR_8) {
  if (VAR_3 > 1) {
    FUNC_4 (VAR_2, "do_incr_value_long(%d,%d,%d,%lld):\n", VAR_5, VAR_6, VAR_7, VAR_8);
  }
  if (FUNC_3 (VAR_5) < 0 || VAR_6 <= 0 || VAR_7 < 8 || VAR_7 >= 12) {
    return -1;
  }
  if (!((VAR_4 >> VAR_7) & 1)) {
    return 0;
  }
  struct lev_incr_field_long *VAR_9 = FUNC_1 (VAR_0 + VAR_7, 20, VAR_5);
  VAR_9->local_id = VAR_6;
  VAR_9->value = VAR_8;

  if (!(VAR_1 & (1 << VAR_7))) {
    return 1;
  }

  struct value_data *VAR_10 = FUNC_2 (1 << VAR_7);
  VAR_10->zero_mask = 0;
  FUNC_5 (&VAR_10->data, &VAR_8, 8);

  return FUNC_0 (VAR_5, VAR_6, VAR_10) > 0;
}
