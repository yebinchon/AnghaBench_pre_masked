
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mtk_i2c {scalar_t__ base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct mtk_i2c *VAR_3, u32 VAR_4)
{
 u32 VAR_5 = FUNC_0(VAR_3->base + VAR_1);
 u32 VAR_6 = (VAR_4 << 16) & VAR_2;

 return ((VAR_5 & VAR_6) == VAR_6) ? 0 : -VAR_0;
}
