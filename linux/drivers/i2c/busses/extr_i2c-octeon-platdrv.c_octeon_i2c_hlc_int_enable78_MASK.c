
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct octeon_i2c {int hlc_irq; int hlc_int_enable_cnt; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct octeon_i2c *VAR_0)
{
 FUNC_0(&VAR_0->hlc_int_enable_cnt);
 FUNC_1(VAR_0->hlc_irq);
}
