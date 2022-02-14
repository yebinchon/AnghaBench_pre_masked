
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 unsigned long VAR_1 ;
 scalar_t__ FUNC_1 (int,void*) ;

__attribute__((used)) static int FUNC_2(void *VAR_2, int VAR_3, int VAR_4)
{
 unsigned long *VAR_5;
 int VAR_6 = VAR_3 + VAR_4;
 int VAR_7 = 0;

 while (VAR_3 < VAR_6) {
  if (((VAR_3 & (VAR_0 - 1)) == 0) &&
      ((VAR_6 - VAR_3) >= VAR_0)) {
   VAR_5 = (unsigned long *)VAR_2 + FUNC_0(VAR_3);
   if (*VAR_5 == VAR_1) {
    VAR_7 += VAR_0;
    VAR_3 += VAR_0;
    continue;
   }
  }

  if (FUNC_1(VAR_3, VAR_2))
   VAR_7++;
  VAR_3++;
 }

 return VAR_7;
}
