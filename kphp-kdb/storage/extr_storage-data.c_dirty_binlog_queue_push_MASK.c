
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int dirty; struct TYPE_5__* fsync_next; } ;
typedef TYPE_1__ storage_binlog_file_t ;


 TYPE_1__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2 (storage_binlog_file_t *VAR_3) {
  if (VAR_3->dirty) {
    return;
  }
  VAR_3->dirty = 1;
  FUNC_0 (&VAR_2);
  VAR_3->fsync_next = ((void*)0);
  if (VAR_0 == ((void*)0)) {
    VAR_0 = VAR_1 = VAR_3;
  } else {
    VAR_1 = VAR_1->fsync_next = VAR_3;
  }
  FUNC_1 (&VAR_2);
}
