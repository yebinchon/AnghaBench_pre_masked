
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* downcased; char* id_string; char* camelcased; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (char const*) ;
 void* FUNC_1 (int ) ;
 char* FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(void)
{
 int VAR_2;

 if (VAR_1[0].downcased)
  return;


 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  const char *VAR_3 = VAR_1[VAR_2].id_string;
  int VAR_4 = FUNC_0(VAR_3);
  char *VAR_5 = FUNC_2(VAR_4);

  VAR_1[VAR_2].downcased = VAR_5;
  while (*VAR_3)
   if (*VAR_3 == '_')
    VAR_3++;
   else
    *(VAR_5)++ = FUNC_1(*(VAR_3)++);
  *VAR_5 = '\0';

  VAR_3 = VAR_1[VAR_2].id_string;
  VAR_5 = FUNC_2(VAR_4);
  VAR_1[VAR_2].camelcased = VAR_5;
  while (*VAR_3) {
   if (*VAR_3 == '_') {
    VAR_3++;
    if (*VAR_3)
     *VAR_5++ = *VAR_3++;
   } else {
    *VAR_5++ = FUNC_1(*VAR_3++);
   }
  }
  *VAR_5 = '\0';
 }
}
