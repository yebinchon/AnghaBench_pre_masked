
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {long size; char* ptr; } ;
typedef TYPE_1__ xrecord_t ;


 int VAR_0 ;
 int FUNC_0 (char) ;

__attribute__((used)) static int FUNC_1(xrecord_t *VAR_1)
{
 long VAR_2;
 int VAR_3 = 0;

 for (VAR_2 = 0; VAR_2 < VAR_1->size; VAR_2++) {
  char VAR_4 = VAR_1->ptr[VAR_2];

  if (!FUNC_0(VAR_4))
   return VAR_3;
  else if (VAR_4 == ' ')
   VAR_3 += 1;
  else if (VAR_4 == '\t')
   VAR_3 += 8 - VAR_3 % 8;


  if (VAR_3 >= VAR_0)
   return VAR_0;
 }


 return -1;
}
