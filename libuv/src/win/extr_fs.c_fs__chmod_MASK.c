
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int mode; } ;
struct TYPE_9__ {TYPE_2__ info; } ;
struct TYPE_7__ {int pathw; } ;
struct TYPE_10__ {TYPE_3__ fs; TYPE_1__ file; } ;
typedef TYPE_4__ uv_fs_t ;


 int FUNC_0 (TYPE_4__*,int) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(uv_fs_t* VAR_0) {
  int VAR_1 = FUNC_1(VAR_0->file.pathw, VAR_0->fs.info.mode);
  FUNC_0(VAR_0, VAR_1);
}
