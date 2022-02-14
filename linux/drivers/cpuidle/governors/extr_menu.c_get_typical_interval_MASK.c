
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint64_t ;
typedef unsigned int u64 ;
struct menu_device {unsigned int* intervals; } ;
typedef unsigned int int64_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int FUNC_0 (unsigned int,int) ;
 int FUNC_1 (unsigned int,int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static unsigned int FUNC_3(struct menu_device *VAR_5,
      unsigned int VAR_6)
{
 int VAR_7, VAR_8;
 unsigned int VAR_9, VAR_10, VAR_11, VAR_12;
 uint64_t VAR_13, VAR_14;

 VAR_11 = VAR_2;

again:


 VAR_9 = VAR_4;
 VAR_10 = 0;
 VAR_13 = 0;
 VAR_8 = 0;
 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  unsigned int VAR_15 = VAR_5->intervals[VAR_7];
  if (VAR_15 <= VAR_11) {
   VAR_13 += VAR_15;
   VAR_8++;
   if (VAR_15 > VAR_10)
    VAR_10 = VAR_15;

   if (VAR_15 < VAR_9)
    VAR_9 = VAR_15;
  }
 }





 if (VAR_9 >= VAR_6)
  return VAR_4;

 if (VAR_8 == VAR_0)
  VAR_12 = VAR_13 >> VAR_1;
 else
  VAR_12 = FUNC_0(VAR_13, VAR_8);


 VAR_14 = 0;
 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  unsigned int VAR_16 = VAR_5->intervals[VAR_7];
  if (VAR_16 <= VAR_11) {
   int64_t VAR_17 = (int64_t)VAR_16 - VAR_12;
   VAR_14 += VAR_17 * VAR_17;
  }
 }
 if (VAR_8 == VAR_0)
  VAR_14 >>= VAR_1;
 else
  FUNC_1(VAR_14, VAR_8);
 if (FUNC_2(VAR_14 <= VAR_3/36)) {
  if ((((u64)VAR_12*VAR_12 > VAR_14*36) && (VAR_8 * 4 >= VAR_0 * 3))
       || VAR_14 <= 400) {
   return VAR_12;
  }
 }
 if ((VAR_8 * 4) <= VAR_0 * 3)
  return VAR_4;

 VAR_11 = VAR_10 - 1;
 goto again;
}
