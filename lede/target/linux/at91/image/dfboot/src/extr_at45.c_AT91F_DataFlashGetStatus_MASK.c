
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned char DataFlash_state; int rx_cmd_size; int tx_cmd_size; scalar_t__* rx_cmd_pt; scalar_t__* command; scalar_t__* tx_cmd_pt; scalar_t__ tx_data_size; } ;
typedef int AT91S_DataFlashStatus ;
typedef TYPE_1__* AT91PS_DataflashDesc ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 unsigned char VAR_1 ;

__attribute__((used)) static AT91S_DataFlashStatus FUNC_1(AT91PS_DataflashDesc VAR_2)
{
 AT91S_DataFlashStatus VAR_3;


 VAR_2->command[0] = VAR_0;
 VAR_2->command[1] = 0;

 VAR_2->DataFlash_state = VAR_1;
     VAR_2->tx_data_size = 0 ;
     VAR_2->tx_cmd_pt = VAR_2->command ;
     VAR_2->rx_cmd_pt = VAR_2->command ;
     VAR_2->rx_cmd_size = 2 ;
     VAR_2->tx_cmd_size = 2 ;
     VAR_3 = FUNC_0 (VAR_2);

 VAR_2->DataFlash_state = *( (unsigned char *) (VAR_2->rx_cmd_pt) +1);
 return VAR_3;
}
