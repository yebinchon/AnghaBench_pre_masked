
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; } ;
typedef TYPE_1__ quakefile_t ;


 TYPE_1__* FUNC_0 (char*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;

quakefile_t *FUNC_3(int VAR_0, char *VAR_1[], int *VAR_2, char *VAR_3)
{
 quakefile_t *VAR_4, *VAR_5, *VAR_6;
 int VAR_7;
 char VAR_8[1024];

 VAR_4 = ((void*)0);
 VAR_5 = ((void*)0);
 for (; (*VAR_2)+1 < VAR_0 && VAR_1[(*VAR_2)+1][0] != '-'; (*VAR_2)++)
 {
  FUNC_1(VAR_8, VAR_1[(*VAR_2)+1]);
  for (VAR_7 = FUNC_2(VAR_8)-1; VAR_7 >= FUNC_2(VAR_8)-4; VAR_7--)
   if (VAR_8[VAR_7] == '.') break;
  if (VAR_7 >= FUNC_2(VAR_8)-4)
   FUNC_1(&VAR_8[VAR_7+1], VAR_3);
  VAR_6 = FUNC_0(VAR_8);
  if (!VAR_6) continue;
  if (VAR_5) VAR_5->next = VAR_6;
  else VAR_4 = VAR_6;
  VAR_5 = VAR_6;
  while(VAR_5->next) VAR_5 = VAR_5->next;
 }
 return VAR_4;
}
