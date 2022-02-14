
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long sector_t ;
typedef int blocks ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,int,unsigned long long*) ;

__attribute__((used)) static int FUNC_1(const char *VAR_1, sector_t *VAR_2)
{
 unsigned long long VAR_3;
 sector_t VAR_4;

 if (FUNC_0(VAR_1, 10, &VAR_3) < 0)
  return -VAR_0;

 if (VAR_3 & 1ULL << (8 * sizeof(VAR_3) - 1))
  return -VAR_0;

 VAR_4 = VAR_3 * 2;
 if (VAR_4 != VAR_3 * 2)
  return -VAR_0;

 *VAR_2 = VAR_4;
 return 0;
}
