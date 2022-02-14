
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xilinx_dma_device {int axi_clk; int tx_clk; int txs_clk; int rx_clk; int rxs_clk; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct xilinx_dma_device *VAR_0)
{
 FUNC_0(VAR_0->rxs_clk);
 FUNC_0(VAR_0->rx_clk);
 FUNC_0(VAR_0->txs_clk);
 FUNC_0(VAR_0->tx_clk);
 FUNC_0(VAR_0->axi_clk);
}
