
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_reference ;
struct TYPE_4__ {int download_tags; } ;
typedef TYPE_1__ git_fetch_options ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int ,char*) ;
 int FUNC_5 (int *,int ,char*,int ) ;
 int FUNC_6 (int ,int *,TYPE_1__*,int *) ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_7(void)
{
 git_reference *VAR_5;
 git_fetch_options VAR_6 = VAR_0;

 FUNC_1(FUNC_5(&VAR_3, VAR_4, "tagopt", FUNC_2(FUNC_0("testrepo.git"))));
 VAR_6.download_tags = VAR_1;
 FUNC_1(FUNC_6(VAR_3, ((void*)0), &VAR_6, ((void*)0)));

 FUNC_1(FUNC_4(&VAR_5, VAR_4, "refs/remotes/tagopt/master"));
 FUNC_3(VAR_5);
 FUNC_1(FUNC_4(&VAR_5, VAR_4, "refs/tags/hard_tag"));
 FUNC_3(VAR_5);

 VAR_6.download_tags = VAR_2;
 FUNC_1(FUNC_6(VAR_3, ((void*)0), &VAR_6, ((void*)0)));
 FUNC_1(FUNC_4(&VAR_5, VAR_4, "refs/remotes/tagopt/master"));
 FUNC_3(VAR_5);
}
