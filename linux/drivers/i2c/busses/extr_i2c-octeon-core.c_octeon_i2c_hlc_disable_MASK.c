
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct octeon_i2c {int hlc_enabled; } ;


 int VAR_0 ;
 int FUNC_0 (struct octeon_i2c*,int ) ;

__attribute__((used)) static void FUNC_1(struct octeon_i2c *VAR_1)
{
 if (!VAR_1->hlc_enabled)
  return;

 VAR_1->hlc_enabled = 0;
 FUNC_0(VAR_1, VAR_0);
}
