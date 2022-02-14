
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 unsigned long FUNC_0 (unsigned long) ;

unsigned long FUNC_1(const unsigned long *VAR_1, unsigned long VAR_2,
    unsigned long VAR_3)
{
 const unsigned long *VAR_4 = VAR_1 + (VAR_3 / VAR_0);
 unsigned long VAR_5 = VAR_3 & ~(VAR_0 - 1);
 unsigned long VAR_6;

 if (VAR_3 >= VAR_2)
  return VAR_2;
 VAR_2 -= VAR_5;
 VAR_3 %= VAR_0;
 if (VAR_3) {
  VAR_6 = *(VAR_4++);
  VAR_6 &= (~0UL >> VAR_3);
  if (VAR_2 < VAR_0)
   goto found_first;
  if (VAR_6)
   goto found_middle;
  VAR_2 -= VAR_0;
  VAR_5 += VAR_0;
 }
 while (VAR_2 & ~(VAR_0-1)) {
  if ((VAR_6 = *(VAR_4++)))
   goto found_middle;
  VAR_5 += VAR_0;
  VAR_2 -= VAR_0;
 }
 if (!VAR_2)
  return VAR_5;
 VAR_6 = *VAR_4;
found_first:
 VAR_6 &= (~0UL << (VAR_0 - VAR_2));
 if (!VAR_6)
  return VAR_5 + VAR_2;
found_middle:
 return VAR_5 + (FUNC_0(VAR_6) ^ (VAR_0 - 1));
}
