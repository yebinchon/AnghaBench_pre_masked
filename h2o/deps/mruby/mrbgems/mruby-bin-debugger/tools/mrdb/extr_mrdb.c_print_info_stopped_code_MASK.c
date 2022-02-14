
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_5__ {TYPE_3__* dbg; int srcpath; } ;
typedef TYPE_1__ mrdb_state ;
typedef int mrb_state ;
struct TYPE_6__ {int prvline; int prvfile; } ;


 char* FUNC_0 (int *,TYPE_1__*,int ,int ) ;
 int FUNC_1 (int *,TYPE_3__*,char*,int ,int ) ;
 int FUNC_2 (int *,char*) ;

__attribute__((used)) static void
FUNC_3(mrb_state *VAR_0, mrdb_state *VAR_1)
{
  char* VAR_2 = FUNC_0(VAR_0, VAR_1, VAR_1->srcpath, VAR_1->dbg->prvfile);
  uint16_t VAR_3 = VAR_1->dbg->prvline;
  if (VAR_2 != ((void*)0)) {
    FUNC_1(VAR_0, VAR_1->dbg, VAR_2, VAR_3, VAR_3);
    FUNC_2(VAR_0, VAR_2);
  }
}
