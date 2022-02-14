
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pp_hwmgr {int dummy; } ;
struct TYPE_5__ {int ucTableFormatRevision; } ;
struct TYPE_7__ {scalar_t__ ucNumStates; int usStateArrayOffset; TYPE_1__ sHeader; } ;
struct TYPE_6__ {scalar_t__ ucNumEntries; } ;
typedef TYPE_2__ StateArray ;
typedef TYPE_3__ ATOM_PPLIB_POWERPLAYTABLE ;


 TYPE_3__* FUNC_0 (struct pp_hwmgr*) ;
 scalar_t__ FUNC_1 (int ) ;

int FUNC_2(struct pp_hwmgr *VAR_0,
         unsigned long *VAR_1)
{
 const StateArray *VAR_2;
 const ATOM_PPLIB_POWERPLAYTABLE *VAR_3 = FUNC_0(VAR_0);

 if (VAR_3 == ((void*)0))
  return -1;

 if (VAR_3->sHeader.ucTableFormatRevision >= 6) {
  VAR_2 = (StateArray *)(((unsigned long)VAR_3) +
     FUNC_1(VAR_3->usStateArrayOffset));

  *VAR_1 = (unsigned long)(VAR_2->ucNumEntries);
 } else
  *VAR_1 = (unsigned long)(VAR_3->ucNumStates);

 return 0;
}
