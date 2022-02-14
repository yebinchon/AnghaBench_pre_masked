
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pp_hwmgr {int dummy; } ;
struct TYPE_3__ {int numEntries; } ;
typedef TYPE_1__ ATOM_PPLIB_VCE_State_Table ;
typedef int ATOM_PPLIB_POWERPLAYTABLE ;


 int * FUNC_0 (struct pp_hwmgr*) ;
 TYPE_1__* FUNC_1 (struct pp_hwmgr*,int const*) ;

__attribute__((used)) static int FUNC_2(
        struct pp_hwmgr *VAR_0)
{
 const ATOM_PPLIB_POWERPLAYTABLE *VAR_1 =
          FUNC_0(VAR_0);
 const ATOM_PPLIB_VCE_State_Table *VAR_2 =
        FUNC_1(VAR_0, VAR_1);

 if (VAR_2)
  return VAR_2->numEntries;

 return 0;
}
