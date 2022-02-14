
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int pathw; } ;
struct TYPE_7__ {int new_pathw; } ;
struct TYPE_8__ {TYPE_1__ info; } ;
struct TYPE_10__ {scalar_t__ result; TYPE_3__ file; TYPE_2__ fs; } ;
typedef TYPE_4__ uv_fs_t ;
typedef scalar_t__ DWORD ;


 scalar_t__ FUNC_0 (int ,int ,int *) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_4__*,int ) ;

__attribute__((used)) static void FUNC_3(uv_fs_t* VAR_0) {
  DWORD VAR_1 = FUNC_0(VAR_0->fs.info.new_pathw, VAR_0->file.pathw, ((void*)0));
  if (VAR_1 == 0) {
    FUNC_2(VAR_0, FUNC_1());
  } else {
    VAR_0->result = 0;
  }
}
