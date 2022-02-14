
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct octeon_i2c {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct octeon_i2c*,int) ;
 int FUNC_1 (struct octeon_i2c*) ;
 int FUNC_2 (struct octeon_i2c*) ;
 scalar_t__ FUNC_3 (struct octeon_i2c*) ;
 int FUNC_4 (struct octeon_i2c*) ;

__attribute__((used)) static int FUNC_5(struct octeon_i2c *VAR_5)
{
 int VAR_6;
 u8 VAR_7;

 FUNC_1(VAR_5);

 FUNC_0(VAR_5, VAR_3 | VAR_4);
 VAR_6 = FUNC_4(VAR_5);
 if (VAR_6)
  goto error;

 VAR_7 = FUNC_3(VAR_5);
 if (VAR_7 == VAR_2 || VAR_7 == VAR_1)

  return 0;

error:

 VAR_6 = FUNC_2(VAR_5);
 return (VAR_6) ? VAR_6 : -VAR_0;
}
