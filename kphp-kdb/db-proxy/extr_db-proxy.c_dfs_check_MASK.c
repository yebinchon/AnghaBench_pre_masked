
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fwd_entry {scalar_t__ flags; struct db_table* table_ref; struct fwd_entry* fwd_next; } ;
struct db_table {int height; struct fwd_entry* fwd_first; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

int FUNC_0 (struct db_table *VAR_2) {
  if (VAR_2->height != 1000) {
    return VAR_2->height;
  }
  VAR_2->height++;
  struct fwd_entry *VAR_3;
  int VAR_4 = 0;
  for (VAR_3 = VAR_2->fwd_first; VAR_3; VAR_3 = VAR_3->fwd_next) {
    if (VAR_3->flags == VAR_0) {
      int VAR_5 = FUNC_0 (VAR_3->table_ref);
      if (VAR_5 > VAR_4) {
 VAR_4 = VAR_5;
      }
      if (VAR_5 > VAR_1) {
 break;
      }
    }
  }
  if (VAR_4 != 999) {
    VAR_4++;
  }
  return VAR_2->height = VAR_4;
}
