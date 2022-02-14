
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_13__ {TYPE_1__* pMCI_DeviceFeatures; } ;
struct TYPE_12__ {int Relative_Card_Address; int Max_Read_DataBlock_Length; int Max_Write_DataBlock_Length; int Sector_Size; unsigned int Read_Partial; unsigned int Write_Partial; unsigned int Erase_Block_Enable; unsigned int Read_Block_Misalignment; unsigned int Write_Block_Misalignment; unsigned int Memory_Capacity; int Card_Inserted; } ;
struct TYPE_11__ {int* MCI_RSPR; } ;
typedef TYPE_2__* AT91PS_MciDevice ;


 TYPE_10__* VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 unsigned int VAR_21 ;
 unsigned int VAR_22 ;
 unsigned int VAR_23 ;
 int VAR_24 ;
 scalar_t__ VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int,unsigned int*) ;
 scalar_t__ FUNC_1 (TYPE_2__*,unsigned int*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int ,int ) ;
 scalar_t__ FUNC_5 (TYPE_2__*,unsigned int) ;
 int FUNC_6 (char*,unsigned int) ;

int FUNC_7 (AT91PS_MciDevice VAR_30)
{
    unsigned int VAR_31[4];
 unsigned int VAR_32,VAR_33;

 FUNC_4(VAR_30, VAR_24, VAR_27);

    if(FUNC_2(VAR_30) == VAR_25)
     return VAR_25;

 if (FUNC_1(VAR_30,VAR_31) == VAR_1)
 {
     VAR_30->pMCI_DeviceFeatures->Card_Inserted = VAR_28;

     if (FUNC_4(VAR_30, VAR_29, 0) == VAR_1)
  {
   VAR_30->pMCI_DeviceFeatures->Relative_Card_Address = (VAR_0->MCI_RSPR[0] >> 16);
   if (FUNC_0(VAR_30,VAR_30->pMCI_DeviceFeatures->Relative_Card_Address,VAR_31) == VAR_1)
   {
      VAR_30->pMCI_DeviceFeatures->Max_Read_DataBlock_Length = 1 << ((VAR_31[1] >> VAR_9) & VAR_8 );
     VAR_30->pMCI_DeviceFeatures->Max_Write_DataBlock_Length = 1 << ((VAR_31[3] >> VAR_15) & VAR_14 );
    VAR_30->pMCI_DeviceFeatures->Sector_Size = 1 + ((VAR_31[2] >> VAR_23) & VAR_22 );
      VAR_30->pMCI_DeviceFeatures->Read_Partial = (VAR_31[1] >> VAR_13) & VAR_12;
    VAR_30->pMCI_DeviceFeatures->Write_Partial = (VAR_31[3] >> VAR_17) & VAR_16;
    VAR_30->pMCI_DeviceFeatures->Erase_Block_Enable = (VAR_31[3] >> VAR_21) & VAR_20;
    VAR_30->pMCI_DeviceFeatures->Read_Block_Misalignment = (VAR_31[1] >> VAR_11) & VAR_10;
    VAR_30->pMCI_DeviceFeatures->Write_Block_Misalignment = (VAR_31[1] >> VAR_19) & VAR_18;



     VAR_32 = 1 << ( ((VAR_31[2] >> VAR_7) & VAR_6) + 2 );

     VAR_33 = ((VAR_31[1] >> VAR_3) & VAR_2) << 2;

     VAR_33 = VAR_32 * ( ( VAR_33 + ( (VAR_31[2] >> VAR_5) & VAR_4) ) + 1 );

     VAR_30->pMCI_DeviceFeatures->Memory_Capacity = VAR_30->pMCI_DeviceFeatures->Max_Read_DataBlock_Length * VAR_33;

     FUNC_6("SD-Card: %d Bytes\n\r", VAR_30->pMCI_DeviceFeatures->Memory_Capacity);

      if( FUNC_3(VAR_30) == VAR_1 )
    {
      if (FUNC_5(VAR_30,VAR_30->pMCI_DeviceFeatures->Max_Read_DataBlock_Length) == VAR_1)
     return VAR_26;
    }
   }
  }
 }
    return VAR_25;
}
