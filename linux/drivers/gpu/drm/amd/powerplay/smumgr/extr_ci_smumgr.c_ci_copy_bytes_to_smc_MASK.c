
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct pp_hwmgr {int device; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct pp_hwmgr*,int,int) ;
 int VAR_1 ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(struct pp_hwmgr *VAR_2, uint32_t VAR_3,
    const uint8_t *VAR_4, uint32_t VAR_5, uint32_t VAR_6)
{
 int VAR_7;
 uint32_t VAR_8 = 0;
 uint32_t VAR_9;
 uint32_t VAR_10 = 0;
 uint32_t VAR_11;

 if ((3 & VAR_3)
  || ((VAR_3 + VAR_5) >= VAR_6)) {
  FUNC_3("smc_start_address invalid \n");
  return -VAR_0;
 }

 VAR_10 = VAR_3;

 while (VAR_5 >= 4) {

  VAR_8 = VAR_4[0] * 0x1000000 + VAR_4[1] * 0x10000 + VAR_4[2] * 0x100 + VAR_4[3];

  VAR_7 = FUNC_2(VAR_2, VAR_10, VAR_6);

  if (0 != VAR_7)
   return VAR_7;

  FUNC_1(VAR_2->device, VAR_1, VAR_8);

  VAR_4 += 4;
  VAR_5 -= 4;
  VAR_10 += 4;
 }

 if (0 != VAR_5) {

  VAR_8 = 0;

  VAR_7 = FUNC_2(VAR_2, VAR_10, VAR_6);

  if (0 != VAR_7)
   return VAR_7;


  VAR_9 = FUNC_0(VAR_2->device, VAR_1);

  VAR_11 = 8 * (4 - VAR_5);

  while (VAR_5 > 0) {

   VAR_8 = (0x100 * VAR_8) + *VAR_4++;
   VAR_5--;
  }

  VAR_8 <<= VAR_11;

  VAR_8 |= (VAR_9 & ~((~0UL) << VAR_11));

  VAR_7 = FUNC_2(VAR_2, VAR_10, VAR_6);

  if (0 != VAR_7)
   return VAR_7;

  FUNC_1(VAR_2->device, VAR_1, VAR_8);
 }

 return 0;
}
