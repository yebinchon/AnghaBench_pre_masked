
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int git_repository ;
struct TYPE_3__ {int val; } ;
struct TYPE_4__ {TYPE_1__ refcount; } ;
typedef TYPE_2__ git_refcount ;
typedef int git_odb ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int *) ;
 int FUNC_6 (int **,int ) ;

void FUNC_7(void)
{
 git_odb *VAR_0;
 git_repository *VAR_1;

 FUNC_2(FUNC_6(&VAR_1, FUNC_1("testrepo.git")));

 FUNC_2(FUNC_5(&VAR_0, VAR_1));
 FUNC_0(((git_refcount *)VAR_0)->refcount.val == 2);

 FUNC_4(VAR_1);
 FUNC_0(((git_refcount *)VAR_0)->refcount.val == 1);

 FUNC_3(VAR_0);
}
