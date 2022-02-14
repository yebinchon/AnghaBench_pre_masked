
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {size_t dir_id; int st_read; } ;
typedef TYPE_1__ storage_binlog_file_t ;
struct TYPE_9__ {scalar_t__ refcnt; TYPE_1__* B; } ;
typedef TYPE_2__ metafile_t ;
struct TYPE_10__ {int st_read; } ;


 TYPE_7__* VAR_0 ;
 int FUNC_0 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,int) ;

void FUNC_3 (metafile_t *VAR_1, int VAR_2) {
  storage_binlog_file_t *VAR_3 = VAR_1->B;
  FUNC_2 (&VAR_0[VAR_3->dir_id].st_read, VAR_2);
  FUNC_2 (&VAR_3->st_read, VAR_2);
  if (!VAR_2) {
    FUNC_0 (VAR_3, VAR_1);
    if (VAR_1->refcnt <= 0) {
      FUNC_1 (VAR_1);
    }
  }
}
