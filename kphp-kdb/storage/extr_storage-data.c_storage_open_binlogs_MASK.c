
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int binlogs; TYPE_1__** B; } ;
typedef TYPE_2__ volume_t ;
struct TYPE_4__ {scalar_t__ fd_rdonly; int abs_filename; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;

void FUNC_3 (volume_t *VAR_1) {
  int VAR_2;
  for (VAR_2 = 0; VAR_2 < VAR_1->binlogs; VAR_2++) {
    if (VAR_1->B[VAR_2]->fd_rdonly < 0) {
      VAR_1->B[VAR_2]->fd_rdonly = FUNC_2 (VAR_1->B[VAR_2]->abs_filename, VAR_0);
      if (VAR_1->B[VAR_2]->fd_rdonly < 0) {
        FUNC_1 ("Couldn't open %s for reading. %m\n", VAR_1->B[VAR_2]->abs_filename);
        FUNC_0 (1);
      }
    }
  }
}
