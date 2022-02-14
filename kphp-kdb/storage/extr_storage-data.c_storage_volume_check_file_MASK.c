
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int binlogs; TYPE_1__** B; } ;
typedef TYPE_2__ volume_t ;
struct TYPE_4__ {scalar_t__ fd_wronly; size_t dir_id; } ;


 int * VAR_0 ;
 int FUNC_0 (int *,double,long long) ;

int FUNC_1 (volume_t *VAR_1, double VAR_2, long long VAR_3) {
  int VAR_4;
  for (VAR_4 = 0; VAR_4 < VAR_1->binlogs; VAR_4++) {
    if (VAR_1->B[VAR_4]->fd_wronly < 0) {
      return 0;
    }
  }
  for (VAR_4 = 0; VAR_4 < VAR_1->binlogs; VAR_4++) {
    if (!FUNC_0 (&VAR_0[VAR_1->B[VAR_4]->dir_id], VAR_2, VAR_3)) {
      return 0;
    }
  }
  return 1;
}
