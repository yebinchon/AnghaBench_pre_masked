
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ocores_i2c {int reg_shift; scalar_t__ base; } ;


 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct ocores_i2c *VAR_0, int VAR_1, u8 VAR_2)
{
 FUNC_0(VAR_2, VAR_0->base + (VAR_1 << VAR_0->reg_shift));
}
