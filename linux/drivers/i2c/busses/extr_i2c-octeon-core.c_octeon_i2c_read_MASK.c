
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct octeon_i2c {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct octeon_i2c*,int) ;
 int FUNC_1 (struct octeon_i2c*,int) ;
 scalar_t__ FUNC_2 (struct octeon_i2c*,int*) ;
 int FUNC_3 (struct octeon_i2c*,int) ;
 int FUNC_4 (struct octeon_i2c*) ;

__attribute__((used)) static int FUNC_5(struct octeon_i2c *VAR_4, int VAR_5,
      u8 *VAR_6, u16 *VAR_7, bool VAR_8)
{
 int VAR_9, VAR_10, VAR_11 = *VAR_7;
 bool VAR_12 = 0;

 FUNC_3(VAR_4, (VAR_5 << 1) | 1);
 FUNC_1(VAR_4, VAR_3);

 VAR_10 = FUNC_4(VAR_4);
 if (VAR_10)
  return VAR_10;


 VAR_10 = FUNC_0(VAR_4, 0);
 if (VAR_10)
  return VAR_10;

 for (VAR_9 = 0; VAR_9 < VAR_11; VAR_9++) {
  if ((VAR_9 + 1 == VAR_11) && !(VAR_8 && VAR_9 == 0))
   VAR_12 = 1;


  if (VAR_12)
   FUNC_1(VAR_4, VAR_3);
  else
   FUNC_1(VAR_4, VAR_3 | VAR_2);

  VAR_10 = FUNC_4(VAR_4);
  if (VAR_10)
   return VAR_10;

  VAR_6[VAR_9] = FUNC_2(VAR_4, &VAR_10);
  if (VAR_10)
   return VAR_10;
  if (VAR_8 && VAR_9 == 0) {
   if (VAR_6[VAR_9] > VAR_1 + 1)
    return -VAR_0;
   VAR_11 += VAR_6[VAR_9];
  }

  VAR_10 = FUNC_0(VAR_4, VAR_12);
  if (VAR_10)
   return VAR_10;
 }
 *VAR_7 = VAR_11;
 return 0;
}
