
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int new_pathw; } ;
struct TYPE_10__ {TYPE_2__ info; } ;
struct TYPE_8__ {int pathw; } ;
struct TYPE_11__ {TYPE_3__ fs; TYPE_1__ file; } ;
typedef TYPE_4__ uv_fs_t ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (TYPE_4__*,int ) ;
 int FUNC_3 (TYPE_4__*,int ) ;

__attribute__((used)) static void FUNC_4(uv_fs_t* VAR_1) {
  if (!FUNC_1(VAR_1->file.pathw, VAR_1->fs.info.new_pathw, VAR_0)) {
    FUNC_3(VAR_1, FUNC_0());
    return;
  }

  FUNC_2(VAR_1, 0);
}
