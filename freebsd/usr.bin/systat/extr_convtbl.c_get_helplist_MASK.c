
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* name; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 char* FUNC_0 (size_t) ;
 int FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 (char*) ;

const char *
FUNC_3(void)
{
 int VAR_2;
 size_t VAR_3;
 static char *VAR_4;

 if (VAR_4 == ((void*)0)) {
  VAR_3 = 0;
  for (VAR_2 = 0; VAR_2 <= VAR_0; VAR_2++)
   VAR_3 += FUNC_2(VAR_1[VAR_2].name) + 2;
  if ((VAR_4 = FUNC_0(VAR_3)) != ((void*)0)) {
   VAR_4[0] = '\0';
   for (VAR_2 = 0; VAR_2 <= VAR_0; VAR_2++) {
    FUNC_1(VAR_4, VAR_1[VAR_2].name);
    if (VAR_2 < VAR_0)
     FUNC_1(VAR_4, ", ");
   }
  } else
   return ("");
 }
 return (VAR_4);
}
