
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ucs_char_t ;
struct interval {scalar_t__ first; scalar_t__ last; } ;



__attribute__((used)) static int FUNC_0(ucs_char_t VAR_0, const struct interval *VAR_1, int VAR_2)
{
 int VAR_3 = 0;
 int VAR_4;

 if (VAR_0 < VAR_1[0].first || VAR_0 > VAR_1[VAR_2].last)
  return 0;
 while (VAR_2 >= VAR_3) {
  VAR_4 = VAR_3 + (VAR_2 - VAR_3) / 2;
  if (VAR_0 > VAR_1[VAR_4].last)
   VAR_3 = VAR_4 + 1;
  else if (VAR_0 < VAR_1[VAR_4].first)
   VAR_2 = VAR_4 - 1;
  else
   return 1;
 }

 return 0;
}
