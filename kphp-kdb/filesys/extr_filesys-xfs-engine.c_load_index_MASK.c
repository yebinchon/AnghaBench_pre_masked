
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* kfs_file_handle_t ;
struct TYPE_5__ {TYPE_1__* info; int fd; } ;
struct TYPE_4__ {int filename; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int,...) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_4 (kfs_file_handle_t VAR_1) {
  if (VAR_1 == ((void*)0)) {
    return 0;
  }
  int VAR_2 = FUNC_3 (VAR_1->fd, VAR_0);
  if (VAR_2 < 0) {
    FUNC_1 ("tar_unpack (%s, %s) returns error code %d.\n", VAR_1->info->filename, VAR_0, VAR_2);
    FUNC_0 (1);
  }
  VAR_2 = FUNC_2 (1);
  if (VAR_2 < 0) {
    FUNC_1 ("load_binlogpos () returns error code %d.\n", VAR_2);
    FUNC_0 (1);
  }
  return 0;
}
