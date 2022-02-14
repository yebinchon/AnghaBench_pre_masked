
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrdb_state ;
typedef int mrb_state ;
typedef scalar_t__ mrb_bool ;
typedef int dbgcmd_state ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int *,int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;

dbgcmd_state
FUNC_2(mrb_state *VAR_5, mrdb_state *VAR_6)
{
  mrb_bool VAR_7 = VAR_1;

  VAR_7 = FUNC_0(VAR_5, VAR_6, VAR_4);
  if (VAR_7 != VAR_2) {
    FUNC_1(VAR_5, VAR_6, VAR_3);
  }
  return VAR_0;
}
