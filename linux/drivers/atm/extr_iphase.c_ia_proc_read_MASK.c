
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct atm_dev {int dummy; } ;
typedef int loff_t ;
struct TYPE_3__ {scalar_t__ phy_type; int pci_map_size; int memType; int num_tx_desc; int tx_buf_sz; int num_rx_desc; int rx_buf_sz; int rx_pkt_cnt; int tx_pkt_cnt; int rx_cell_cnt; int tx_cell_cnt; int drop_rxcell; int drop_rxpkt; } ;
typedef TYPE_1__ IADEV ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__* FUNC_0 (struct atm_dev*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*,char*,...) ;

__attribute__((used)) static int FUNC_2(struct atm_dev *VAR_7,loff_t *VAR_8,char *VAR_9)
{
  int VAR_10 = *VAR_8, VAR_11;
  char *VAR_12;
  IADEV *VAR_13 = FUNC_0(VAR_7);
  if(!VAR_10--) {
     if (VAR_13->phy_type == VAR_0) {
       VAR_11 = FUNC_1(VAR_9, "  Board Type         :  Iphase5525-1KVC-128K\n");
       return VAR_11;
     }
     if (VAR_13->phy_type == VAR_1)
        VAR_11 = FUNC_1(VAR_9, "  Board Type         :  Iphase-ATM-DS3");
     else if (VAR_13->phy_type == VAR_2)
        VAR_11 = FUNC_1(VAR_9, "  Board Type         :  Iphase-ATM-E3");
     else if (VAR_13->phy_type == VAR_3)
         VAR_11 = FUNC_1(VAR_9, "  Board Type         :  Iphase-ATM-UTP155");
     else
        VAR_11 = FUNC_1(VAR_9, "  Board Type         :  Iphase-ATM-OC3");
     VAR_12 = VAR_9 + VAR_11;
     if (VAR_13->pci_map_size == 0x40000)
        VAR_11 += FUNC_1(VAR_12, "-1KVC-");
     else
        VAR_11 += FUNC_1(VAR_12, "-4KVC-");
     VAR_12 = VAR_9 + VAR_11;
     if ((VAR_13->memType & VAR_6) == VAR_4)
        VAR_11 += FUNC_1(VAR_12, "1M  \n");
     else if ((VAR_13->memType & VAR_6) == VAR_5)
        VAR_11 += FUNC_1(VAR_12, "512K\n");
     else
       VAR_11 += FUNC_1(VAR_12, "128K\n");
     return VAR_11;
  }
  if (!VAR_10) {
     return FUNC_1(VAR_9, "  Number of Tx Buffer:  %u\n"
                           "  Size of Tx Buffer  :  %u\n"
                           "  Number of Rx Buffer:  %u\n"
                           "  Size of Rx Buffer  :  %u\n"
                           "  Packets Received   :  %u\n"
                           "  Packets Transmitted:  %u\n"
                           "  Cells Received     :  %u\n"
                           "  Cells Transmitted  :  %u\n"
                           "  Board Dropped Cells:  %u\n"
                           "  Board Dropped Pkts :  %u\n",
                           VAR_13->num_tx_desc, VAR_13->tx_buf_sz,
                           VAR_13->num_rx_desc, VAR_13->rx_buf_sz,
                           VAR_13->rx_pkt_cnt, VAR_13->tx_pkt_cnt,
                           VAR_13->rx_cell_cnt, VAR_13->tx_cell_cnt,
                           VAR_13->drop_rxcell, VAR_13->drop_rxpkt);
  }
  return 0;
}
