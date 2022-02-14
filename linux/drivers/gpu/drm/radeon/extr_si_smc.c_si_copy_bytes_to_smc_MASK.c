
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct radeon_device {int smc_idx_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct radeon_device*,int,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

int FUNC_5(struct radeon_device *VAR_2,
    u32 VAR_3,
    const u8 *VAR_4, u32 VAR_5, u32 VAR_6)
{
 unsigned long VAR_7;
 int VAR_8 = 0;
 u32 VAR_9, VAR_10, VAR_11, VAR_12;

 if (VAR_3 & 3)
  return -VAR_0;
 if ((VAR_3 + VAR_5) > VAR_6)
  return -VAR_0;

 VAR_11 = VAR_3;

 FUNC_3(&VAR_2->smc_idx_lock, VAR_7);
 while (VAR_5 >= 4) {

  VAR_9 = (VAR_4[0] << 24) | (VAR_4[1] << 16) | (VAR_4[2] << 8) | VAR_4[3];

  VAR_8 = FUNC_2(VAR_2, VAR_11, VAR_6);
  if (VAR_8)
   goto done;

  FUNC_1(VAR_1, VAR_9);

  VAR_4 += 4;
  VAR_5 -= 4;
  VAR_11 += 4;
 }


 if (VAR_5 > 0) {
  VAR_9 = 0;

  VAR_8 = FUNC_2(VAR_2, VAR_11, VAR_6);
  if (VAR_8)
   goto done;

  VAR_10 = FUNC_0(VAR_1);

  VAR_12 = 8 * (4 - VAR_5);

  while (VAR_5 > 0) {

   VAR_9 = (VAR_9 << 8) + *VAR_4++;
   VAR_5--;
  }

  VAR_9 <<= VAR_12;

  VAR_9 |= (VAR_10 & ~((~0UL) << VAR_12));

  VAR_8 = FUNC_2(VAR_2, VAR_11, VAR_6);
  if (VAR_8)
   goto done;

  FUNC_1(VAR_1, VAR_9);
 }

done:
 FUNC_4(&VAR_2->smc_idx_lock, VAR_7);

 return VAR_8;
}
