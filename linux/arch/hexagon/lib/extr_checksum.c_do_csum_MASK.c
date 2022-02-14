
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (int,int,scalar_t__) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ,int ,int,int ) ;
 int FUNC_4 (int,int,int,int) ;
 scalar_t__ FUNC_5 (int,int,int,int) ;

unsigned int FUNC_6(const void *VAR_0, int VAR_1)
{
 u64 VAR_2, VAR_3, VAR_4, VAR_5, *VAR_6, *VAR_7, *VAR_8;
 int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
 const char *VAR_14 = VAR_0;
 unsigned short *VAR_15;
 unsigned int *VAR_16;

 if (VAR_1 <= 0)
  return 0;

 VAR_10 = 0xF & (16-(((int) VAR_14) & 0xF)) ;
 VAR_13 = 0x7fffffffUL >> FUNC_2(VAR_1);
 VAR_10 = VAR_10 & VAR_13 ;

 VAR_11 = VAR_1 - VAR_10;
 VAR_12 = VAR_11 & 0xF;
 VAR_11 = VAR_11>>4;
 VAR_2 = VAR_11 << 18;
 VAR_3 = 0;

 if (VAR_10 & 1)
  VAR_2 += (u64) (VAR_14[0] << 8);
 VAR_15 = (unsigned short *) &VAR_14[VAR_10 & 1];
 if (VAR_10 & 2)
  VAR_3 += (u64) VAR_15[0];
 VAR_16 = (unsigned int *) &VAR_14[VAR_10 & 3];
 if (VAR_10 & 4) {
  VAR_2 = FUNC_1(VAR_2,
   FUNC_4(0, 0, 1, 1)^((u64)VAR_16[0]),
   FUNC_5(0, 0, 1, 1));
  VAR_2 += FUNC_5(0, 0, 1, 0);
 }
 VAR_8 = (u64 *) &VAR_14[VAR_10 & 7];
 if (VAR_10 & 8) {
  VAR_3 = FUNC_1(VAR_3,
   FUNC_4(1, 1, 1, 1)^(VAR_8[0]),
   FUNC_5(1, 1, 1, 1));
  VAR_3 += FUNC_3(0, 0, 1, 0);
 }
 VAR_6 = (u64 *) (VAR_14 + VAR_10);
 VAR_7 = (u64 *) (VAR_14 + VAR_10 + 8);

 if (VAR_11) {
  VAR_4 = *VAR_7; VAR_7 += 2;
  VAR_5 = *VAR_6; VAR_6 += 2;
  if (VAR_11 > 1)
   for (VAR_9 = 0; VAR_9 < VAR_11-1; VAR_9++) {
    VAR_2 = FUNC_1(VAR_2,
     VAR_4^FUNC_4(1, 1, 1, 1),
     FUNC_5(1, 1, 1, 1));
    VAR_3 = FUNC_1(VAR_3,
     VAR_5^FUNC_4(1, 1, 1, 1),
     FUNC_5(1, 1, 1, 1));
    VAR_4 = *VAR_7; VAR_7 += 2;
    VAR_5 = *VAR_6; VAR_6 += 2;
   }
  VAR_2 = FUNC_1(VAR_2, VAR_4^FUNC_4(1, 1, 1, 1),
   FUNC_5(1, 1, 1, 1));
  VAR_3 = FUNC_1(VAR_3, VAR_5^FUNC_4(1, 1, 1, 1),
   FUNC_5(1, 1, 1, 1));
 }

 VAR_16 = (unsigned int *) &VAR_14[VAR_10 + (VAR_11 * 16) + (VAR_12 & 8)];
 if (VAR_12 & 4) {
  VAR_3 = FUNC_1(VAR_3,
   FUNC_4(0, 0, 1, 1)^((u64)VAR_16[0]),
   FUNC_5(0, 0, 1, 1));
  VAR_3 += FUNC_5(0, 0, 1, 0);
 }
 VAR_15 = (unsigned short *) &VAR_14[VAR_10 + (VAR_11 * 16) + (VAR_12 & 12)];
 if (VAR_12 & 2)
  VAR_2 += (u64) VAR_15[0];

 if (VAR_12 & 1)
  VAR_3 += (u64) VAR_14[VAR_10 + (VAR_11 * 16) + (VAR_12 & 14)];

 VAR_8 = (u64 *) &VAR_14[VAR_10 + (VAR_11 * 16)];
 if (VAR_12 & 8) {
  VAR_2 = FUNC_1(VAR_2,
   FUNC_4(1, 1, 1, 1)^(VAR_8[0]),
   FUNC_5(1, 1, 1, 1));
  VAR_2 += FUNC_3(0, 0, 1, 0);
 }
 VAR_2 = FUNC_0((VAR_2+VAR_3)^FUNC_4(0, 0, 0, 1),
  FUNC_5(0, 0, 1, 1));
 VAR_2 += FUNC_4(0, 0, 0, 1);
 VAR_2 = FUNC_0(VAR_2, FUNC_5(0, 0, 1, 1));

 if (VAR_10 & 1)
  VAR_2 = (VAR_2 << 8) | (0xFF & (VAR_2 >> 8));

 return 0xFFFF & VAR_2;
}
