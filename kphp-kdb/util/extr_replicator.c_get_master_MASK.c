
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct remote_binlog {struct location_list_entry* first; } ;
struct location_list_entry {int flags; struct location_list_entry* next; } ;


 int FUNC_0 (struct remote_binlog*) ;

struct location_list_entry *FUNC_1 (struct remote_binlog *VAR_0) {
  FUNC_0 (VAR_0);

  struct location_list_entry *VAR_1;
  for (VAR_1 = VAR_0->first; VAR_1; VAR_1 = VAR_1->next) {
    if (VAR_1->flags & 1) {
      return VAR_1;
    }
  }
  return 0;
}
