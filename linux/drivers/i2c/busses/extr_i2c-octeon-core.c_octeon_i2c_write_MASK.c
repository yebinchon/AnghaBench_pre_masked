
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct octeon_i2c {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct octeon_i2c*,int) ;
 int FUNC_1 (struct octeon_i2c*,int ) ;
 int FUNC_2 (struct octeon_i2c*,int const) ;
 int FUNC_3 (struct octeon_i2c*) ;

__attribute__((used)) static int FUNC_4(struct octeon_i2c *VAR_1, int VAR_2,
       const u8 *VAR_3, int VAR_4)
{
 int VAR_5, VAR_6;

 FUNC_2(VAR_1, VAR_2 << 1);
 FUNC_1(VAR_1, VAR_0);

 VAR_6 = FUNC_3(VAR_1);
 if (VAR_6)
  return VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  VAR_6 = FUNC_0(VAR_1, 0);
  if (VAR_6)
   return VAR_6;

  FUNC_2(VAR_1, VAR_3[VAR_5]);
  FUNC_1(VAR_1, VAR_0);

  VAR_6 = FUNC_3(VAR_1);
  if (VAR_6)
   return VAR_6;
 }

 return 0;
}
