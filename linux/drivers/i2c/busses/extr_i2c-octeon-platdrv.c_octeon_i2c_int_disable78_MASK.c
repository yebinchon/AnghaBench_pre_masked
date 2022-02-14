
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct octeon_i2c {int irq; int int_enable_cnt; } ;


 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void FUNC_1(struct octeon_i2c *VAR_0)
{
 FUNC_0(&VAR_0->int_enable_cnt, VAR_0->irq);
}
