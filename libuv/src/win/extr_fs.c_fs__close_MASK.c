
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int fd; } ;
struct TYPE_7__ {scalar_t__ result; TYPE_1__ file; } ;
typedef TYPE_2__ uv_fs_t ;
struct uv__fd_info_s {scalar_t__ mapping; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;
 int VAR_3 ;
 int FUNC_2 (int,TYPE_2__*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_5 (int,struct uv__fd_info_s*) ;

void FUNC_6(uv_fs_t* VAR_5) {
  int VAR_6 = VAR_5->file.fd;
  int VAR_7;
  struct uv__fd_info_s VAR_8;

  FUNC_2(VAR_6, VAR_5);

  if (FUNC_5(VAR_6, &VAR_8)) {
    if (VAR_8.mapping != VAR_2) {
      FUNC_0(VAR_8.mapping);
    }
  }

  if (VAR_6 > 2)
    VAR_7 = FUNC_3(VAR_6);
  else
    VAR_7 = 0;




  if (VAR_7 == -1) {
    FUNC_4(VAR_4 == VAR_0);
    FUNC_1(VAR_5, VAR_3, VAR_1);
  } else {
    VAR_5->result = 0;
  }
}
