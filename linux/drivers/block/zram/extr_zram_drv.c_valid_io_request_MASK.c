
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct zram {unsigned int disksize; } ;
typedef int sector_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static inline bool FUNC_1(struct zram *VAR_3,
  sector_t VAR_4, unsigned int VAR_5)
{
 u64 VAR_6, VAR_7;


 if (FUNC_0(VAR_4 & (VAR_2 - 1)))
  return 0;
 if (FUNC_0(VAR_5 & (VAR_1 - 1)))
  return 0;

 VAR_6 = VAR_4 + (VAR_5 >> VAR_0);
 VAR_7 = VAR_3->disksize >> VAR_0;

 if (FUNC_0(VAR_4 >= VAR_7 || VAR_6 > VAR_7 || VAR_4 > VAR_6))
  return 0;


 return 1;
}
