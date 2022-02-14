
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fixed31_32 {long long value; } ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 unsigned long long VAR_1 ;
 unsigned long long VAR_2 ;
 unsigned long long FUNC_1 (unsigned long long,unsigned long long,unsigned long long*) ;

struct fixed31_32 FUNC_2(long long VAR_3, long long VAR_4)
{
 struct fixed31_32 VAR_5;

 bool VAR_6 = VAR_3 < 0;
 bool VAR_7 = VAR_4 < 0;

 unsigned long long VAR_8 = VAR_6 ? -VAR_3 : VAR_3;
 unsigned long long VAR_9 = VAR_7 ? -VAR_4 : VAR_4;

 unsigned long long VAR_10;



 unsigned long long VAR_11 = FUNC_1(
  VAR_8, VAR_9, &VAR_10);

 FUNC_0(VAR_11 <= VAR_2);


 {
  unsigned int VAR_12 = VAR_0;

  do {
   VAR_10 <<= 1;

   VAR_11 <<= 1;

   if (VAR_10 >= VAR_9) {
    VAR_11 |= 1;
    VAR_10 -= VAR_9;
   }
  } while (--VAR_12 != 0);
 }


 {
  unsigned long long VAR_13 = (VAR_10 << 1) >= VAR_9;

  FUNC_0(VAR_11 <= VAR_1 - VAR_13);

  VAR_11 += VAR_13;
 }

 VAR_5.value = (long long)VAR_11;

 if (VAR_6 ^ VAR_7)
  VAR_5.value = -VAR_5.value;

 return VAR_5;
}
