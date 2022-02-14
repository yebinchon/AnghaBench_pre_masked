
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int file_flags; int * new_pathw; } ;
struct TYPE_10__ {TYPE_1__ info; } ;
struct TYPE_11__ {int * pathw; } ;
struct TYPE_12__ {TYPE_2__ fs; TYPE_3__ file; } ;
typedef TYPE_4__ uv_fs_t ;
typedef int WCHAR ;


 scalar_t__ FUNC_0 (int *,int *,int) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_4__*,int ) ;
 int FUNC_3 (TYPE_4__*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (TYPE_4__*,int *,int *) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_5(uv_fs_t* VAR_6) {
  WCHAR* VAR_7;
  WCHAR* VAR_8;
  int VAR_9;
  int VAR_10;

  VAR_7 = VAR_6->file.pathw;
  VAR_8 = VAR_6->fs.info.new_pathw;

  if (VAR_6->fs.info.file_flags & VAR_4) {
    FUNC_4(VAR_6, VAR_7, VAR_8);
    return;
  }

  if (VAR_6->fs.info.file_flags & VAR_3)
    VAR_9 = VAR_2 | VAR_5;
  else
    VAR_9 = VAR_5;

  if (FUNC_0(VAR_8, VAR_7, VAR_9)) {
    FUNC_2(VAR_6, 0);
    return;
  }




  VAR_10 = FUNC_1();
  if (VAR_10 == VAR_0 &&
      VAR_9 & VAR_1) {



    VAR_5 = 0;
    FUNC_5(VAR_6);
  } else {
    FUNC_3(VAR_6, VAR_10);
  }
}
