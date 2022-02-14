
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sline {unsigned long flag; } ;



__attribute__((used)) static unsigned long FUNC_0(struct sline *VAR_0,
          unsigned long VAR_1,
          unsigned long VAR_2,
          unsigned long VAR_3,
          int VAR_4)
{







 while (VAR_2 <= VAR_3)
  if (VAR_4
      ? !(VAR_0[VAR_2].flag & VAR_1)
      : (VAR_0[VAR_2].flag & VAR_1))
   return VAR_2;
  else
   VAR_2++;
 return VAR_2;
}
