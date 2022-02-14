
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_stat {int stat_flags; } ;


 int VAR_0 ;
 void* FUNC_0 (unsigned long long) ;

__attribute__((used)) static unsigned long long FUNC_1(struct dm_stat *VAR_1, unsigned long long VAR_2)
{
 unsigned long long VAR_3;
 unsigned VAR_4;

 if (VAR_1->stat_flags & VAR_0)
  return VAR_2;

 VAR_3 = 0;
 if (VAR_2)
  VAR_3 = FUNC_0(VAR_2 & 0x3fffff);
 if (VAR_2 >= 1 << 22) {
  VAR_4 = FUNC_0(1 << 22);
  VAR_3 += (unsigned long long)VAR_4 * (unsigned long long)FUNC_0((VAR_2 >> 22) & 0x3fffff);
 }
 if (VAR_2 >= 1ULL << 44)
  VAR_3 += (unsigned long long)VAR_4 * (unsigned long long)VAR_4 * (unsigned long long)FUNC_0(VAR_2 >> 44);

 return VAR_3;
}
