
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct entry {scalar_t__ line2; } ;



__attribute__((used)) static int FUNC_0(struct entry **VAR_0, int VAR_1,
  struct entry *VAR_2)
{
 int VAR_3 = -1, VAR_4 = VAR_1;

 while (VAR_3 + 1 < VAR_4) {
  int VAR_5 = VAR_3 + (VAR_4 - VAR_3) / 2;

  if (VAR_0[VAR_5]->line2 > VAR_2->line2)
   VAR_4 = VAR_5;
  else
   VAR_3 = VAR_5;
 }

 return VAR_3;
}
