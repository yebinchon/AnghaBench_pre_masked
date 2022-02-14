
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int fd; } ;
struct TYPE_7__ {scalar_t__ result; int statbuf; int * ptr; TYPE_1__ file; } ;
typedef TYPE_2__ uv_fs_t ;
typedef scalar_t__ HANDLE ;


 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (int,TYPE_2__*) ;
 scalar_t__ FUNC_3 (scalar_t__,int *,int ) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(uv_fs_t* VAR_2) {
  int VAR_3 = VAR_2->file.fd;
  HANDLE VAR_4;

  FUNC_2(VAR_3, VAR_2);

  VAR_4 = FUNC_4(VAR_3);

  if (VAR_4 == VAR_1) {
    FUNC_1(VAR_2, VAR_0);
    return;
  }

  if (FUNC_3(VAR_4, &VAR_2->statbuf, 0) != 0) {
    FUNC_1(VAR_2, FUNC_0());
    return;
  }

  VAR_2->ptr = &VAR_2->statbuf;
  VAR_2->result = 0;
}
