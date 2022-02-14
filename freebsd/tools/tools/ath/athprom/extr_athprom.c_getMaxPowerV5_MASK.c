
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef int uint16_t ;
typedef int int16_t ;
struct TYPE_5__ {TYPE_1__* pDataPerPDGain; } ;
struct TYPE_4__ {int numVpd; int * pwr_t4; } ;
typedef TYPE_2__ RAW_DATA_PER_CHANNEL_2413 ;


 size_t VAR_0 ;

__attribute__((used)) static int16_t
FUNC_0(const RAW_DATA_PER_CHANNEL_2413 *VAR_1)
{
 uint32_t VAR_2;
 uint16_t VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  VAR_3 = VAR_1->pDataPerPDGain[VAR_2].numVpd;
  if (VAR_3 > 0)
   return VAR_1->pDataPerPDGain[VAR_2].pwr_t4[VAR_3-1];
 }
 return 0;
}
