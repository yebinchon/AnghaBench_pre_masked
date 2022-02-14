
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uv_loop_t ;
struct TYPE_6__ {int file_flags; int mode; } ;
struct TYPE_7__ {TYPE_1__ info; } ;
struct TYPE_8__ {TYPE_2__ fs; } ;
typedef TYPE_3__ uv_fs_t ;
typedef int * uv_fs_cb ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_3__*,char const*,int *,int ) ;
 int FUNC_2 (int) ;

int FUNC_3(uv_loop_t* VAR_2, uv_fs_t* VAR_3, const char* VAR_4, int VAR_5,
    int VAR_6, uv_fs_cb VAR_7) {
  int VAR_8;

  FUNC_0(VAR_1);
  VAR_8 = FUNC_1(VAR_3, VAR_4, ((void*)0), VAR_7 != ((void*)0));
  if (VAR_8) {
    return FUNC_2(VAR_8);
  }

  VAR_3->fs.info.file_flags = VAR_5;
  VAR_3->fs.info.mode = VAR_6;
  VAR_0;
}
