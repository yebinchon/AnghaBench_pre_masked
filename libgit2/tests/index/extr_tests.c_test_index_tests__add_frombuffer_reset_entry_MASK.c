
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int git_repository ;
typedef int git_oid ;
struct TYPE_6__ {int mode; char* path; int dev; int ino; int uid; int file_size; int id; } ;
typedef TYPE_1__ git_index_entry ;
typedef int git_index ;
typedef int git_filebuf ;
typedef int git_blob ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (char const*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int *) ;
 int VAR_2 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,char*,int ,int) ;
 int FUNC_11 (int *,char const*,int ) ;
 int FUNC_12 (char*,int) ;
 int FUNC_13 (int *,char*) ;
 int FUNC_14 (int *,TYPE_1__*,char const*,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 TYPE_1__* FUNC_17 (int *,int ) ;
 TYPE_1__* FUNC_18 (int *,char*,int ) ;
 int FUNC_19 (int *,char*) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int **,int *) ;
 int FUNC_22 (int **,char*,int ) ;
 int FUNC_23 (TYPE_1__*,int,int) ;
 int FUNC_24 (char const*) ;

void FUNC_25(void)
{
 git_index *VAR_3;
 git_repository *VAR_4;
        git_index_entry VAR_5;
 const git_index_entry *VAR_6;
 git_filebuf VAR_7 = VAR_0;

 git_oid VAR_8;
 git_blob *VAR_9;
 const char *VAR_10 = "here\n";
 const char *VAR_11 = "hey there\n";

 FUNC_5(&VAR_2, ((void*)0));


 FUNC_4(FUNC_22(&VAR_4, "./myrepo", 0));
 FUNC_4(FUNC_21(&VAR_3, VAR_4));
 FUNC_4(FUNC_12("myrepo/test.txt", 0777));
 FUNC_4(FUNC_10(&VAR_7, "myrepo/test.txt", 0, 0666));
 FUNC_4(FUNC_11(&VAR_7, VAR_10, FUNC_24(VAR_10)));
 FUNC_4(FUNC_9(&VAR_7));





 FUNC_4(FUNC_19(&VAR_8, "a8233120f6ad708f843d861ce2b7228ec4e3dec6"));

 FUNC_4(FUNC_13(VAR_3, "test.txt"));


 FUNC_23(&VAR_5, 0x0, sizeof(git_index_entry));
 VAR_5.mode = VAR_1;
 VAR_5.path = "test.txt";
 FUNC_4(FUNC_14(VAR_3, &VAR_5,
  VAR_11, FUNC_24(VAR_11)));


 FUNC_0(FUNC_15(VAR_3) == 1);
 VAR_6 = FUNC_17(VAR_3, 0);


 FUNC_2(&VAR_8, &VAR_6->id);

 FUNC_1(VAR_1, VAR_6->mode);


 FUNC_0((VAR_6 = FUNC_18(VAR_3, "test.txt", 0)) != ((void*)0));
 FUNC_2(&VAR_8, &VAR_6->id);
 FUNC_1(0, VAR_6->dev);
 FUNC_1(0, VAR_6->ino);
 FUNC_1(0, VAR_6->uid);
 FUNC_1(0, VAR_6->uid);
 FUNC_1(10, VAR_6->file_size);


 FUNC_4(FUNC_7(&VAR_9, VAR_4, &VAR_8));
 FUNC_3(VAR_11, FUNC_8(VAR_9));
 FUNC_6(VAR_9);

 FUNC_16(VAR_3);
 FUNC_20(VAR_4);
}
