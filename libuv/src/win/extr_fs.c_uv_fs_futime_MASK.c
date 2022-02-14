
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uv_loop_t ;
struct TYPE_7__ {double atime; double mtime; } ;
struct TYPE_8__ {TYPE_2__ time; } ;
struct TYPE_6__ {int fd; } ;
struct TYPE_9__ {TYPE_3__ fs; TYPE_1__ file; } ;
typedef TYPE_4__ uv_fs_t ;
typedef int uv_fs_cb ;
typedef int uv_file ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_1(uv_loop_t* VAR_2, uv_fs_t* VAR_3, uv_file VAR_4, double VAR_5,
    double VAR_6, uv_fs_cb VAR_7) {
  FUNC_0(VAR_1);
  VAR_3->file.fd = VAR_4;
  VAR_3->fs.time.atime = VAR_5;
  VAR_3->fs.time.mtime = VAR_6;
  VAR_0;
}
