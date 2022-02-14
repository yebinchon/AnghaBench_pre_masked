
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct pp_hwmgr {int dummy; } ;
struct TYPE_7__ {scalar_t__ usSize; scalar_t__ usSAMUTableOffset; } ;
struct TYPE_6__ {scalar_t__ usTableSize; } ;
struct TYPE_5__ {scalar_t__ usExtendendedHeaderOffset; } ;
typedef TYPE_1__ ATOM_PPLIB_POWERPLAYTABLE3 ;
typedef TYPE_2__ ATOM_PPLIB_POWERPLAYTABLE ;
typedef TYPE_3__ ATOM_PPLIB_EXTENDEDHEADER ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static uint16_t FUNC_1(struct pp_hwmgr *VAR_1,
   const ATOM_PPLIB_POWERPLAYTABLE *VAR_2)
{
 uint16_t VAR_3 = 0;

 if (FUNC_0(VAR_2->usTableSize) >=
     sizeof(ATOM_PPLIB_POWERPLAYTABLE3)) {
  const ATOM_PPLIB_POWERPLAYTABLE3 *VAR_4 =
   (const ATOM_PPLIB_POWERPLAYTABLE3 *)VAR_2;
  if (VAR_4->usExtendendedHeaderOffset > 0) {
   const ATOM_PPLIB_EXTENDEDHEADER *VAR_5 =
    (const ATOM_PPLIB_EXTENDEDHEADER *)
    (((unsigned long)VAR_4) +
    FUNC_0(VAR_4->usExtendendedHeaderOffset));
   if (FUNC_0(VAR_5->usSize) >=
       VAR_0)
    VAR_3 = FUNC_0(VAR_5->usSAMUTableOffset);
  }
 }

 return VAR_3;
}
