
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uv_loop_t ;
struct TYPE_6__ {int file_flags; } ;
struct TYPE_7__ {TYPE_1__ info; } ;
struct TYPE_8__ {TYPE_2__ fs; } ;
typedef TYPE_3__ uv_fs_t ;
typedef int * uv_fs_cb ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_3__*,char const*,char const*,int ) ;
 int FUNC_2 (int) ;

int FUNC_3(uv_loop_t* VAR_6,
                   uv_fs_t* VAR_7,
                   const char* VAR_8,
                   const char* VAR_9,
                   int VAR_10,
                   uv_fs_cb VAR_11) {
  int VAR_12;

  FUNC_0(VAR_2);

  if (VAR_10 & ~(VAR_3 |
                VAR_4 |
                VAR_5)) {
    return VAR_1;
  }

  VAR_12 = FUNC_1(VAR_7, VAR_8, VAR_9, VAR_11 != ((void*)0));

  if (VAR_12)
    return FUNC_2(VAR_12);

  VAR_7->fs.info.file_flags = VAR_10;
  VAR_0;
}
