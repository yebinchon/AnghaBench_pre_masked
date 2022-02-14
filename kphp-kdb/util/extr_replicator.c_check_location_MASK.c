
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct remote_binlog {char* binlog_tag; struct location_list_entry* first; } ;
struct location_list_entry {int flags; char* location; struct location_list_entry* next; } ;


 int FUNC_0 (struct remote_binlog*) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_0 ;

int FUNC_2 (struct remote_binlog *VAR_1) {
  FUNC_0 (VAR_1);

  int VAR_2 = 0, VAR_3 = 0;
  struct location_list_entry *VAR_4;
  for (VAR_4 = VAR_1->first; VAR_4; VAR_4 = VAR_4->next) {
    if (VAR_4->flags & 2) {
      VAR_2++;
    }
    if (VAR_4->flags & 1) {
      VAR_3++;
    }
  }

  if (VAR_2 > 1) {
    FUNC_1 (VAR_0, "error: binlog %s has %d local locations:", VAR_1->binlog_tag, VAR_2);
    for (VAR_4 = VAR_1->first; VAR_4; VAR_4 = VAR_4->next) {
      if (VAR_4->flags & 2) {
        FUNC_1 (VAR_0, " %s", VAR_4->location);
      }
    }
    FUNC_1 (VAR_0, "\n");
    return 1;
  }

  if (!VAR_3) {
    FUNC_1 (VAR_0, "error: binlog %s has no master location\n", VAR_1->binlog_tag);
    return 1;
  }

  if (VAR_3 > 1) {
    FUNC_1 (VAR_0, "error: binlog %s has %d master locations:", VAR_1->binlog_tag, VAR_3);
    for (VAR_4 = VAR_1->first; VAR_4; VAR_4 = VAR_4->next) {
      if (VAR_4->flags & 1) {
        FUNC_1 (VAR_0, " %s", VAR_4->location);
      }
    }
    FUNC_1 (VAR_0, "\n");
    return 1;
  }

  return 0;
}
