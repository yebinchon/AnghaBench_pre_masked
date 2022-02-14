
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct orc_entry {int dummy; } ;


 unsigned long FUNC_0 (int*) ;

__attribute__((used)) static struct orc_entry *FUNC_1(int *VAR_0, struct orc_entry *VAR_1,
        unsigned int VAR_2, unsigned long VAR_3)
{
 int *VAR_4 = VAR_0;
 int *VAR_5 = VAR_0 + VAR_2 - 1;
 int *VAR_6 = VAR_4, *VAR_7 = VAR_4;

 if (!VAR_2)
  return ((void*)0);







 while (VAR_4 <= VAR_5) {
  VAR_6 = VAR_4 + ((VAR_5 - VAR_4) / 2);

  if (FUNC_0(VAR_6) <= VAR_3) {
   VAR_7 = VAR_6;
   VAR_4 = VAR_6 + 1;
  } else
   VAR_5 = VAR_6 - 1;
 }

 return VAR_1 + (VAR_7 - VAR_0);
}
