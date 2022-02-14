
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int git_tree ;
struct TYPE_7__ {int context_lines; int interhunk_lines; } ;
typedef TYPE_1__ git_diff_options ;
typedef int git_diff ;
typedef int exp ;
struct TYPE_8__ {int files; } ;
typedef TYPE_2__ diff_expects ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *,int ,int *,int *,int *,TYPE_2__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int ,int *,int *,TYPE_1__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_2__*,int ,int) ;
 int * FUNC_8 (int ,char const*) ;

void FUNC_9(void)
{

 const char *VAR_3 = "26a125ee1bf";
 const char *VAR_4 = "0017bd4ab1ec3";
 git_tree *VAR_5 = FUNC_8(VAR_2, VAR_3);
 git_tree *VAR_6 = FUNC_8(VAR_2, VAR_4);
 git_diff_options VAR_7 = VAR_0;
 git_diff *VAR_8 = ((void*)0);
 diff_expects VAR_9;

 FUNC_0(VAR_5);
 FUNC_0(VAR_6);

 VAR_7.context_lines = 1;
 VAR_7.interhunk_lines = 1;

 FUNC_7(&VAR_9, 0, sizeof(VAR_9));

 FUNC_2(FUNC_5(&VAR_8, VAR_2, VAR_5, ((void*)0), &VAR_7));

 FUNC_1(1, FUNC_3(
  VAR_8, VAR_1, ((void*)0), ((void*)0), ((void*)0), &VAR_9) );

 FUNC_1(2, VAR_9.files);

 FUNC_4(VAR_8);
 VAR_8 = ((void*)0);

 FUNC_6(VAR_5);
 FUNC_6(VAR_6);
}
