
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct qup_i2c_block {unsigned int tx_fifo_data_pos; unsigned int tx_fifo_data; scalar_t__ tx_fifo_free; } ;
struct qup_i2c_dev {scalar_t__ base; struct qup_i2c_block blk; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned int,scalar_t__) ;

__attribute__((used)) static void
FUNC_1(struct qup_i2c_dev *VAR_1, u8 **VAR_2, unsigned int *VAR_3)
{
 struct qup_i2c_block *VAR_4 = &VAR_1->blk;
 unsigned int VAR_5;

 for (VAR_5 = VAR_4->tx_fifo_data_pos; *VAR_3 && VAR_4->tx_fifo_free;
      (*VAR_3)--, VAR_4->tx_fifo_free--) {
  VAR_4->tx_fifo_data |= *(*VAR_2)++ << (VAR_5 * 8);
  if (VAR_5 == 3) {
   FUNC_0(VAR_4->tx_fifo_data,
          VAR_1->base + VAR_0);
   VAR_4->tx_fifo_data = 0x0;
   VAR_5 = 0;
  } else {
   VAR_5++;
  }
 }

 VAR_4->tx_fifo_data_pos = VAR_5;
}
