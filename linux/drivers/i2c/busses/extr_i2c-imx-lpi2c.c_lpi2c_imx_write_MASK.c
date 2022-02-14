
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpi2c_imx_struct {int tx_buf; } ;
struct i2c_msg {int buf; } ;


 int FUNC_0 (struct lpi2c_imx_struct*) ;
 int FUNC_1 (struct lpi2c_imx_struct*) ;

__attribute__((used)) static void FUNC_2(struct lpi2c_imx_struct *VAR_0,
       struct i2c_msg *VAR_1)
{
 VAR_0->tx_buf = VAR_1->buf;
 FUNC_0(VAR_0);
 FUNC_1(VAR_0);
}
