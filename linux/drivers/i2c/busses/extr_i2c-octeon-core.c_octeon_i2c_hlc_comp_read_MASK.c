
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct octeon_i2c {scalar_t__ twsi_base; } ;
struct i2c_msg {int len; int addr; int flags; int* buf; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct octeon_i2c*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct octeon_i2c*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct octeon_i2c*,int) ;
 int FUNC_4 (struct octeon_i2c*) ;
 int FUNC_5 (struct octeon_i2c*) ;
 int FUNC_6 (struct octeon_i2c*) ;
 int FUNC_7 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct octeon_i2c *VAR_10, struct i2c_msg *VAR_11)
{
 int VAR_12, VAR_13, VAR_14 = 0;
 u64 VAR_15;

 FUNC_4(VAR_10);

 VAR_15 = VAR_9 | VAR_6 | VAR_8;

 VAR_15 |= (u64)(VAR_11[1].len - 1) << VAR_7;

 VAR_15 |= (u64)(VAR_11[0].addr & 0x7full) << VAR_1;

 if (VAR_11[0].flags & VAR_0)
  VAR_15 |= VAR_4;
 else
  VAR_15 |= VAR_5;

 if (VAR_11[0].len == 2) {
  u64 VAR_16 = 0;

  VAR_15 |= VAR_2;
  VAR_16 = (u64)VAR_11[0].buf[0] << VAR_3;
  VAR_15 |= (u64)VAR_11[0].buf[1] << VAR_3;
  FUNC_7(VAR_16, VAR_10->twsi_base + FUNC_1(VAR_10));
 } else {
  VAR_15 |= (u64)VAR_11[0].buf[0] << VAR_3;
 }

 FUNC_5(VAR_10);
 FUNC_7(VAR_15, VAR_10->twsi_base + FUNC_0(VAR_10));

 VAR_14 = FUNC_6(VAR_10);
 if (VAR_14)
  goto err;

 VAR_15 = FUNC_2(VAR_10->twsi_base + FUNC_0(VAR_10));
 if ((VAR_15 & VAR_6) == 0)
  return FUNC_3(VAR_10, 0);

 for (VAR_12 = 0, VAR_13 = VAR_11[1].len - 1; VAR_12 < VAR_11[1].len && VAR_12 < 4; VAR_12++, VAR_13--)
  VAR_11[1].buf[VAR_13] = (VAR_15 >> (8 * VAR_12)) & 0xff;

 if (VAR_11[1].len > 4) {
  VAR_15 = FUNC_2(VAR_10->twsi_base + FUNC_1(VAR_10));
  for (VAR_12 = 0; VAR_12 < VAR_11[1].len - 4 && VAR_12 < 4; VAR_12++, VAR_13--)
   VAR_11[1].buf[VAR_13] = (VAR_15 >> (8 * VAR_12)) & 0xff;
 }

err:
 return VAR_14;
}
