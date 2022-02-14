
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct pp_hwmgr {int dummy; } ;
struct TYPE_2__ {int ucNumEntries; } ;
typedef TYPE_1__ UVDClockInfoArray ;
typedef int UVDClockInfo ;
typedef int UCHAR ;
typedef int ATOM_PPLIB_POWERPLAYTABLE ;


 scalar_t__ FUNC_0 (struct pp_hwmgr*,int const*) ;

__attribute__((used)) static uint16_t FUNC_1(struct pp_hwmgr *VAR_0,
   const ATOM_PPLIB_POWERPLAYTABLE *VAR_1)
{
 uint16_t VAR_2 = FUNC_0(VAR_0,
          VAR_1);
 uint16_t VAR_3 = 0;

 if (VAR_2 > 0) {
  const UVDClockInfoArray *VAR_4 = (const UVDClockInfoArray *)
     (((unsigned long) VAR_1)
     + VAR_2);
  VAR_3 = sizeof(UCHAR) +
        VAR_4->ucNumEntries * sizeof(UVDClockInfo);
 }

 return VAR_3;
}
