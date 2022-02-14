
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int git_repository ;
typedef int git_oid ;
struct TYPE_3__ {int id; } ;
typedef TYPE_1__ git_index_entry ;
typedef int git_index ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (char*) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (int *,int *) ;
 int VAR_0 ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *) ;
 TYPE_1__* FUNC_8 (int *,char*,int ) ;
 int FUNC_9 (int *,char*) ;
 int FUNC_10 (int **,int *) ;

void FUNC_11(void)
{
 git_index *VAR_1;
 git_repository *VAR_2;
 const git_index_entry *VAR_3;
 git_oid VAR_4;

 FUNC_5(&VAR_0, ((void*)0));

 VAR_2 = FUNC_3("issue_1397");

 FUNC_4(VAR_2, "core.autocrlf", 1);


 FUNC_2(FUNC_10(&VAR_1, VAR_2));





 FUNC_2(FUNC_9(&VAR_4, "8312e0889a9cbab77c732b6bc39b51a683e3a318"));


 FUNC_0((VAR_3 = FUNC_8(VAR_1, "crlf_file.txt", 0)) != ((void*)0));
 FUNC_1(&VAR_4, &VAR_3->id);


 FUNC_2(FUNC_6(VAR_1, "crlf_file.txt"));


 FUNC_0((VAR_3 = FUNC_8(VAR_1, "crlf_file.txt", 0)) != ((void*)0));
 FUNC_1(&VAR_4, &VAR_3->id);

 FUNC_7(VAR_1);
}
