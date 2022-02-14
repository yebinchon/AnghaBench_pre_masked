
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int git_repository ;
typedef int git_oid ;
struct TYPE_6__ {char* path; int id; int mode; } ;
typedef TYPE_1__ git_index_entry ;
typedef int git_index ;
typedef int git_blob ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (char const*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int *) ;
 int VAR_1 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,TYPE_1__*,char const*,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 TYPE_1__* FUNC_12 (int *,int ) ;
 TYPE_1__* FUNC_13 (int *,char*,int ) ;
 int FUNC_14 (int *,char*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int **,int *) ;
 int FUNC_17 (int **,char*,int ) ;
 int FUNC_18 (TYPE_1__*,int,int) ;
 int FUNC_19 (char const*) ;

void FUNC_20(void)
{
 git_index *VAR_2;
 git_repository *VAR_3;
        git_index_entry VAR_4;
 const git_index_entry *VAR_5;

 git_oid VAR_6;
 git_blob *VAR_7;

 const char *VAR_8 = "hey there\n";

 FUNC_5(&VAR_1, ((void*)0));


 FUNC_4(FUNC_17(&VAR_3, "./myrepo", 0));


 FUNC_4(FUNC_16(&VAR_2, VAR_3));
 FUNC_0(FUNC_10(VAR_2) == 0);





 FUNC_4(FUNC_14(&VAR_6, "a8233120f6ad708f843d861ce2b7228ec4e3dec6"));


 FUNC_18(&VAR_4, 0x0, sizeof(git_index_entry));
 VAR_4.mode = VAR_0;
 VAR_4.path = "test.txt";
 FUNC_4(FUNC_9(VAR_2, &VAR_4,
  VAR_8, FUNC_19(VAR_8)));


 FUNC_0(FUNC_10(VAR_2) == 1);
 VAR_5 = FUNC_12(VAR_2, 0);


 FUNC_2(&VAR_6, &VAR_5->id);

 FUNC_1(VAR_0, VAR_5->mode);


 FUNC_0((VAR_5 = FUNC_13(VAR_2, "test.txt", 0)) != ((void*)0));
 FUNC_2(&VAR_6, &VAR_5->id);


 FUNC_4(FUNC_7(&VAR_7, VAR_3, &VAR_6));
 FUNC_3(
  VAR_8, FUNC_8(VAR_7));
 FUNC_6(VAR_7);

 FUNC_11(VAR_2);
 FUNC_15(VAR_3);
}
