
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {unsigned int MCI_IDR; } ;
struct TYPE_8__ {int PDC_PTCR; } ;
struct TYPE_7__ {TYPE_1__* pMCI_DeviceDesc; } ;
struct TYPE_6__ {void* state; } ;
typedef TYPE_2__* AT91PS_MciDevice ;


 TYPE_5__* VAR_0 ;
 TYPE_4__* VAR_1 ;
 void* VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

void FUNC_0(
 AT91PS_MciDevice VAR_7,
 unsigned int VAR_8)
{

 if ( VAR_8 & VAR_4 )
    {
  VAR_0->MCI_IDR = VAR_4;
   VAR_1->PDC_PTCR = VAR_6;

  VAR_7->pMCI_DeviceDesc->state = VAR_2;
 }


    if ( VAR_8 & VAR_3 )
    {
        VAR_0->MCI_IDR = VAR_3;
   VAR_1->PDC_PTCR = VAR_5;

  VAR_7->pMCI_DeviceDesc->state = VAR_2;
 }

}
