
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t code; int hz; } ;
typedef TYPE_1__ hz_init_t ;
typedef int hazard_t ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(hz_init_t VAR_1[], hazard_t VAR_2[], int VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < 256; ++VAR_4)
  VAR_2[VAR_4] = VAR_0;

 for (VAR_4 = 0; VAR_4 < VAR_3; ++VAR_4)
  VAR_2[VAR_1[VAR_4].code] = VAR_1[VAR_4].hz;
}
