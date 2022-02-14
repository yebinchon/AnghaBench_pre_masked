
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gameport {int dummy; } ;
typedef int __u64 ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char FUNC_0 (struct gameport*) ;
 int FUNC_1 (struct gameport*,int) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;

__attribute__((used)) static unsigned char FUNC_4(struct gameport *VAR_2, unsigned int *VAR_3)
{
 unsigned long VAR_4;
 unsigned char VAR_5, VAR_6, VAR_7;
 __u64 VAR_8[2];
 int VAR_9[2], VAR_10[2];
 int VAR_11, VAR_12, VAR_13;

 int VAR_14 = FUNC_1(VAR_2, VAR_1);

 for (VAR_11 = 0; VAR_11 < 2; VAR_11++) {
  VAR_9[VAR_11] = VAR_8[VAR_11] = 0;
  VAR_10[VAR_11] = VAR_1;
 }

 FUNC_3(VAR_4);

 VAR_5 = FUNC_0(VAR_2);

 do {
  VAR_10[0]--; VAR_10[1]--;
  VAR_6 = FUNC_0(VAR_2);
  for (VAR_11 = 0, VAR_7 = VAR_5 ^ VAR_6; VAR_11 < 2 && VAR_7; VAR_11++, VAR_7 >>= 2)
   if (VAR_7 & 0x30) {
    if ((VAR_7 & 0x30) < 0x30 && VAR_9[VAR_11] < VAR_0 && VAR_10[VAR_11] > 0) {
     VAR_8[VAR_11] |= (__u64)((VAR_7 >> 5) & 1) << VAR_9[VAR_11]++;
     VAR_10[VAR_11] = VAR_14;
     VAR_5 = VAR_6;
    } else VAR_10[VAR_11] = 0;
   }
 } while (VAR_10[0] > 0 || VAR_10[1] > 0);

 FUNC_2(VAR_4);

 VAR_13 = 0;

 for (VAR_11 = 0; VAR_11 < 2; VAR_11++) {

  if (VAR_9[VAR_11] != VAR_0) continue;

  for (VAR_12 = 0; VAR_12 < VAR_0 && (VAR_8[VAR_11] & 0x04104107f) ^ 0x041041040; VAR_12++)
   VAR_8[VAR_11] = (VAR_8[VAR_11] >> 1) | ((__u64)(VAR_8[VAR_11] & 1) << (VAR_0 - 1));

  if (VAR_12 < VAR_0) VAR_13 |= (1 << VAR_11);

  VAR_3[VAR_11] = ((VAR_8[VAR_11] >> 7) & 0x000001f) | ((VAR_8[VAR_11] >> 8) & 0x00003e0)
   | ((VAR_8[VAR_11] >> 9) & 0x0007c00) | ((VAR_8[VAR_11] >> 10) & 0x00f8000)
   | ((VAR_8[VAR_11] >> 11) & 0x1f00000);

 }

 return VAR_13;
}
