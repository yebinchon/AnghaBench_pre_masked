
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int binlogs; TYPE_4__** B; int volume_id; } ;
typedef TYPE_1__ volume_t ;
struct TYPE_8__ {long long size; int prefix; int fd_rdonly; } ;


 int FUNC_0 (TYPE_4__*,TYPE_4__*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (TYPE_4__**,int,int,int ) ;
 int FUNC_5 (TYPE_1__*) ;

void FUNC_6 (volume_t *VAR_1) {
  int VAR_2;
  long long VAR_3 = -1;
  for (VAR_2 = 0; VAR_2 < VAR_1->binlogs; VAR_2++) {
    if (VAR_3 < VAR_1->B[VAR_2]->size) {
      VAR_3 = VAR_1->B[VAR_2]->size;
    }
  }
  FUNC_4 (VAR_1->B, VAR_1->binlogs, sizeof (VAR_1->B[0]), VAR_0);

  if (VAR_1->binlogs <= 0 || VAR_3 != VAR_1->B[0]->size) {
    FUNC_3 ("volume %lld: Can't select binlog.\n", VAR_1->volume_id);
    FUNC_2 (1);
  }

  FUNC_5 (VAR_1);
  VAR_1->B[0]->prefix = 1;
  int VAR_4;
  for (VAR_4 = 1; VAR_4 < VAR_1->binlogs; VAR_4++) {
    if (!FUNC_0 (VAR_1->B[0], VAR_1->B[VAR_4])) {
      VAR_1->B[VAR_4]->prefix = 1;
    } else {
      VAR_1->B[VAR_4]->prefix = 0;
      FUNC_1 (VAR_1->B[VAR_4]->fd_rdonly);
      VAR_1->B[VAR_4]->fd_rdonly = -1;
    }
  }
}
