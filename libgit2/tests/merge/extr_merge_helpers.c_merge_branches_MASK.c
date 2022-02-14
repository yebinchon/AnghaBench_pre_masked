
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int git_repository ;
typedef int git_reference ;
typedef int git_merge_options ;
struct TYPE_6__ {int checkout_strategy; } ;
typedef TYPE_1__ git_checkout_options ;
typedef int git_annotated_commit ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **,int *,int *) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (int *,int const**,int,int *,TYPE_1__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int *,char const*) ;
 int FUNC_7 (int **,int *,char*,char const*,int,int *) ;

int FUNC_8(git_repository *VAR_2,
 const char *VAR_3, const char *VAR_4,
 git_merge_options *VAR_5, git_checkout_options *VAR_6)
{
 git_reference *VAR_7, *VAR_8;
 git_annotated_commit *VAR_9;
 git_checkout_options VAR_10 = VAR_1;

 VAR_10.checkout_strategy = VAR_0;

 FUNC_0(FUNC_7(&VAR_7, VAR_2, "HEAD", VAR_3, 1, ((void*)0)));
 FUNC_0(FUNC_3(VAR_2, &VAR_10));

 FUNC_0(FUNC_6(&VAR_8, VAR_2, VAR_4));
 FUNC_0(FUNC_2(&VAR_9, VAR_2, VAR_8));

 FUNC_0(FUNC_4(VAR_2, (const git_annotated_commit **)&VAR_9, 1, VAR_5, VAR_6));

 FUNC_5(VAR_7);
 FUNC_5(VAR_8);
 FUNC_1(VAR_9);

 return 0;
}
