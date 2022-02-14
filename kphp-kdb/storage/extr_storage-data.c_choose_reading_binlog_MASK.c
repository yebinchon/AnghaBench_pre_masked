
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int binlogs; TYPE_2__** B; } ;
typedef TYPE_1__ volume_t ;
struct TYPE_13__ {int dir_id; scalar_t__ fd_rdonly; long long size; } ;
typedef TYPE_2__ storage_binlog_file_t ;
typedef TYPE_2__* (* fcmp_t ) (scalar_t__,TYPE_2__*,TYPE_2__*) ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*,long long) ;
 int VAR_1 ;
 TYPE_2__* FUNC_1 (scalar_t__,TYPE_2__*,TYPE_2__*) ;

storage_binlog_file_t *FUNC_2 (volume_t *VAR_2, long long VAR_3, long long VAR_4, int VAR_5) {
  int VAR_6;
  storage_binlog_file_t *VAR_7 = ((void*)0);
  for (VAR_6 = 0; VAR_6 < VAR_2->binlogs; VAR_6++) {
    if (!((1 << VAR_2->B[VAR_6]->dir_id) & VAR_5) && VAR_2->B[VAR_6]->fd_rdonly >= 0 && VAR_2->B[VAR_6]->size >= VAR_4 && !FUNC_0 (VAR_2->B[VAR_6], VAR_3)) {
      VAR_7 = VAR_7 ? (* (fcmp_t *) VAR_0)(VAR_0 + 1, VAR_7, VAR_2->B[VAR_6]) : VAR_2->B[VAR_6];
    }
  }
  if (VAR_7 == ((void*)0)) {
    VAR_1++;
  }
  return VAR_7;
}
