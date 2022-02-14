
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct TYPE_4__ {struct ocrdma_dev* dev; int type; } ;
struct TYPE_3__ {struct pci_dev* pdev; } ;
struct ocrdma_dev {TYPE_2__ reset_stats; int dir; TYPE_2__ driver_stats; TYPE_2__ rx_dbg_stats; TYPE_2__ tx_dbg_stats; TYPE_2__ rx_qp_err_stats; TYPE_2__ tx_qp_err_stats; TYPE_2__ db_err_stats; TYPE_2__ tx_stats; TYPE_2__ wqe_stats; TYPE_2__ rx_stats; TYPE_2__ rsrc_stats; TYPE_1__ nic_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,int,int ,TYPE_2__*,int *) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (struct pci_dev const*) ;

void FUNC_3(struct ocrdma_dev *VAR_14)
{
 const struct pci_dev *VAR_15 = VAR_14->nic_info.pdev;

 if (!VAR_13)
  return;


 VAR_14->dir = FUNC_0(FUNC_2(VAR_15), VAR_13);

 VAR_14->rsrc_stats.type = VAR_3;
 VAR_14->rsrc_stats.dev = VAR_14;
 FUNC_1("resource_stats", VAR_11, VAR_14->dir,
       &VAR_14->rsrc_stats, &VAR_12);

 VAR_14->rx_stats.type = VAR_5;
 VAR_14->rx_stats.dev = VAR_14;
 FUNC_1("rx_stats", VAR_11, VAR_14->dir, &VAR_14->rx_stats,
       &VAR_12);

 VAR_14->wqe_stats.type = VAR_10;
 VAR_14->wqe_stats.dev = VAR_14;
 FUNC_1("wqe_stats", VAR_11, VAR_14->dir, &VAR_14->wqe_stats,
       &VAR_12);

 VAR_14->tx_stats.type = VAR_8;
 VAR_14->tx_stats.dev = VAR_14;
 FUNC_1("tx_stats", VAR_11, VAR_14->dir, &VAR_14->tx_stats,
       &VAR_12);

 VAR_14->db_err_stats.type = VAR_0;
 VAR_14->db_err_stats.dev = VAR_14;
 FUNC_1("db_err_stats", VAR_11, VAR_14->dir,
       &VAR_14->db_err_stats, &VAR_12);

 VAR_14->tx_qp_err_stats.type = VAR_7;
 VAR_14->tx_qp_err_stats.dev = VAR_14;
 FUNC_1("tx_qp_err_stats", VAR_11, VAR_14->dir,
       &VAR_14->tx_qp_err_stats, &VAR_12);

 VAR_14->rx_qp_err_stats.type = VAR_4;
 VAR_14->rx_qp_err_stats.dev = VAR_14;
 FUNC_1("rx_qp_err_stats", VAR_11, VAR_14->dir,
       &VAR_14->rx_qp_err_stats, &VAR_12);

 VAR_14->tx_dbg_stats.type = VAR_9;
 VAR_14->tx_dbg_stats.dev = VAR_14;
 FUNC_1("tx_dbg_stats", VAR_11, VAR_14->dir,
       &VAR_14->tx_dbg_stats, &VAR_12);

 VAR_14->rx_dbg_stats.type = VAR_6;
 VAR_14->rx_dbg_stats.dev = VAR_14;
 FUNC_1("rx_dbg_stats", VAR_11, VAR_14->dir,
       &VAR_14->rx_dbg_stats, &VAR_12);

 VAR_14->driver_stats.type = VAR_1;
 VAR_14->driver_stats.dev = VAR_14;
 FUNC_1("driver_dbg_stats", VAR_11, VAR_14->dir,
       &VAR_14->driver_stats, &VAR_12);

 VAR_14->reset_stats.type = VAR_2;
 VAR_14->reset_stats.dev = VAR_14;
 FUNC_1("reset_stats", 0200, VAR_14->dir, &VAR_14->reset_stats,
       &VAR_12);
}
