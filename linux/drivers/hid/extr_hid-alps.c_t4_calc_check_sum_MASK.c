
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;



__attribute__((used)) static u16 FUNC_0(u8 *VAR_0,
  unsigned long VAR_1, unsigned long VAR_2)
{
 u16 VAR_3 = 0xFF, VAR_4 = 0xFF;
 unsigned long VAR_5 = 0;

 if (VAR_1 + VAR_2 >= 50)
  return 0;

 while (VAR_2 > 0) {
  u32 VAR_6 = VAR_2 > 20 ? 20 : VAR_2;

  VAR_2 -= VAR_6;

  do {
   VAR_3 += VAR_0[VAR_1 + VAR_5];
   VAR_4 += VAR_3;
   VAR_5++;
  } while (--VAR_6 > 0);

  VAR_3 = (VAR_3 & 0xFF) + (VAR_3 >> 8);
  VAR_4 = (VAR_4 & 0xFF) + (VAR_4 >> 8);
 }

 VAR_3 = (VAR_3 & 0xFF) + (VAR_3 >> 8);
 VAR_4 = (VAR_4 & 0xFF) + (VAR_4 >> 8);

 return(VAR_4 << 8 | VAR_3);
}
