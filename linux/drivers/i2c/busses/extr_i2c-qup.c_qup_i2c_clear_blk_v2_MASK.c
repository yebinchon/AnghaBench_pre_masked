
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qup_i2c_block {int send_last_word; int tx_tags_sent; int rx_tags_fetched; int rx_bytes_read; scalar_t__ fifo_available; scalar_t__ rx_fifo_data_pos; scalar_t__ rx_fifo_data; scalar_t__ tx_fifo_free; scalar_t__ tx_fifo_data_pos; scalar_t__ tx_fifo_data; } ;



__attribute__((used)) static void FUNC_0(struct qup_i2c_block *VAR_0)
{
 VAR_0->send_last_word = 0;
 VAR_0->tx_tags_sent = 0;
 VAR_0->tx_fifo_data = 0;
 VAR_0->tx_fifo_data_pos = 0;
 VAR_0->tx_fifo_free = 0;

 VAR_0->rx_tags_fetched = 0;
 VAR_0->rx_bytes_read = 0;
 VAR_0->rx_fifo_data = 0;
 VAR_0->rx_fifo_data_pos = 0;
 VAR_0->fifo_available = 0;
}
