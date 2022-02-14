
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* pDataFlashDesc; TYPE_1__* pDevice; } ;
struct TYPE_7__ {unsigned char* rx_data_pt; int rx_data_size; unsigned char* tx_data_pt; int tx_data_size; } ;
struct TYPE_6__ {int pages_size; int pages_number; } ;
typedef int AT91S_DataFlashStatus ;
typedef TYPE_3__* AT91PS_DataFlash ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int ,int,int) ;
 int VAR_1 ;

__attribute__((used)) static AT91S_DataFlashStatus FUNC_1(
  AT91PS_DataFlash VAR_2,
 int VAR_3,
 unsigned char *VAR_4,
 int VAR_5 )
{
 AT91S_DataFlashStatus VAR_6;

 if ( (VAR_3 + VAR_5) > (VAR_2->pDevice->pages_size * (VAR_2->pDevice->pages_number)))
  return VAR_0;

 VAR_2->pDataFlashDesc->rx_data_pt = VAR_4;
 VAR_2->pDataFlashDesc->rx_data_size = VAR_5;
 VAR_2->pDataFlashDesc->tx_data_pt = VAR_4;
 VAR_2->pDataFlashDesc->tx_data_size = VAR_5;

 VAR_6 = FUNC_0(VAR_2, VAR_1, 8, VAR_3);

 return(VAR_6);
}
