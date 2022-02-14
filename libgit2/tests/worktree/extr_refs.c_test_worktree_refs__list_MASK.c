
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned int count; int * strings; } ;
typedef TYPE_1__ git_strarray ;
struct TYPE_6__ {int worktree; int repo; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_4__ VAR_1 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,int ) ;

void FUNC_4(void)
{
 git_strarray VAR_2, VAR_3;
 unsigned VAR_4, VAR_5;
 int VAR_6 = 0;

 FUNC_0(FUNC_1(&VAR_2, VAR_1.repo));
 FUNC_0(FUNC_1(&VAR_3, VAR_1.worktree));

 if (VAR_2.count != VAR_3.count)
 {
  VAR_6 = VAR_0;
  goto exit;
 }

 for (VAR_4 = 0; VAR_4 < VAR_2.count; VAR_4++)
 {
  int VAR_7 = 0;

  for (VAR_5 = 0; VAR_5 < VAR_3.count; VAR_5++)
  {
   if (!FUNC_3(VAR_2.strings[VAR_4], VAR_3.strings[VAR_5]))
   {
    VAR_7 = 1;
    break;
   }
  }

  if (!VAR_7)
  {
   VAR_6 = VAR_0;
   goto exit;
  }
 }

exit:
 FUNC_2(&VAR_2);
 FUNC_2(&VAR_3);
 FUNC_0(VAR_6);
}
