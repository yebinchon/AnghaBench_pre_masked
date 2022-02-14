
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct octeon_i2c {scalar_t__ twsi_base; } ;


 scalar_t__ FUNC_0 (struct octeon_i2c*) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static bool FUNC_2(struct octeon_i2c *VAR_1)
{
 return (FUNC_1(VAR_1->twsi_base + FUNC_0(VAR_1)) & VAR_0) == 0;
}
