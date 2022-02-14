
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qup_i2c_block {int rx_fifo_data; int rx_tag_len; int rx_fifo_data_pos; int fifo_available; } ;
struct qup_i2c_dev {scalar_t__ base; struct qup_i2c_block blk; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct qup_i2c_dev *VAR_1)
{
 struct qup_i2c_block *VAR_2 = &VAR_1->blk;

 VAR_2->rx_fifo_data = FUNC_0(VAR_1->base + VAR_0);
 VAR_2->rx_fifo_data >>= VAR_2->rx_tag_len * 8;
 VAR_2->rx_fifo_data_pos = VAR_2->rx_tag_len;
 VAR_2->fifo_available -= VAR_2->rx_tag_len;
}
