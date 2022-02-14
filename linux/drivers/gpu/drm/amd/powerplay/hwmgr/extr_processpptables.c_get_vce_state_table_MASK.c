
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct pp_hwmgr {int dummy; } ;
typedef int ATOM_PPLIB_VCE_State_Table ;
typedef int ATOM_PPLIB_POWERPLAYTABLE ;


 scalar_t__ FUNC_0 (struct pp_hwmgr*,int const*) ;

__attribute__((used)) static const ATOM_PPLIB_VCE_State_Table *FUNC_1(
      struct pp_hwmgr *VAR_0,
      const ATOM_PPLIB_POWERPLAYTABLE *VAR_1)
{
 uint16_t VAR_2 = FUNC_0(VAR_0, VAR_1);

 if (VAR_2 > 0)
  return (const ATOM_PPLIB_VCE_State_Table *)(((unsigned long) VAR_1) + VAR_2);

 return ((void*)0);
}
