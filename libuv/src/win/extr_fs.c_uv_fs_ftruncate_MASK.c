
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uv_loop_t ;
struct TYPE_7__ {int offset; } ;
struct TYPE_8__ {TYPE_2__ info; } ;
struct TYPE_6__ {int fd; } ;
struct TYPE_9__ {TYPE_3__ fs; TYPE_1__ file; } ;
typedef TYPE_4__ uv_fs_t ;
typedef int uv_fs_cb ;
typedef int uv_file ;
typedef int int64_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_1(uv_loop_t* VAR_2, uv_fs_t* VAR_3, uv_file VAR_4,
    int64_t VAR_5, uv_fs_cb VAR_6) {
  FUNC_0(VAR_1);
  VAR_3->file.fd = VAR_4;
  VAR_3->fs.info.offset = VAR_5;
  VAR_0;
}
