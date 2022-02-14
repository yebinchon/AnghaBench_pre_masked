
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u32 ;
struct sprd_i2c {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct sprd_i2c *VAR_1, u8 *VAR_2, u32 VAR_3)
{
 u32 VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
  VAR_2[VAR_4] = FUNC_0(VAR_1->base + VAR_0);
}
