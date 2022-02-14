
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {size_t count; char** strings; } ;
typedef TYPE_1__ git_strarray ;
struct TYPE_9__ {char* ptr; int size; } ;
typedef TYPE_2__ git_buf ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*,char*) ;
 int FUNC_2 (TYPE_2__*,int) ;

int FUNC_3(git_buf *VAR_0, const git_strarray *VAR_1)
{
 size_t VAR_2;
 const char *VAR_3, *VAR_4;

 FUNC_0(VAR_0);

 if (!VAR_1 || !VAR_1->count)
  return 0;


 if (FUNC_1(VAR_0, VAR_1->strings[0]) < 0)
  return -1;


 for (VAR_2 = 1; VAR_2 < VAR_1->count; ++VAR_2) {

  for (VAR_3 = VAR_1->strings[VAR_2], VAR_4 = VAR_0->ptr;
    *VAR_3 && *VAR_3 == *VAR_4; VAR_3++, VAR_4++)
                 ;

  FUNC_2(VAR_0, VAR_4 - VAR_0->ptr);

  if (!VAR_0->size)
   break;
 }

 return 0;
}
