
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t dir_id; int st_fsync; } ;
typedef TYPE_1__ storage_binlog_file_t ;
struct TYPE_5__ {int st_fsync; } ;


 TYPE_3__* VAR_0 ;
 int FUNC_0 (int *,int) ;

void FUNC_1 (storage_binlog_file_t *VAR_1, int VAR_2) {
  FUNC_0 (&VAR_0[VAR_1->dir_id].st_fsync, VAR_2);
  FUNC_0 (&VAR_1->st_fsync, VAR_2);
}
