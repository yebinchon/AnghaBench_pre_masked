
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int binlogs; int volume_id; TYPE_1__** B; } ;
typedef TYPE_2__ volume_t ;
struct TYPE_4__ {scalar_t__ dir_id; int priority; } ;


 int VAR_0 ;

void FUNC_0 (volume_t *VAR_1) {
  int VAR_2, VAR_3, VAR_4, VAR_5[VAR_0];
  for (VAR_2 = 0; VAR_2 < VAR_1->binlogs; VAR_2++) {
    VAR_5[VAR_2] = VAR_2;
  }
  for (VAR_2 = 0; VAR_2 < VAR_1->binlogs; VAR_2++) {
    for (VAR_3 = VAR_2 + 1; VAR_3 < VAR_1->binlogs; VAR_3++) {
      if (VAR_1->B[VAR_5[VAR_2]]->dir_id > VAR_1->B[VAR_5[VAR_3]]->dir_id) {
        VAR_4 = VAR_5[VAR_2]; VAR_5[VAR_2] = VAR_5[VAR_3]; VAR_5[VAR_3] = VAR_4;
      }
    }
  }
  for (VAR_4 = 0; VAR_4 < VAR_1->binlogs; VAR_4++) {
    VAR_1->B[VAR_5[VAR_4]]->priority = (VAR_1->volume_id + VAR_4) % (VAR_1->binlogs);
  }
}
