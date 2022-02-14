
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct radeon_device {int smc_idx_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct radeon_device*,int,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

int FUNC_5(struct radeon_device *VAR_2,
       u16 VAR_3, const u8 *VAR_4,
       u16 VAR_5, u16 VAR_6)
{
 unsigned long VAR_7;
 u32 VAR_8, VAR_9, VAR_10;
 u16 VAR_11;
 int VAR_12 = 0;

 if (VAR_3 & 3)
  return -VAR_0;
 if ((VAR_3 + VAR_5) > VAR_6)
  return -VAR_0;

 VAR_11 = VAR_3;

 FUNC_3(&VAR_2->smc_idx_lock, VAR_7);
 while (VAR_5 >= 4) {

  VAR_8 = (VAR_4[0] << 24) | (VAR_4[1] << 16) | (VAR_4[2] << 8) | VAR_4[3];

  VAR_12 = FUNC_2(VAR_2, VAR_11, VAR_6);
  if (VAR_12)
   goto done;

  FUNC_1(VAR_1, VAR_8);

  VAR_4 += 4;
  VAR_5 -= 4;
  VAR_11 += 4;
 }


 if (VAR_5 > 0) {
  VAR_8 = 0;

  VAR_12 = FUNC_2(VAR_2, VAR_11, VAR_6);
  if (VAR_12)
   goto done;

  VAR_9 = FUNC_0(VAR_1);

  VAR_10 = 8 * (4 - VAR_5);

  while (VAR_5 > 0) {

   VAR_8 = (VAR_8 << 8) + *VAR_4++;
   VAR_5--;
  }

  VAR_8 <<= VAR_10;

  VAR_8 |= (VAR_9 & ~((~0UL) << VAR_10));

  VAR_12 = FUNC_2(VAR_2, VAR_11, VAR_6);
  if (VAR_12)
   goto done;

  FUNC_1(VAR_1, VAR_8);
 }

done:
 FUNC_4(&VAR_2->smc_idx_lock, VAR_7);

 return VAR_12;
}
