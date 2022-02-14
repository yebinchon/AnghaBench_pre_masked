
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long VAR_0 ;
 unsigned long FUNC_0 (char const**,char const*,long) ;

unsigned long FUNC_1(char const **VAR_1, char const *VAR_2, long VAR_3) {
 unsigned long VAR_4 = 5381;
 char const *VAR_5 = *VAR_1;

 if (VAR_3 & VAR_0)
  return FUNC_0(VAR_1, VAR_2, VAR_3);

 for (; VAR_5 < VAR_2 && *VAR_5 != '\n'; VAR_5++) {
  VAR_4 += (VAR_4 << 5);
  VAR_4 ^= (unsigned long) *VAR_5;
 }
 *VAR_1 = VAR_5 < VAR_2 ? VAR_5 + 1: VAR_5;

 return VAR_4;
}
