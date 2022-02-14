
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpi2c_imx_struct {int block_data; scalar_t__ base; int rx_buf; } ;
struct i2c_msg {int flags; int len; int buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct lpi2c_imx_struct*,int) ;
 int FUNC_1 (struct lpi2c_imx_struct*) ;
 int FUNC_2 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct lpi2c_imx_struct *VAR_6,
      struct i2c_msg *VAR_7)
{
 unsigned int VAR_8;

 VAR_6->rx_buf = VAR_7->buf;
 VAR_6->block_data = VAR_7->flags & VAR_1;

 FUNC_1(VAR_6);
 VAR_8 = VAR_7->len > VAR_0 ? VAR_0 - 1 : VAR_7->len - 1;
 VAR_8 |= (VAR_5 << 8);
 FUNC_2(VAR_8, VAR_6->base + VAR_2);

 FUNC_0(VAR_6, VAR_4 | VAR_3);
}
