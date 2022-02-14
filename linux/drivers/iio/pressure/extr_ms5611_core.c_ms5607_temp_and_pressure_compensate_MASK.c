
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ms5611_chip_info {int* prom; } ;
typedef int s64 ;
typedef int s32 ;



__attribute__((used)) static int FUNC_0(struct ms5611_chip_info *VAR_0,
            s32 *VAR_1, s32 *VAR_2)
{
 s32 VAR_3 = *VAR_1, VAR_4 = *VAR_2;
 s64 VAR_5, VAR_6, VAR_7;

 VAR_7 = VAR_3 - (VAR_0->prom[5] << 8);
 VAR_5 = ((s64)VAR_0->prom[2] << 17) + ((VAR_0->prom[4] * VAR_7) >> 6);
 VAR_6 = ((s64)VAR_0->prom[1] << 16) + ((VAR_0->prom[3] * VAR_7) >> 7);

 VAR_3 = 2000 + ((VAR_0->prom[6] * VAR_7) >> 23);
 if (VAR_3 < 2000) {
  s64 VAR_8, VAR_9, VAR_10, VAR_11;

  VAR_10 = (VAR_7 * VAR_7) >> 31;
  VAR_11 = (VAR_3 - 2000) * (VAR_3 - 2000);
  VAR_8 = (61 * VAR_11) >> 4;
  VAR_9 = VAR_11 << 1;

  if (VAR_3 < -1500) {
   VAR_11 = (VAR_3 + 1500) * (VAR_3 + 1500);
   VAR_8 += 15 * VAR_11;
   VAR_9 += 8 * VAR_11;
  }

  VAR_3 -= VAR_10;
  VAR_5 -= VAR_8;
  VAR_6 -= VAR_9;
 }

 *VAR_1 = VAR_3;
 *VAR_2 = (((VAR_4 * VAR_6) >> 21) - VAR_5) >> 15;

 return 0;
}
