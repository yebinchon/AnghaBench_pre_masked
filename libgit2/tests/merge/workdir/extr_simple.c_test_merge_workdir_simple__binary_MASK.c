
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct merge_index_entry {int member_0; char* member_1; int member_2; char* member_3; } ;
typedef int git_oid ;
typedef int git_object ;
struct TYPE_3__ {int id; } ;
typedef TYPE_1__ git_index_entry ;
typedef int git_commit ;
typedef int git_annotated_commit ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int ,int *) ;
 int FUNC_6 (int ,char*) ;
 TYPE_1__* FUNC_7 (int ,char*,int ) ;
 int FUNC_8 (int ,int const**,int,int *,int *) ;
 scalar_t__ FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,char*) ;
 int FUNC_11 (int ,int *,int ,int *) ;
 int FUNC_12 (int ,struct merge_index_entry*,int) ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_13(void)
{
 git_oid VAR_3, VAR_4, VAR_5;
 git_commit *VAR_6;
 git_annotated_commit *VAR_7;
 const git_index_entry *VAR_8;

 struct merge_index_entry VAR_9[] = {
  { 0100644, "1c51d885170f57a0c4e8c69ff6363d91a5b51f85", 1, "binary" },
  { 0100644, "23ed141a6ae1e798b2f721afedbe947c119111ba", 2, "binary" },
  { 0100644, "836b8b82b26cab22eaaed8820877c76d6c8bca19", 3, "binary" },
 };

 FUNC_1(FUNC_10(&VAR_3, "cc338e4710c9b257106b8d16d82f86458d5beaf1"));
 FUNC_1(FUNC_10(&VAR_4, "ad01aebfdf2ac13145efafe3f9fcf798882f1730"));

 FUNC_1(FUNC_5(&VAR_6, VAR_1, &VAR_3));
 FUNC_1(FUNC_11(VAR_1, (git_object *)VAR_6, VAR_0, ((void*)0)));

 FUNC_1(FUNC_3(&VAR_7, VAR_1, &VAR_4));

 FUNC_1(FUNC_8(VAR_1, (const git_annotated_commit **)&VAR_7, 1, ((void*)0), ((void*)0)));

 FUNC_0(FUNC_12(VAR_2, VAR_9, 3));

 FUNC_1(FUNC_6(VAR_2, "binary"));
 FUNC_0((VAR_8 = FUNC_7(VAR_2, "binary", 0)) != ((void*)0));

 FUNC_1(FUNC_10(&VAR_5, "23ed141a6ae1e798b2f721afedbe947c119111ba"));
 FUNC_0(FUNC_9(&VAR_8->id, &VAR_5) == 0);

 FUNC_2(VAR_7);
 FUNC_4(VAR_6);
}
