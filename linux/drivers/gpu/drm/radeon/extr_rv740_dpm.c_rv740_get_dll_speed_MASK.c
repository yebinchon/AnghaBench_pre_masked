
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct TYPE_2__ {scalar_t__ max; scalar_t__ min; int dll_speed; } ;


 int FUNC_0 (char*) ;
 TYPE_1__* VAR_0 ;

u32 FUNC_1(bool VAR_1, u32 VAR_2)
{
 int VAR_3;
 u32 VAR_4;
 u16 VAR_5;

 if (VAR_1)
  VAR_4 = 4;
 else
  VAR_4 = 2;

 VAR_5 = (u16)(VAR_2 * VAR_4 / 1000);

 if (VAR_5 < VAR_0[0].max) {
  for (VAR_3 = 0; VAR_3 < 16; VAR_3++) {
   if (VAR_5 > VAR_0[VAR_3].min &&
       VAR_5 <= VAR_0[VAR_3].max)
    return VAR_0[VAR_3].dll_speed;
  }
 }

 FUNC_0("Target MCLK greater than largest MCLK in DLL speed table\n");

 return 0x0f;
}
