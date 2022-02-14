
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
struct TYPE_6__ {int * dirents; int * dir; } ;
typedef TYPE_2__ uv_dir_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_1(uv_loop_t* VAR_3,
                  uv_fs_t* VAR_4,
                  uv_dir_t* VAR_5,
                  uv_fs_cb VAR_6) {
  FUNC_0(VAR_1);

  if (VAR_5 == ((void*)0) || VAR_5->dir == ((void*)0) || VAR_5->dirents == ((void*)0))
    return VAR_2;

  VAR_4->ptr = VAR_5;
  VAR_0;
}
