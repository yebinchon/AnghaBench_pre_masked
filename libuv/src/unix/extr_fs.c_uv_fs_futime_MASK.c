
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uv_loop_t ;
struct TYPE_3__ {double atime; double mtime; int file; } ;
typedef TYPE_1__ uv_fs_t ;
typedef int uv_fs_cb ;
typedef int uv_file ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;

int FUNC_1(uv_loop_t* VAR_2,
                 uv_fs_t* VAR_3,
                 uv_file VAR_4,
                 double VAR_5,
                 double VAR_6,
                 uv_fs_cb VAR_7) {
  FUNC_0(VAR_0);
  VAR_3->file = VAR_4;
  VAR_3->atime = VAR_5;
  VAR_3->mtime = VAR_6;
  VAR_1;
}
