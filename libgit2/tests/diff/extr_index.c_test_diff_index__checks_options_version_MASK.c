
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int git_tree ;
struct TYPE_6__ {int klass; } ;
typedef TYPE_1__ git_error ;
struct TYPE_7__ {int version; } ;
typedef TYPE_2__ git_diff_options ;
typedef int git_diff ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (int **,int ,int *,int *,TYPE_2__*) ;
 int FUNC_4 () ;
 TYPE_1__* FUNC_5 () ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int ,char const*) ;

void FUNC_8(void)
{
 const char *VAR_3 = "26a125ee1bf";
 git_tree *VAR_4 = FUNC_7(VAR_2, VAR_3);
 git_diff_options VAR_5 = VAR_0;
 git_diff *VAR_6 = ((void*)0);
 const git_error *VAR_7;

 VAR_5.version = 0;
 FUNC_2(FUNC_3(&VAR_6, VAR_2, VAR_4, ((void*)0), &VAR_5));
 VAR_7 = FUNC_5();
 FUNC_0(VAR_1, VAR_7->klass);
 FUNC_1(VAR_6, ((void*)0));

 FUNC_4();
 VAR_5.version = 1024;
 FUNC_2(FUNC_3(&VAR_6, VAR_2, VAR_4, ((void*)0), &VAR_5));
 VAR_7 = FUNC_5();
 FUNC_0(VAR_1, VAR_7->klass);
 FUNC_1(VAR_6, ((void*)0));

 FUNC_6(VAR_4);
}
