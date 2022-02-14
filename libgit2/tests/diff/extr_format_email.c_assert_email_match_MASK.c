
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_oid ;
struct TYPE_4__ {int flags; int summary; int author; int id; } ;
typedef TYPE_1__ git_diff_format_email_options ;
typedef int git_diff ;
typedef int git_commit ;
typedef int git_buf ;


 int VAR_0 ;
 int FUNC_0 (char const*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,int ,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int **,int ,int *,int *) ;
 int FUNC_11 (int *,int ,int *,int,int,int ,int *) ;
 int FUNC_12 (int *,int *,TYPE_1__*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,char const*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_15(
 const char *VAR_2,
 const char *VAR_3,
 git_diff_format_email_options *VAR_4)
{
 git_oid VAR_5;
 git_commit *VAR_6 = ((void*)0);
 git_diff *VAR_7 = ((void*)0);
 git_buf VAR_8 = VAR_0;

 FUNC_14(&VAR_5, VAR_3);

 FUNC_1(FUNC_8(&VAR_6, VAR_1, &VAR_5));

 VAR_4->id = FUNC_7(VAR_6);
 VAR_4->author = FUNC_5(VAR_6);
 if (!VAR_4->summary)
  VAR_4->summary = FUNC_9(VAR_6);

 FUNC_1(FUNC_10(&VAR_7, VAR_1, VAR_6, ((void*)0)));
 FUNC_1(FUNC_12(&VAR_8, VAR_7, VAR_4));

 FUNC_0(VAR_2, FUNC_3(&VAR_8));
 FUNC_2(&VAR_8);

 FUNC_1(FUNC_11(
  &VAR_8, VAR_1, VAR_6, 1, 1, VAR_4->flags, ((void*)0)));
 FUNC_0(VAR_2, FUNC_3(&VAR_8));

 FUNC_13(VAR_7);
 FUNC_6(VAR_6);
 FUNC_4(&VAR_8);
}
