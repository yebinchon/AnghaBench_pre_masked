
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct tps68470_pmic_table {int reg; int bitmask; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(u64 VAR_2,
       const struct tps68470_pmic_table *VAR_3,
       const unsigned int VAR_4, int *VAR_5,
       int *VAR_6)
{
 u64 VAR_7;

 VAR_7 = VAR_2 / 4;
 if (VAR_7 >= VAR_4)
  return -VAR_1;

 if (!VAR_5 || !VAR_6)
  return -VAR_0;

 *VAR_5 = VAR_3[VAR_7].reg;
 *VAR_6 = VAR_3[VAR_7].bitmask;

 return 0;
}
