
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned char* id; } ;
typedef TYPE_1__ git_oid ;


 size_t VAR_0 ;

int FUNC_0(const git_oid *VAR_1, const git_oid *VAR_2, size_t VAR_3)
{
 const unsigned char *VAR_4 = VAR_1->id;
 const unsigned char *VAR_5 = VAR_2->id;

 if (VAR_3 > VAR_0)
  VAR_3 = VAR_0;

 while (VAR_3 > 1) {
  if (*VAR_4 != *VAR_5)
   return 1;
  VAR_4++;
  VAR_5++;
  VAR_3 -= 2;
 };

 if (VAR_3)
  if ((*VAR_4 ^ *VAR_5) & 0xf0)
   return 1;

 return 0;
}
