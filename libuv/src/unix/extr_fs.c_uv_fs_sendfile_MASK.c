
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uv_loop_t ;
struct TYPE_5__ {TYPE_1__* bufsml; int off; void* file; void* flags; } ;
typedef TYPE_2__ uv_fs_t ;
typedef int uv_fs_cb ;
typedef void* uv_file ;
typedef int int64_t ;
struct TYPE_4__ {size_t len; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_1(uv_loop_t* VAR_2,
                   uv_fs_t* VAR_3,
                   uv_file VAR_4,
                   uv_file VAR_5,
                   int64_t VAR_6,
                   size_t VAR_7,
                   uv_fs_cb VAR_8) {
  FUNC_0(VAR_1);
  VAR_3->flags = VAR_5;
  VAR_3->file = VAR_4;
  VAR_3->off = VAR_6;
  VAR_3->bufsml[0].len = VAR_7;
  VAR_0;
}
