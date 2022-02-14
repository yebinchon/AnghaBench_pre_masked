
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ st_dev; scalar_t__ st_ino; } ;
typedef TYPE_4__ uv_stat_t ;
struct TYPE_12__ {int file_flags; int new_pathw; } ;
struct TYPE_13__ {TYPE_2__ info; } ;
struct TYPE_11__ {int pathw; } ;
struct TYPE_15__ {scalar_t__ result; TYPE_3__ fs; TYPE_1__ file; } ;
typedef TYPE_5__ uv_fs_t ;


 scalar_t__ FUNC_0 (int ,int ,int) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_5__*,int ) ;
 int FUNC_3 (TYPE_5__*,int ,int ) ;
 int FUNC_4 (TYPE_5__*,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (int ,int ,TYPE_4__*) ;

__attribute__((used)) static void FUNC_6(uv_fs_t* VAR_5) {
  int VAR_6;
  int VAR_7;
  uv_stat_t VAR_8;
  uv_stat_t VAR_9;

  VAR_6 = VAR_5->fs.info.file_flags;

  if (VAR_6 & VAR_4) {
    FUNC_3(VAR_5, VAR_2, VAR_0);
    return;
  }

  VAR_7 = VAR_6 & VAR_3;

  if (FUNC_0(VAR_5->file.pathw, VAR_5->fs.info.new_pathw, VAR_7) != 0) {
    FUNC_2(VAR_5, 0);
    return;
  }

  FUNC_4(VAR_5, FUNC_1());
  if (VAR_5->result != VAR_1)
    return;


  if (FUNC_5(VAR_5->file.pathw, 0, &VAR_8) != 0 ||
      FUNC_5(VAR_5->fs.info.new_pathw, 0, &VAR_9) != 0) {
    return;
  }

  if (VAR_8.st_dev == VAR_9.st_dev &&
      VAR_8.st_ino == VAR_9.st_ino) {
    FUNC_2(VAR_5, 0);
  }
}
