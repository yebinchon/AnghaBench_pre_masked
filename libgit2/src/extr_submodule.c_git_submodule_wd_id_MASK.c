
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags; int const wd_oid; } ;
typedef TYPE_1__ git_submodule ;
typedef int git_repository ;
typedef int git_oid ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,TYPE_1__*) ;

const git_oid *FUNC_4(git_submodule *VAR_1)
{
 FUNC_0(VAR_1);


 if (!(VAR_1->flags & VAR_0)) {
  git_repository *VAR_2;


  if (!FUNC_3(&VAR_2, VAR_1))
   FUNC_2(VAR_2);
  else
   FUNC_1();
 }

 if (VAR_1->flags & VAR_0)
  return &VAR_1->wd_oid;
 else
  return ((void*)0);
}
