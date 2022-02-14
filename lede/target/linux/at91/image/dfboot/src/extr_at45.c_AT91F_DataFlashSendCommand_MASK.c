
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {unsigned char* command; unsigned char* tx_cmd_pt; unsigned int tx_cmd_size; unsigned char* rx_cmd_pt; unsigned int rx_cmd_size; } ;
struct TYPE_6__ {TYPE_3__* pDataFlashDesc; TYPE_1__* pDevice; } ;
struct TYPE_5__ {unsigned int pages_size; unsigned int page_offset; int pages_number; } ;
typedef int AT91S_DataFlashStatus ;
typedef TYPE_2__* AT91PS_DataFlash ;


 int FUNC_0 (TYPE_3__*) ;

__attribute__((used)) static AT91S_DataFlashStatus FUNC_1(
 AT91PS_DataFlash VAR_0,
 unsigned char VAR_1,
 unsigned int VAR_2,
 unsigned int VAR_3)
{
 unsigned int VAR_4;


 VAR_4 = ((VAR_3 / (VAR_0->pDevice->pages_size))
         << VAR_0->pDevice->page_offset) +
         (VAR_3 % (VAR_0->pDevice->pages_size));


 VAR_0->pDataFlashDesc->command[0] = VAR_1;
 if (VAR_0->pDevice->pages_number >= 16384)
 {
  VAR_0->pDataFlashDesc->command[1] = (unsigned char)((VAR_4 & 0x0F000000) >> 24);
  VAR_0->pDataFlashDesc->command[2] = (unsigned char)((VAR_4 & 0x00FF0000) >> 16);
  VAR_0->pDataFlashDesc->command[3] = (unsigned char)((VAR_4 & 0x0000FF00) >> 8);
  VAR_0->pDataFlashDesc->command[4] = (unsigned char)(VAR_4 & 0x000000FF);
 }
 else
 {
  VAR_0->pDataFlashDesc->command[1] = (unsigned char)((VAR_4 & 0x00FF0000) >> 16);
  VAR_0->pDataFlashDesc->command[2] = (unsigned char)((VAR_4 & 0x0000FF00) >> 8);
  VAR_0->pDataFlashDesc->command[3] = (unsigned char)(VAR_4 & 0x000000FF) ;
  VAR_0->pDataFlashDesc->command[4] = 0;
 }
 VAR_0->pDataFlashDesc->command[5] = 0;
 VAR_0->pDataFlashDesc->command[6] = 0;
 VAR_0->pDataFlashDesc->command[7] = 0;


 VAR_0->pDataFlashDesc->tx_cmd_pt = VAR_0->pDataFlashDesc->command ;
 VAR_0->pDataFlashDesc->tx_cmd_size = VAR_2 ;
 VAR_0->pDataFlashDesc->rx_cmd_pt = VAR_0->pDataFlashDesc->command ;
 VAR_0->pDataFlashDesc->rx_cmd_size = VAR_2 ;

 return FUNC_0(VAR_0->pDataFlashDesc);
}
