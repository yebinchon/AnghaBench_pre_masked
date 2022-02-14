
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* kfs_file_handle_t ;
struct TYPE_5__ {TYPE_1__* info; int fd; } ;
struct TYPE_4__ {int filename; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 long long VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_4 (char*,int,...) ;
 int FUNC_5 (int ,int*,int) ;
 int FUNC_6 (char*,int,char*,char const*) ;
 int VAR_9 ;
 int FUNC_7 (scalar_t__,int*,int) ;

void FUNC_8 (kfs_file_handle_t VAR_10, const char *VAR_11) {
  static int VAR_12[5];
  if (!VAR_10) {
    if (!VAR_4) {
      static char VAR_13[1000];
      FUNC_6 (VAR_13, 1000, "%s.000000", VAR_11);
      VAR_5 = FUNC_4 (VAR_13, VAR_2 | VAR_1 | VAR_0, 0660);
      if (VAR_5 < 0) {
        FUNC_3 (VAR_9, "Error opening index: %m\n");
        FUNC_2 (1);
      }
      VAR_12[0] = VAR_3;
      VAR_12[1] = 0;
      VAR_12[2] = 0;
      VAR_12[3] = 0;
      VAR_12[4] = 0;
      FUNC_0 (FUNC_7 (VAR_5, VAR_12, 20) == 20);
    }
    return;
  }
  FUNC_0 (FUNC_5 (VAR_10->fd, VAR_12, 20) == 20);
  if (VAR_12[0] != VAR_3) {
    FUNC_3 (VAR_9, "Index is not from rpc-proxy\n");
    FUNC_2 (3);
  }
  VAR_7 = *(long long *)(VAR_12 + 1);
  VAR_6 = VAR_12[3];
  VAR_8 = VAR_12[4];
  FUNC_1 (VAR_10->fd);
  if (!VAR_4) {
    VAR_5 = FUNC_4 (VAR_10->info->filename, VAR_2);
  }
}
