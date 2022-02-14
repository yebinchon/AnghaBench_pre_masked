
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* name; int len; } ;


 TYPE_1__* VAR_0 ;
 char* FUNC_0 (char*,char) ;
 void* FUNC_1 (char*) ;
 int FUNC_2 (char*) ;

void
FUNC_3(char *VAR_1)
{
 int VAR_2;
 char *VAR_3;

 VAR_3 = VAR_1;
 for (VAR_2 = 0; VAR_2 < 5; VAR_2++) {
  VAR_0[VAR_2].name = VAR_3;
  if ((VAR_3 = FUNC_0(VAR_3, ' ')) == ((void*)0)) {

   for (VAR_2 = 0; VAR_2 < 5; VAR_2++) {
    VAR_0[VAR_2].name = ((void*)0);
    VAR_0[VAR_2].len = 0;
   }
   return;
  }
  *VAR_3 = '\0';
  VAR_3++;
 }
 VAR_0[VAR_2].name = VAR_3;

 for (VAR_2 = 0; VAR_2 < 5; VAR_2++) {
  VAR_0[VAR_2].name = FUNC_1(VAR_0[VAR_2].name);
  VAR_0[VAR_2].len = VAR_0[VAR_2 + 1].name - VAR_0[VAR_2].name;
 }
 VAR_0[VAR_2].name = FUNC_1(VAR_0[VAR_2].name);
 VAR_0[VAR_2].len = FUNC_2(VAR_0[VAR_2].name);

 return;
}
