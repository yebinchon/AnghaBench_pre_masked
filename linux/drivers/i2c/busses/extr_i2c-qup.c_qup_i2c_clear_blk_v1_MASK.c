
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qup_i2c_block {int rx_bytes_read; scalar_t__ fifo_available; scalar_t__ tx_fifo_free; } ;



__attribute__((used)) static void FUNC_0(struct qup_i2c_block *VAR_0)
{
 VAR_0->tx_fifo_free = 0;
 VAR_0->fifo_available = 0;
 VAR_0->rx_bytes_read = 0;
}
