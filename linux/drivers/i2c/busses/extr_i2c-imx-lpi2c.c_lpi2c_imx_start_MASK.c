
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpi2c_imx_struct {scalar_t__ base; } ;
struct i2c_msg {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (struct i2c_msg*) ;
 int FUNC_1 (struct lpi2c_imx_struct*) ;
 unsigned int FUNC_2 (scalar_t__) ;
 int FUNC_3 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct lpi2c_imx_struct *VAR_6,
      struct i2c_msg *VAR_7)
{
 unsigned int VAR_8;

 VAR_8 = FUNC_2(VAR_6->base + VAR_1);
 VAR_8 |= VAR_4 | VAR_5;
 FUNC_3(VAR_8, VAR_6->base + VAR_1);
 FUNC_3(0x7f00, VAR_6->base + VAR_2);

 VAR_8 = FUNC_0(VAR_7) | (VAR_0 << 8);
 FUNC_3(VAR_8, VAR_6->base + VAR_3);

 return FUNC_1(VAR_6);
}
