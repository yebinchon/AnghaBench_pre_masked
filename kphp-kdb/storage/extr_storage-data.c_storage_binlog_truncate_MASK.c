
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int binlogs; TYPE_1__** B; } ;
typedef TYPE_2__ volume_t ;
typedef int off_t ;
struct TYPE_4__ {scalar_t__ fd_wronly; } ;


 int FUNC_0 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_1 (volume_t *VAR_0, off_t VAR_1) {
  int VAR_2;
  for (VAR_2 = 0; VAR_2 < VAR_0->binlogs; VAR_2++) {
    if (VAR_0->B[VAR_2]->fd_wronly >= 0) {
      FUNC_0 (VAR_0->B[VAR_2]->fd_wronly, VAR_1);
    }
  }
}
