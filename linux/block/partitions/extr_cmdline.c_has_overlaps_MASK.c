
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ sector_t ;



__attribute__((used)) static bool FUNC_0(sector_t VAR_0, sector_t VAR_1,
    sector_t VAR_2, sector_t VAR_3)
{
 sector_t VAR_4 = VAR_0 + VAR_1;
 sector_t VAR_5 = VAR_2 + VAR_3;

 if (VAR_0 >= VAR_2 && VAR_0 < VAR_5)
  return 1;

 if (VAR_4 > VAR_2 && VAR_4 <= VAR_5)
  return 1;

 if (VAR_2 >= VAR_0 && VAR_2 < VAR_4)
  return 1;

 if (VAR_5 > VAR_0 && VAR_5 <= VAR_4)
  return 1;

 return 0;
}
