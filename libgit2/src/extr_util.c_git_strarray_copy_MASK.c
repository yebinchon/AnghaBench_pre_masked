
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t count; int * strings; } ;
typedef TYPE_1__ git_strarray ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int * FUNC_2 (size_t,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;

int FUNC_6(git_strarray *VAR_0, const git_strarray *VAR_1)
{
 size_t VAR_2;

 FUNC_1(VAR_0 && VAR_1);

 FUNC_5(VAR_0, 0, sizeof(*VAR_0));

 if (!VAR_1->count)
  return 0;

 VAR_0->strings = FUNC_2(VAR_1->count, sizeof(char *));
 FUNC_0(VAR_0->strings);

 for (VAR_2 = 0; VAR_2 < VAR_1->count; ++VAR_2) {
  if (!VAR_1->strings[VAR_2])
   continue;

  VAR_0->strings[VAR_0->count] = FUNC_3(VAR_1->strings[VAR_2]);
  if (!VAR_0->strings[VAR_0->count]) {
   FUNC_4(VAR_0);
   FUNC_5(VAR_0, 0, sizeof(*VAR_0));
   return -1;
  }

  VAR_0->count++;
 }

 return 0;
}
