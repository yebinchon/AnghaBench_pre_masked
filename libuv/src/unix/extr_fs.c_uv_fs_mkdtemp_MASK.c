
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uv_loop_t ;
struct TYPE_3__ {int * path; } ;
typedef TYPE_1__ uv_fs_t ;
typedef int uv_fs_cb ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (char const*) ;

int FUNC_2(uv_loop_t* VAR_3,
                  uv_fs_t* VAR_4,
                  const char* VAR_5,
                  uv_fs_cb VAR_6) {
  FUNC_0(VAR_0);
  VAR_4->path = FUNC_1(VAR_5);
  if (VAR_4->path == ((void*)0))
    return VAR_2;
  VAR_1;
}
