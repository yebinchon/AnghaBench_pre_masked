
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int filename; int fd; } ;
typedef TYPE_1__ file_t ;


 int FUNC_0 (char*,int ,int,long long) ;
 int FUNC_1 (int ,void*,int,long long) ;

int FUNC_2 (file_t *VAR_0, void *VAR_1, int VAR_2, long long VAR_3) {
  if (VAR_2 != FUNC_1 (VAR_0->fd, VAR_1, VAR_2, VAR_3)) {
    FUNC_0 ("pread (%s, %d, %lld) failed. %m\n", VAR_0->filename, VAR_2, VAR_3);
    return -1;
  }
  return 0;
}
