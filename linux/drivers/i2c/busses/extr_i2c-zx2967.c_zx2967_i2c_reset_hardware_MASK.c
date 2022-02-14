
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct zx2967_i2c {int clk_freq; int clk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct zx2967_i2c*) ;
 int FUNC_2 (struct zx2967_i2c*,int,int ) ;

__attribute__((used)) static int FUNC_3(struct zx2967_i2c *VAR_8)
{
 u32 VAR_9;
 u32 VAR_10;

 VAR_9 = VAR_2 | VAR_1;
 FUNC_2(VAR_8, VAR_9, VAR_5);

 VAR_10 = FUNC_0(VAR_8->clk) / VAR_8->clk_freq - 1;
 FUNC_2(VAR_8, VAR_10, VAR_3);
 FUNC_2(VAR_8, VAR_10, VAR_4);

 FUNC_2(VAR_8, VAR_0 - 1, VAR_7);
 FUNC_2(VAR_8, VAR_0 - 1, VAR_6);
 FUNC_2(VAR_8, 1, VAR_6);

 FUNC_1(VAR_8);

 return 0;
}
