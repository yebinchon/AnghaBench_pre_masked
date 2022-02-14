
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int binlogs; TYPE_3__** B; } ;
typedef TYPE_1__ volume_t ;
typedef scalar_t__ off_t ;
struct TYPE_5__ {int fd_wronly; scalar_t__ size; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int,scalar_t__) ;
 size_t FUNC_3 (int,void*,size_t,scalar_t__) ;
 int VAR_1 ;

int FUNC_4 (volume_t *VAR_2, void *VAR_3, size_t VAR_4, off_t VAR_5, off_t VAR_6) {
  int VAR_7 = 0, VAR_8;
  for (VAR_8 = 0; VAR_8 < VAR_2->binlogs; VAR_8++) {
    if (VAR_2->B[VAR_8]->fd_wronly >= 0) {
      if (FUNC_3 (VAR_2->B[VAR_8]->fd_wronly, VAR_3, VAR_4, VAR_5) != VAR_4) {
        FUNC_2 (VAR_2->B[VAR_8]->fd_wronly, VAR_6);
        VAR_2->B[VAR_8]->size = VAR_6;
        FUNC_0 (VAR_2->B[VAR_8]->fd_wronly);
        VAR_1++;
        VAR_2->B[VAR_8]->fd_wronly = -2;
      } else {
        off_t VAR_9 = VAR_4 + VAR_5;
        if (VAR_2->B[VAR_8]->size < VAR_9) {
          VAR_2->B[VAR_8]->size = VAR_9;
        }
        FUNC_1 (VAR_2->B[VAR_8]);
        VAR_7++;
      }
    }
  }
  if (!VAR_7) {
    return VAR_0;
  }

  return 0;
}
