
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int mrdb_state ;
typedef int mrdb_exemode ;
typedef int mrb_state ;
struct TYPE_6__ {int xm; } ;
typedef TYPE_1__ mrb_debug_context ;
struct TYPE_7__ {scalar_t__ (* func ) (int *,int *) ;} ;
typedef TYPE_2__ debug_command ;
typedef scalar_t__ dbgcmd_state ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* FUNC_0 (int *,int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *,int *) ;

__attribute__((used)) static mrdb_exemode
FUNC_5(mrb_state *VAR_2, mrb_debug_context *VAR_3)
{
  debug_command *VAR_4;
  dbgcmd_state VAR_5 = VAR_0;
  mrdb_state *VAR_6 = FUNC_2(VAR_2);

  FUNC_3(VAR_2, VAR_6);

  while (1) {
    VAR_4 = FUNC_0(VAR_2, VAR_6);
    FUNC_1(VAR_4);

    VAR_5 = VAR_4->func(VAR_2, VAR_6);

    if ((VAR_5 == VAR_0) || (VAR_5 == VAR_1)) break;
  }
  return VAR_3->xm;
}
