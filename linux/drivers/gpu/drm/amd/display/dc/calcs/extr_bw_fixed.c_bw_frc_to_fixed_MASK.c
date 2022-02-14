
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct bw_fixed {scalar_t__ value; } ;
typedef scalar_t__ int64_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,int,int*) ;

struct bw_fixed FUNC_3(int64_t VAR_3, int64_t VAR_4)
{
 struct bw_fixed VAR_5;
 bool VAR_6 = VAR_3 < 0;
 bool VAR_7 = VAR_4 < 0;
 uint64_t VAR_8;
 uint64_t VAR_9;
 uint64_t VAR_10;


 uint64_t VAR_11;

 FUNC_0(VAR_4 != 0);

 VAR_8 = FUNC_1(VAR_3);
 VAR_9 = FUNC_1(VAR_4);
 VAR_11 = FUNC_2(VAR_8, VAR_9, &VAR_10);

 FUNC_0(VAR_11 <= VAR_1);


 {
  uint32_t VAR_12 = VAR_0;

  do
  {
   VAR_10 <<= 1;

   VAR_11 <<= 1;

   if (VAR_10 >= VAR_9)
   {
    VAR_11 |= 1;
    VAR_10 -= VAR_9;
   }
  } while (--VAR_12 != 0);
 }


 {
  uint64_t VAR_13 = (VAR_10 << 1) >= VAR_9;

  FUNC_0(VAR_11 <= VAR_2 - VAR_13);

  VAR_11 += VAR_13;
 }

 VAR_5.value = (int64_t)(VAR_11);

 if (VAR_6 ^ VAR_7)
  VAR_5.value = -VAR_5.value;
 return VAR_5;
}
