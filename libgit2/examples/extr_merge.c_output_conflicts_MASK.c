
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* path; } ;
typedef TYPE_1__ git_index_entry ;
typedef int git_index_conflict_iterator ;
typedef int git_index ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int *) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int *) ;
 int FUNC_4 (TYPE_1__ const**,TYPE_1__ const**,TYPE_1__ const**,int *) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_5(git_index *VAR_2)
{
 git_index_conflict_iterator *VAR_3;
 const git_index_entry *VAR_4;
 const git_index_entry *VAR_5;
 const git_index_entry *VAR_6;
 int VAR_7 = 0;

 FUNC_0(FUNC_3(&VAR_3, VAR_2), "failed to create conflict iterator", ((void*)0));

 while ((VAR_7 = FUNC_4(&VAR_4, &VAR_5, &VAR_6, VAR_3)) == 0) {
  FUNC_1(VAR_1, "conflict: a:%s o:%s t:%s\n",
          VAR_4 ? VAR_4->path : "NULL",
          VAR_5->path ? VAR_5->path : "NULL",
          VAR_6->path ? VAR_6->path : "NULL");
 }

 if (VAR_7 != VAR_0) {
  FUNC_1(VAR_1, "error iterating conflicts\n");
 }

 FUNC_2(VAR_3);
}
