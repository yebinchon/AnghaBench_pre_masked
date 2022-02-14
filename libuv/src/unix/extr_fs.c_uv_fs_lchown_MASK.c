
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uv_uid_t ;
typedef int uv_loop_t ;
typedef int uv_gid_t ;
struct TYPE_3__ {int gid; int uid; } ;
typedef TYPE_1__ uv_fs_t ;
typedef int uv_fs_cb ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_1(uv_loop_t* VAR_3,
                 uv_fs_t* VAR_4,
                 const char* VAR_5,
                 uv_uid_t VAR_6,
                 uv_gid_t VAR_7,
                 uv_fs_cb VAR_8) {
  FUNC_0(VAR_0);
  VAR_1;
  VAR_4->uid = VAR_6;
  VAR_4->gid = VAR_7;
  VAR_2;
}
