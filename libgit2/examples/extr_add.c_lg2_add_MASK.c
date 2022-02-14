
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct print_payload {int options; int * repo; int member_0; } ;
struct TYPE_5__ {int member_0; } ;
typedef TYPE_1__ git_strarray ;
typedef int git_repository ;
typedef int * git_index_matched_path_cb ;
typedef int git_index ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int *) ;
 int FUNC_1 (int *,TYPE_1__*,int ,int *,struct print_payload*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,TYPE_1__*,int *,struct print_payload*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int *) ;
 int FUNC_6 (TYPE_1__*,int,char**) ;
 int FUNC_7 (int*,int*,int,char**) ;
 int VAR_3 ;

int FUNC_8(git_repository *VAR_4, int VAR_5, char** VAR_6)
{
 git_index_matched_path_cb VAR_7 = ((void*)0);
 git_index *VAR_8;
 git_strarray VAR_9 = {0};
 int VAR_10 = 0, VAR_11 = 0;
 struct print_payload VAR_12 = {0};

 FUNC_7(&VAR_10, &VAR_11, VAR_5, VAR_6);
 FUNC_6(&VAR_9, VAR_5-VAR_11, VAR_6+VAR_11);

 FUNC_0(FUNC_5(&VAR_8, VAR_4), "Could not open repository index", ((void*)0));


 if ((VAR_10 & VAR_2) || (VAR_10 & VAR_0)) {
  VAR_7 = &VAR_3;
 }


 VAR_12.options = VAR_10;
 VAR_12.repo = VAR_4;

 if (VAR_10 & VAR_1) {
  FUNC_3(VAR_8, &VAR_9, VAR_7, &VAR_12);
 } else {
  FUNC_1(VAR_8, &VAR_9, 0, VAR_7, &VAR_12);
 }


 FUNC_4(VAR_8);
 FUNC_2(VAR_8);

 return 0;
}
