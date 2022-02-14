
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dw_i2c_dev {int tx_fifo_depth; int master_cfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dw_i2c_dev*,int,int ) ;

__attribute__((used)) static void FUNC_1(struct dw_i2c_dev *VAR_3)
{

 FUNC_0(VAR_3, VAR_3->tx_fifo_depth / 2, VAR_2);
 FUNC_0(VAR_3, 0, VAR_1);


 FUNC_0(VAR_3, VAR_3->master_cfg, VAR_0);
}
