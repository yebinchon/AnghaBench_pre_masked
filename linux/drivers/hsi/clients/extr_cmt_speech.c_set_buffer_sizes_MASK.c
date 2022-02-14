
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cs_hsi_iface {int rx_bufs; int tx_bufs; int flags; int rx_ptr_boundary; TYPE_1__* mmap_cfg; } ;
struct TYPE_2__ {int rx_bufs; int tx_bufs; int rx_ptr_boundary; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct cs_hsi_iface *VAR_2, int VAR_3, int VAR_4)
{
 VAR_2->rx_bufs = VAR_3;
 VAR_2->tx_bufs = VAR_4;
 VAR_2->mmap_cfg->rx_bufs = VAR_3;
 VAR_2->mmap_cfg->tx_bufs = VAR_4;

 if (VAR_2->flags & VAR_0) {







  VAR_2->rx_ptr_boundary = (VAR_3 << VAR_1);
  VAR_2->mmap_cfg->rx_ptr_boundary = VAR_2->rx_ptr_boundary;
 } else {
  VAR_2->rx_ptr_boundary = VAR_2->rx_bufs;
 }
}
