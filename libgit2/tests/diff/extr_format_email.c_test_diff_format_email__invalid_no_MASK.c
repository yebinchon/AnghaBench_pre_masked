
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_oid ;
struct TYPE_4__ {int patch_no; int total_patches; int summary; int author; int id; } ;
typedef TYPE_1__ git_diff_format_email_options ;
typedef int git_diff ;
typedef int git_commit ;
typedef int git_buf ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int ,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,int ,int *,int *) ;
 int FUNC_9 (int *,int ,int *,int,int,int ,int *) ;
 int FUNC_10 (int *,int *,TYPE_1__*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,char*) ;
 int VAR_2 ;

void FUNC_13(void)
{
 git_oid VAR_3;
 git_commit *VAR_4 = ((void*)0);
 git_diff *VAR_5 = ((void*)0);
 git_diff_format_email_options VAR_6 = VAR_1;
 git_buf VAR_7 = VAR_0;

 FUNC_12(&VAR_3, "9264b96c6d104d0e07ae33d3007b6a48246c6f92");

 FUNC_1(FUNC_6(&VAR_4, VAR_2, &VAR_3));

 VAR_6.id = FUNC_5(VAR_4);
 VAR_6.author = FUNC_3(VAR_4);
 VAR_6.summary = FUNC_7(VAR_4);
 VAR_6.patch_no = 2;
 VAR_6.total_patches = 1;

 FUNC_1(FUNC_8(&VAR_5, VAR_2, VAR_4, ((void*)0)));
 FUNC_0(FUNC_10(&VAR_7, VAR_5, &VAR_6));
 FUNC_0(FUNC_9(&VAR_7, VAR_2, VAR_4, 2, 1, 0, ((void*)0)));
 FUNC_0(FUNC_9(&VAR_7, VAR_2, VAR_4, 0, 0, 0, ((void*)0)));

 FUNC_11(VAR_5);
 FUNC_4(VAR_4);
 FUNC_2(&VAR_7);
}
