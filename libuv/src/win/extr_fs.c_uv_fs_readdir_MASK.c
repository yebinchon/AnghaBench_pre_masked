
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uv_loop_t ;
struct TYPE_5__ {TYPE_2__* ptr; } ;
typedef TYPE_1__ uv_fs_t ;
typedef int uv_fs_cb ;
struct TYPE_6__ {scalar_t__ dir_handle; int * dirents; } ;
typedef TYPE_2__ uv_dir_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_1(uv_loop_t* VAR_4,
                  uv_fs_t* VAR_5,
                  uv_dir_t* VAR_6,
                  uv_fs_cb VAR_7) {
  FUNC_0(VAR_3);

  if (VAR_6 == ((void*)0) ||
      VAR_6->dirents == ((void*)0) ||
      VAR_6->dir_handle == VAR_0) {
    return VAR_2;
  }

  VAR_5->ptr = VAR_6;
  VAR_1;
}
