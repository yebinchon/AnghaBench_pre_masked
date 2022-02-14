
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pp_hwmgr {int dummy; } ;
struct TYPE_5__ {int usVCEStateTableOffset; } ;
struct TYPE_4__ {int ucNumEntries; } ;
typedef TYPE_1__ ATOM_Tonga_VCE_State_Table ;
typedef TYPE_2__ ATOM_Tonga_POWERPLAYTABLE ;


 TYPE_2__* FUNC_0 (struct pp_hwmgr*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct pp_hwmgr *VAR_0)
{
 const ATOM_Tonga_POWERPLAYTABLE *VAR_1 = FUNC_0(VAR_0);
 const ATOM_Tonga_VCE_State_Table *VAR_2;


 if (VAR_1 == ((void*)0))
  return 0;

 VAR_2 = (void *)VAR_1 +
   FUNC_1(VAR_1->usVCEStateTableOffset);

 return VAR_2->ucNumEntries;
}
