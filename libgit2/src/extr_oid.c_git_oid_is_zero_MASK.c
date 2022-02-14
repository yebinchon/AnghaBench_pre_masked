
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char* id; } ;
typedef TYPE_1__ git_oid ;


 unsigned int VAR_0 ;

int FUNC_0(const git_oid *VAR_1)
{
 const unsigned char *VAR_2 = VAR_1->id;
 unsigned int VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3, ++VAR_2)
  if (*VAR_2 != 0)
   return 0;
 return 1;
}
