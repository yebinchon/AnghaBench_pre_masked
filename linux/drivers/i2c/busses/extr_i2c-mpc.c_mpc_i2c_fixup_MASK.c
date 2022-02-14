
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mpc_i2c {int real_clk; scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct mpc_i2c*,int) ;

__attribute__((used)) static void FUNC_3(struct mpc_i2c *VAR_4)
{
 int VAR_5;
 u32 VAR_6 = 1000000 / VAR_4->real_clk + 1;

 if (VAR_6 < 2)
  VAR_6 = 2;

 for (VAR_5 = 9; VAR_5; VAR_5--) {
  FUNC_2(VAR_4, 0);
  FUNC_2(VAR_4, VAR_1 | VAR_2 | VAR_0);
  FUNC_0(VAR_4->base + VAR_3);
  FUNC_2(VAR_4, VAR_0);
  FUNC_1(VAR_6 << 1);
 }
}
