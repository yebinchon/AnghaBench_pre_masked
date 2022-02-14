
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct octeon_i2c {scalar_t__ twsi_base; } ;
struct i2c_msg {int len; int addr; int flags; scalar_t__* buf; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct octeon_i2c*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct octeon_i2c*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct octeon_i2c*,int) ;
 int FUNC_4 (struct octeon_i2c*) ;
 int FUNC_5 (struct octeon_i2c*) ;
 int FUNC_6 (struct octeon_i2c*) ;
 int FUNC_7 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct octeon_i2c *VAR_8, struct i2c_msg *VAR_9)
{
 int VAR_10, VAR_11, VAR_12 = 0;
 u64 VAR_13;

 FUNC_4(VAR_8);
 FUNC_5(VAR_8);

 VAR_13 = VAR_7 | VAR_6;

 VAR_13 |= (u64)(VAR_9[0].len - 1) << VAR_5;

 VAR_13 |= (u64)(VAR_9[0].addr & 0x7full) << VAR_1;

 if (VAR_9[0].flags & VAR_0)
  VAR_13 |= VAR_2;
 else
  VAR_13 |= VAR_3;

 for (VAR_10 = 0, VAR_11 = VAR_9[0].len - 1; VAR_10 < VAR_9[0].len && VAR_10 < 4; VAR_10++, VAR_11--)
  VAR_13 |= (u64)VAR_9[0].buf[VAR_11] << (8 * VAR_10);

 if (VAR_9[0].len > 4) {
  u64 VAR_14 = 0;

  for (VAR_10 = 0; VAR_10 < VAR_9[0].len - 4 && VAR_10 < 4; VAR_10++, VAR_11--)
   VAR_14 |= (u64)VAR_9[0].buf[VAR_11] << (8 * VAR_10);
  FUNC_7(VAR_14, VAR_8->twsi_base + FUNC_1(VAR_8));
 }

 FUNC_7(VAR_13, VAR_8->twsi_base + FUNC_0(VAR_8));
 VAR_12 = FUNC_6(VAR_8);
 if (VAR_12)
  goto err;

 VAR_13 = FUNC_2(VAR_8->twsi_base + FUNC_0(VAR_8));
 if ((VAR_13 & VAR_4) == 0)
  return FUNC_3(VAR_8, 0);

err:
 return VAR_12;
}
