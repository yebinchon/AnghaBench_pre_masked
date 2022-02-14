
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uv_loop_t ;
struct TYPE_3__ {int flags; } ;
typedef TYPE_1__ uv_fs_t ;
typedef int uv_fs_cb ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

int FUNC_1(uv_loop_t* VAR_7,
                   uv_fs_t* VAR_8,
                   const char* VAR_9,
                   const char* VAR_10,
                   int VAR_11,
                   uv_fs_cb VAR_12) {
  FUNC_0(VAR_0);

  if (VAR_11 & ~(VAR_4 |
                VAR_5 |
                VAR_6)) {
    return VAR_3;
  }

  VAR_1;
  VAR_8->flags = VAR_11;
  VAR_2;
}
