
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_repository ;
struct TYPE_4__ {int show_commit_oid_as_fallback; } ;
typedef TYPE_1__ git_describe_options ;
typedef int git_describe_format_options ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (char*,char*,int *,TYPE_1__*,int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int ) ;

void FUNC_5(void)
{
 git_repository *VAR_2;
 git_describe_options VAR_3 = VAR_1;
 git_describe_format_options VAR_4 = VAR_0;

 FUNC_2(FUNC_4(&VAR_2, FUNC_1("testrepo.git")));

 FUNC_0("hard_tag", "HEAD", VAR_2, &VAR_3, &VAR_4);

 VAR_3.show_commit_oid_as_fallback = 1;

 FUNC_0("be3563a*", "HEAD^", VAR_2, &VAR_3, &VAR_4);

 FUNC_3(VAR_2);
}
