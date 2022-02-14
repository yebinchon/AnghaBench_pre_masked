
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int count; char** strings; } ;
typedef TYPE_1__ git_strarray ;


 int FUNC_0 (int ) ;
 char** FUNC_1 (int,int) ;

void FUNC_2(git_strarray *VAR_0, int VAR_1, char **VAR_2)
{
 unsigned int VAR_3;

 VAR_0->count = VAR_1;
 VAR_0->strings = FUNC_1(VAR_0->count, sizeof(char *));
 FUNC_0(VAR_0->strings != ((void*)0));

 for (VAR_3 = 0; VAR_3 < VAR_0->count; VAR_3++) {
  VAR_0->strings[VAR_3] = VAR_2[VAR_3];
 }

 return;
}
