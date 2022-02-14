
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int git_repository ;
struct TYPE_6__ {int * repo; } ;
typedef TYPE_1__ git_refdb ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int) ;
 TYPE_1__* FUNC_3 (int,int) ;

int FUNC_4(git_refdb **VAR_0, git_repository *VAR_1)
{
 git_refdb *VAR_2;

 FUNC_2(VAR_0 && VAR_1);

 VAR_2 = FUNC_3(1, sizeof(*VAR_2));
 FUNC_0(VAR_2);

 VAR_2->repo = VAR_1;

 *VAR_0 = VAR_2;
 FUNC_1(VAR_2);
 return 0;
}
