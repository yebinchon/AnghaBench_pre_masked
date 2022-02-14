
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {unsigned int logical_address; int Device; int Desc; } ;
struct TYPE_5__ {int * pDevice; int * pDataFlashDesc; } ;
typedef TYPE_1__* AT91PS_DataFlash ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;

__attribute__((used)) static AT91PS_DataFlash FUNC_0(AT91PS_DataFlash VAR_2,
                                              unsigned int *VAR_3)
{
 char VAR_4 = 0;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
  if ((*VAR_3 & 0xFF000000) == VAR_1[VAR_5].logical_address) {
   VAR_4 = 1;
   break;
  }
 if (!VAR_4) {
  VAR_2 = (AT91PS_DataFlash) 0;
  return VAR_2;
 }
 VAR_2->pDataFlashDesc = &(VAR_1[VAR_5].Desc);
 VAR_2->pDevice = &(VAR_1[VAR_5].Device);
 *VAR_3 -= VAR_1[VAR_5].logical_address;
 return (VAR_2);
}
