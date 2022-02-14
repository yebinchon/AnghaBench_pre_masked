
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rx_cell_cnt; int drop_rxpkt; int drop_rxcell; int tx_cell_cnt; scalar_t__ seg_reg; scalar_t__ reass_reg; int carrier_detect; } ;
typedef TYPE_1__ IADEV ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(IADEV *VAR_6) {
    if (!VAR_6->carrier_detect)
        return;
    VAR_6->rx_cell_cnt += FUNC_0(VAR_6->reass_reg+VAR_0)&0xffff;
    VAR_6->rx_cell_cnt += (FUNC_0(VAR_6->reass_reg+VAR_1) & 0xffff) << 16;
    VAR_6->drop_rxpkt += FUNC_0(VAR_6->reass_reg + VAR_4 ) & 0xffff;
    VAR_6->drop_rxcell += FUNC_0(VAR_6->reass_reg + VAR_5) & 0xffff;
    VAR_6->tx_cell_cnt += FUNC_0(VAR_6->seg_reg + VAR_3)&0xffff;
    VAR_6->tx_cell_cnt += (FUNC_0(VAR_6->seg_reg+VAR_2)&0xffff)<<16;
    return;
}
