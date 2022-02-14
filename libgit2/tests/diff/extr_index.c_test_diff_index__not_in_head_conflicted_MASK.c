
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int git_tree ;
struct TYPE_6__ {int member_0; } ;
struct TYPE_7__ {char* path; int id; int mode; TYPE_1__ member_0; } ;
typedef TYPE_2__ git_index_entry ;
typedef int git_index ;
struct TYPE_8__ {int status; } ;
typedef TYPE_3__ git_diff_delta ;
typedef int git_diff ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 TYPE_3__* FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int ,int *,int *,int *) ;
 int FUNC_6 (int *,int *,int *,TYPE_2__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,char*) ;
 int FUNC_10 (int **,int ) ;
 int FUNC_11 (int *) ;
 int * FUNC_12 (int ,char const*) ;

void FUNC_13(void)
{
 const char *VAR_3 = "26a125ee1bf";
 git_index_entry VAR_4 = {0};
 git_index *VAR_5;
 git_diff *VAR_6;
 const git_diff_delta *VAR_7;

 git_tree *VAR_8 = FUNC_12(VAR_2, VAR_3);

 FUNC_1(FUNC_10(&VAR_5, VAR_2));
 FUNC_1(FUNC_8(VAR_5, VAR_8));

 VAR_4.path = "file_not_in_head";
 VAR_4.mode = VAR_1;
 FUNC_9(&VAR_4.id, "2bd0a343aeef7a2cf0d158478966a6e587ff3863");
 FUNC_1(FUNC_6(VAR_5, ((void*)0), ((void*)0), &VAR_4));

 FUNC_1(FUNC_5(&VAR_6, VAR_2, VAR_8, VAR_5, ((void*)0)));

 FUNC_0(FUNC_4(VAR_6), 1);
 VAR_7 = FUNC_3(VAR_6, 0);
 FUNC_0(VAR_7->status, VAR_0);

 FUNC_2(VAR_6);
 FUNC_7(VAR_5);
 FUNC_11(VAR_8);
}
