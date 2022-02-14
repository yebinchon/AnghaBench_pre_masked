
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmic_table {int address; int reg; int bit; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(int VAR_1, struct pmic_table *VAR_2,
       int VAR_3, int *VAR_4, int *VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  if (VAR_2[VAR_6].address == VAR_1) {
   *VAR_4 = VAR_2[VAR_6].reg;
   if (VAR_5)
    *VAR_5 = VAR_2[VAR_6].bit;
   return 0;
  }
 }
 return -VAR_0;
}
