
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tca6507_chip {int* reg_file; int reg_set; } ;



__attribute__((used)) static void FUNC_0(struct tca6507_chip *VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3 = (1 << VAR_1);
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < 3; VAR_4++) {
  int VAR_5 = VAR_0->reg_file[VAR_4] & ~VAR_3;
  if (VAR_2 & (1 << VAR_4))
   VAR_5 |= VAR_3;
  if (VAR_0->reg_file[VAR_4] != VAR_5) {
   VAR_0->reg_file[VAR_4] = VAR_5;
   VAR_0->reg_set |= (1 << VAR_4);
  }
 }
}
