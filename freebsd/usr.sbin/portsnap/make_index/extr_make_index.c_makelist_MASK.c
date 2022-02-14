
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* name; } ;
typedef TYPE_1__ DEP ;


 int FUNC_0 (int,char*) ;
 TYPE_1__* FUNC_1 (size_t) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char**,char*) ;

__attribute__((used)) static DEP *
FUNC_5(char * VAR_0, size_t * VAR_1)
{
 DEP * VAR_2;
 size_t VAR_3;


 if (VAR_0[0] == 0) {
  *VAR_1 = 0;
  return ((void*)0);
 }


 *VAR_1 = 1;
 for (VAR_3 = 0; VAR_0[VAR_3] != 0; VAR_3++)
  if (VAR_0[VAR_3] == ' ')
   (*VAR_1)++;


 VAR_2 = FUNC_1(*VAR_1 * sizeof(DEP));
 if (VAR_2 == ((void*)0))
  FUNC_0(1, "malloc(DEP)");
 for (VAR_3 = 0; VAR_3 < *VAR_1; VAR_3++) {
  VAR_2[VAR_3].name = FUNC_2(FUNC_4(&VAR_0, " "));


  if (VAR_2[VAR_3].name[FUNC_3(VAR_2[VAR_3].name) - 1] == '/')
   VAR_2[VAR_3].name[FUNC_3(VAR_2[VAR_3].name) - 1] = 0;
 }

 return VAR_2;
}
