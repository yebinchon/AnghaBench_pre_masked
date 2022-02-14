
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qup_i2c_block {int rx_tags_fetched; int rx_bytes_read; int cur_blk_len; } ;
struct qup_i2c_dev {struct qup_i2c_block blk; } ;


 int FUNC_0 (struct qup_i2c_dev*) ;
 int FUNC_1 (struct qup_i2c_dev*) ;

__attribute__((used)) static void FUNC_2(struct qup_i2c_dev *VAR_0)
{
 struct qup_i2c_block *VAR_1 = &VAR_0->blk;

 if (!VAR_1->rx_tags_fetched) {
  FUNC_1(VAR_0);
  VAR_1->rx_tags_fetched = 1;
 }

 FUNC_0(VAR_0);
 if (!VAR_1->cur_blk_len)
  VAR_1->rx_bytes_read = 1;
}
