
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int iterator_time; int commit_pool; int commits; int odb; } ;
typedef TYPE_1__ git_revwalk ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*) ;

void FUNC_6(git_revwalk *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return;

 FUNC_5(VAR_0);
 FUNC_1(VAR_0->odb);

 FUNC_2(VAR_0->commits);
 FUNC_3(&VAR_0->commit_pool);
 FUNC_4(&VAR_0->iterator_time);
 FUNC_0(VAR_0);
}
