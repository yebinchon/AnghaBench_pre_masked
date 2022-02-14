
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ dir_handle; int * dirw; int * path; int * short_filew; int * filew; } ;
typedef TYPE_1__ uv_fs_event_t ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

int FUNC_4(uv_fs_event_t* VAR_1) {
  if (!FUNC_3(VAR_1))
    return 0;

  if (VAR_1->dir_handle != VAR_0) {
    FUNC_0(VAR_1->dir_handle);
    VAR_1->dir_handle = VAR_0;
  }

  FUNC_2(VAR_1);

  if (VAR_1->filew) {
    FUNC_1(VAR_1->filew);
    VAR_1->filew = ((void*)0);
  }

  if (VAR_1->short_filew) {
    FUNC_1(VAR_1->short_filew);
    VAR_1->short_filew = ((void*)0);
  }

  if (VAR_1->path) {
    FUNC_1(VAR_1->path);
    VAR_1->path = ((void*)0);
  }

  if (VAR_1->dirw) {
    FUNC_1(VAR_1->dirw);
    VAR_1->dirw = ((void*)0);
  }

  return 0;
}
