
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* fsync_next; scalar_t__ dirty; } ;
typedef TYPE_1__ storage_binlog_file_t ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

storage_binlog_file_t *FUNC_2 (void) {
  storage_binlog_file_t *VAR_2 = ((void*)0);
  FUNC_0 (&VAR_1);
  if (VAR_0) {
    VAR_2 = VAR_0;
    VAR_0 = VAR_0->fsync_next;
    VAR_2->dirty = 0;
    VAR_2->fsync_next = ((void*)0);
  }
  FUNC_1 (&VAR_1);
  return VAR_2;
}
