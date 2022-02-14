
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uv_loop_t ;
struct TYPE_8__ {TYPE_4__* bufsml; int offset; void* fd_out; } ;
struct TYPE_9__ {TYPE_2__ info; } ;
struct TYPE_7__ {void* fd; } ;
struct TYPE_11__ {TYPE_3__ fs; TYPE_1__ file; } ;
typedef TYPE_5__ uv_fs_t ;
typedef int uv_fs_cb ;
typedef void* uv_file ;
typedef int int64_t ;
struct TYPE_10__ {size_t len; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_1(uv_loop_t* VAR_2, uv_fs_t* VAR_3, uv_file VAR_4,
    uv_file VAR_5, int64_t VAR_6, size_t VAR_7, uv_fs_cb VAR_8) {
  FUNC_0(VAR_1);
  VAR_3->file.fd = VAR_5;
  VAR_3->fs.info.fd_out = VAR_4;
  VAR_3->fs.info.offset = VAR_6;
  VAR_3->fs.info.bufsml[0].len = VAR_7;
  VAR_0;
}
