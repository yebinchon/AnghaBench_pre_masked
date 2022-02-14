
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int val; } ;
struct TYPE_4__ {TYPE_1__ refcount; } ;
typedef TYPE_2__ git_refcount ;
typedef int git_index ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int * VAR_0 ;

void FUNC_6(void)
{
 git_index *VAR_1;

 FUNC_1(FUNC_3(&VAR_1, "./my-index"));
 FUNC_0(((git_refcount *)VAR_1)->refcount.val == 1);

 FUNC_5(VAR_0, VAR_1);
 FUNC_0(((git_refcount *)VAR_1)->refcount.val == 2);

 FUNC_4(VAR_0);
 FUNC_0(((git_refcount *)VAR_1)->refcount.val == 1);

 FUNC_2(VAR_1);




 VAR_0 = ((void*)0);
}
