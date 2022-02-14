
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* kfs_file_handle_t ;
struct TYPE_4__ {int fd; scalar_t__ info; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_1__*) ;

int FUNC_4 (kfs_file_handle_t VAR_0, int VAR_1) {
  if (!VAR_0) {
    return 0;
  }
  if (VAR_0->fd >= 0) {
    if (VAR_1) {
      FUNC_0 (FUNC_1 (VAR_0->fd) >= 0);
    }
    VAR_0->fd = -1;
  }
  if (VAR_0->info) {
    FUNC_2 (VAR_0->info);
    VAR_0->info = 0;
  }
  FUNC_3 (VAR_0);
  return 0;
}
