
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
typedef int u32 ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long,unsigned long) ;
 unsigned long FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static unsigned long FUNC_6(u32 VAR_2, unsigned long VAR_3, int VAR_4)
{
 u64 VAR_5, VAR_6, VAR_7, VAR_8;
 unsigned long VAR_9, VAR_10;
 int VAR_11;

 if (!FUNC_2()) {





  FUNC_5(10 * VAR_1);
  FUNC_5(10 * VAR_1);
  FUNC_5(10 * VAR_1);
  FUNC_5(10 * VAR_1);
  FUNC_5(10 * VAR_1);
  return VAR_0;
 }


 FUNC_4((FUNC_3(0x61) & ~0x02) | 0x01, 0x61);






 FUNC_4(0xb0, 0x43);
 FUNC_4(VAR_2 & 0xff, 0x42);
 FUNC_4(VAR_2 >> 8, 0x42);

 VAR_5 = VAR_6 = VAR_7 = FUNC_1();

 VAR_11 = 0;
 VAR_10 = 0;
 VAR_9 = VAR_0;
 while ((FUNC_3(0x61) & 0x20) == 0) {
  VAR_7 = FUNC_1();
  VAR_8 = VAR_7 - VAR_5;
  VAR_5 = VAR_7;
  if ((unsigned long) VAR_8 < VAR_9)
   VAR_9 = (unsigned int) VAR_8;
  if ((unsigned long) VAR_8 > VAR_10)
   VAR_10 = (unsigned int) VAR_8;
  VAR_11++;
 }
 if (VAR_11 < VAR_4 || VAR_10 > 10 * VAR_9)
  return VAR_0;


 VAR_8 = VAR_7 - VAR_6;
 FUNC_0(VAR_8, VAR_3);
 return VAR_8;
}
