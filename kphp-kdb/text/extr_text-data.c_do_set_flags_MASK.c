
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_set_flags_long {int local_id; int flags; } ;
struct lev_set_flags {int local_id; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,int,int,int,int ) ;
 void* FUNC_1 (scalar_t__,int,int) ;
 int FUNC_2 (int ,char*,int,...) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

int FUNC_3 (int VAR_5, int VAR_6, int VAR_7) {
  if (VAR_3 > 1) {
    FUNC_2 (VAR_2, "do_set_flags(%d,%d,%d):\n", VAR_5, VAR_6, VAR_7);
  }
  if (VAR_7 & -0x10000) {
    return -1;
  }
  int VAR_8 = FUNC_0 (VAR_5, VAR_6, ~VAR_7, VAR_7, 0);
  if (VAR_3 > 1) {
    FUNC_2 (VAR_2, "adjust_message returned %d\n", VAR_8);
  }
  if (VAR_8 < 0) {
    return VAR_8;
  }
  if ((VAR_8 & 1) || VAR_4) {
    if (VAR_7 & -0x100) {
      struct lev_set_flags_long *VAR_9 = FUNC_1 (VAR_1, sizeof (struct lev_set_flags_long), VAR_5);
      VAR_9->local_id = VAR_6;
      VAR_9->flags = VAR_7;
    } else {
      struct lev_set_flags *VAR_10 = FUNC_1 (VAR_0 + VAR_7, sizeof (struct lev_set_flags), VAR_5);
      VAR_10->local_id = VAR_6;
    }
  }
  return VAR_8 > 0;
}
