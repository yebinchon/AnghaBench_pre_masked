
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_repository ;
typedef int git_oid ;
struct TYPE_4__ {int id; } ;
typedef TYPE_1__ git_index_entry ;
typedef int git_index ;
typedef int git_filebuf ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int *) ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*,int ,int) ;
 int FUNC_6 (int *,char*,int) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 TYPE_1__* FUNC_11 (int *,int ) ;
 TYPE_1__* FUNC_12 (int *,char*,int ) ;
 int FUNC_13 (int *,char*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int **,int *) ;
 int FUNC_16 (int **,char*,int ) ;

void FUNC_17(void)
{
 git_index *VAR_2;
 git_filebuf VAR_3 = VAR_0;
 git_repository *VAR_4;
 const git_index_entry *VAR_5;
 git_oid VAR_6;

 FUNC_3(&VAR_1, ((void*)0));


 FUNC_2(FUNC_16(&VAR_4, "./myrepo", 0));


 FUNC_2(FUNC_15(&VAR_2, VAR_4));
 FUNC_0(FUNC_9(VAR_2) == 0);


 FUNC_2(FUNC_7("myrepo/test.txt", 0777));
 FUNC_2(FUNC_5(&VAR_3, "myrepo/test.txt", 0, 0666));
 FUNC_2(FUNC_6(&VAR_3, "hey there\n", 10));
 FUNC_2(FUNC_4(&VAR_3));





 FUNC_2(FUNC_13(&VAR_6, "a8233120f6ad708f843d861ce2b7228ec4e3dec6"));


 FUNC_2(FUNC_8(VAR_2, "test.txt"));


 FUNC_0(FUNC_9(VAR_2) == 1);
 VAR_5 = FUNC_11(VAR_2, 0);


 FUNC_1(&VAR_6, &VAR_5->id);


 FUNC_0((VAR_5 = FUNC_12(VAR_2, "test.txt", 0)) != ((void*)0));
 FUNC_1(&VAR_6, &VAR_5->id);

 FUNC_10(VAR_2);
 FUNC_14(VAR_4);
}
