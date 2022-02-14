
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int binlogs; TYPE_2__** B; } ;
typedef TYPE_3__ volume_t ;
struct TYPE_5__ {scalar_t__ fails; } ;
struct TYPE_6__ {scalar_t__ fd_wronly; TYPE_1__ st_fsync; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0 (volume_t *VAR_1) {
  int VAR_2;
  for (VAR_2 = 0; VAR_2 < VAR_1->binlogs; VAR_2++) {
    if (VAR_1->B[VAR_2]->fd_wronly >= 0 && VAR_1->B[VAR_2]->st_fsync.fails == 0) {
      return 0;
    }
  }
  return VAR_0;
}
