
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sprd_i2c {int src_clk; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct sprd_i2c *VAR_3, u32 VAR_4)
{
 u32 VAR_5 = VAR_3->src_clk;




 u32 VAR_6 = VAR_5 / (4 * VAR_4) - 1;







 u32 VAR_7 = ((VAR_6 << 1) * 2) / 5;
 u32 VAR_8 = ((VAR_6 << 1) * 3) / 5;
 u32 VAR_9 = FUNC_0(VAR_7, VAR_8);
 u32 VAR_10 = FUNC_1(VAR_7, VAR_8);

 FUNC_2(VAR_9, VAR_3->base + VAR_0);
 FUNC_2(VAR_10, VAR_3->base + VAR_1);


 if (VAR_4 == 400000)
  FUNC_2((6 * VAR_5) / 10000000, VAR_3->base + VAR_2);
 else if (VAR_4 == 100000)
  FUNC_2((4 * VAR_5) / 1000000, VAR_3->base + VAR_2);
}
