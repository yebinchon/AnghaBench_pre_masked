
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_repository ;
typedef int git_oid ;
struct TYPE_4__ {int member_0; } ;
struct TYPE_5__ {char* path; int id; int mode; TYPE_1__ member_0; } ;
typedef TYPE_2__ git_index_entry ;
typedef int git_index ;
typedef int git_annotated_commit ;


 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **,int ,int *) ;
 int FUNC_3 (int ,TYPE_2__*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int const**,int,int *,int *) ;
 int FUNC_9 (int *,char*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int **,int *) ;
 int FUNC_12 (int **,int ) ;
 int FUNC_13 (int ) ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_14(void)
{
 git_repository *VAR_4;
 git_annotated_commit *VAR_5[1];
 git_oid VAR_6;
 git_index_entry VAR_7 = {0};
 git_index *VAR_8;

 FUNC_0(FUNC_12(&VAR_4, FUNC_13(VAR_2)));
 FUNC_0(FUNC_11(&VAR_8, VAR_4));
 FUNC_0(FUNC_6(VAR_3, 0));

 VAR_7.mode = VAR_0;
 FUNC_0(FUNC_9(&VAR_7.id, "11deab00b2d3a6f5a3073988ac050c2d7b6655e2"));
 VAR_7.path = "automergeable.txt";
 FUNC_0(FUNC_3(VAR_3, &VAR_7));

 FUNC_0(FUNC_4(VAR_8, "automergeable.txt"));
 FUNC_0(FUNC_7(VAR_8));

 FUNC_0(FUNC_9(&VAR_6, VAR_1));
 FUNC_0(FUNC_2(&VAR_5[0], VAR_2, &VAR_6));
 FUNC_0(FUNC_8(VAR_2, (const git_annotated_commit **)VAR_5, 1, ((void*)0), ((void*)0)));

 FUNC_5(VAR_8);
 FUNC_10(VAR_4);
 FUNC_1(VAR_5[0]);
}
