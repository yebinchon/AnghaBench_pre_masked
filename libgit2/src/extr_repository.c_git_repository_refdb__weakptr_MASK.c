
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * _refdb; } ;
typedef TYPE_1__ git_repository ;
typedef int git_refdb ;


 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int) ;
 int * FUNC_2 (int **,int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,TYPE_1__*) ;

int FUNC_5(git_refdb **VAR_0, git_repository *VAR_1)
{
 int VAR_2 = 0;

 FUNC_1(VAR_0 && VAR_1);

 if (VAR_1->_refdb == ((void*)0)) {
  git_refdb *VAR_3;

  VAR_2 = FUNC_4(&VAR_3, VAR_1);
  if (!VAR_2) {
   FUNC_0(VAR_3, VAR_1);

   VAR_3 = FUNC_2(&VAR_1->_refdb, ((void*)0), VAR_3);
   if (VAR_3 != ((void*)0)) {
    FUNC_0(VAR_3, ((void*)0));
    FUNC_3(VAR_3);
   }
  }
 }

 *VAR_0 = VAR_1->_refdb;
 return VAR_2;
}
