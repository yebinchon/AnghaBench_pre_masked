
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hexsz; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_0(const char *VAR_1, const char *VAR_2)
{
 const char *VAR_3 = VAR_1 + VAR_0->hexsz + 1;
 const char *VAR_4 = VAR_2;

 while (1) {
  if (*VAR_3 == '\n')
   return *VAR_4 ? -1 : 0;
  if (!*VAR_4)
   return 1;
  if (*VAR_3 != *VAR_4)
   return (unsigned char)*VAR_3 < (unsigned char)*VAR_4 ? -1 : +1;
  VAR_3++;
  VAR_4++;
 }
}
