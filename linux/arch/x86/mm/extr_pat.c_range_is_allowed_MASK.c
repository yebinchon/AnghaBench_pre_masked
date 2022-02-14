
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 () ;

__attribute__((used)) static inline int FUNC_2(unsigned long VAR_2, unsigned long VAR_3)
{
 u64 VAR_4 = ((u64)VAR_2) << VAR_0;
 u64 VAR_5 = VAR_4 + VAR_3;
 u64 VAR_6 = VAR_4;

 if (!FUNC_1())
  return 1;

 while (VAR_6 < VAR_5) {
  if (!FUNC_0(VAR_2))
   return 0;
  VAR_6 += VAR_1;
  VAR_2++;
 }
 return 1;
}
