
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int mode; } ;
struct TYPE_10__ {TYPE_2__ info; } ;
struct TYPE_8__ {int pathw; } ;
struct TYPE_11__ {TYPE_3__ fs; TYPE_1__ file; } ;
typedef TYPE_4__ uv_fs_t ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int VAR_2 ;
 int FUNC_2 (TYPE_4__*,int ) ;
 int FUNC_3 (TYPE_4__*,int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_4(uv_fs_t* VAR_5) {
  DWORD VAR_6 = FUNC_0(VAR_5->file.pathw);

  if (VAR_6 == VAR_2) {
    FUNC_3(VAR_5, FUNC_1());
    return;
  }
  if (!(VAR_5->fs.info.mode & VAR_4) ||
      !(VAR_6 & VAR_1) ||
      (VAR_6 & VAR_0)) {
    FUNC_2(VAR_5, 0);
  } else {
    FUNC_3(VAR_5, VAR_3);
  }

}
