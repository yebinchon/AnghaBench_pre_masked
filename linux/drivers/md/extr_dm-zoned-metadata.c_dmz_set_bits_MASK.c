
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 unsigned long VAR_1 ;
 int FUNC_1 (unsigned int,unsigned long*) ;

__attribute__((used)) static unsigned int FUNC_2(unsigned long *VAR_2,
     unsigned int VAR_3, unsigned int VAR_4)
{
 unsigned long *VAR_5;
 unsigned int VAR_6 = VAR_3 + VAR_4;
 unsigned int VAR_7 = 0;

 while (VAR_3 < VAR_6) {
  if (((VAR_3 & (VAR_0 - 1)) == 0) &&
      ((VAR_6 - VAR_3) >= VAR_0)) {

   VAR_5 = VAR_2 + FUNC_0(VAR_3);
   if (*VAR_5 == 0) {
    *VAR_5 = VAR_1;
    VAR_7 += VAR_0;
    VAR_3 += VAR_0;
    continue;
   }
  }

  if (!FUNC_1(VAR_3, VAR_2))
   VAR_7++;
  VAR_3++;
 }

 return VAR_7;
}
