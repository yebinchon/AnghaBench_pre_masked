
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int git_repository ;
struct TYPE_3__ {int path; } ;
typedef TYPE_1__ git_index_entry ;
typedef int git_index ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (int *,int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (int ,char*) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 TYPE_1__* FUNC_10 (int *,char*,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int **,int *) ;
 int FUNC_13 (int **,char*,int ) ;
 int FUNC_14 (char*,char*) ;

void FUNC_15(void)
{
 git_repository *VAR_2;
 git_index *VAR_3;
 const git_index_entry *VAR_4;
 int VAR_5;

 FUNC_4(&VAR_1, ((void*)0));

 FUNC_2(FUNC_13(&VAR_2, "./myrepo", 0));
 FUNC_2(FUNC_12(&VAR_3, VAR_2));

 VAR_5 = FUNC_7(VAR_3);

 FUNC_3("myrepo/test.txt", "hey there\n");
 FUNC_2(FUNC_6(VAR_3, "test.txt"));

 FUNC_2(FUNC_14("myrepo/test.txt", "myrepo/TEST.txt"));
 FUNC_3("myrepo/TEST.txt", "hello again\n");
 FUNC_2(FUNC_6(VAR_3, "TEST.txt"));

 if (VAR_5 & VAR_0)
  FUNC_1(1, (int)FUNC_8(VAR_3));
 else
  FUNC_1(2, (int)FUNC_8(VAR_3));


 FUNC_0((VAR_4 = FUNC_10(VAR_3, "test.txt", 0)) != ((void*)0));

 FUNC_0(FUNC_5(VAR_4->path, "test.txt") == 0);

 FUNC_0((VAR_4 = FUNC_10(VAR_3, "TEST.txt", 0)) != ((void*)0));
 if (VAR_5 & VAR_0)

  FUNC_0(FUNC_5(VAR_4->path, "test.txt") == 0);
 else
  FUNC_0(FUNC_5(VAR_4->path, "TEST.txt") == 0);

 FUNC_9(VAR_3);
 FUNC_11(VAR_2);
}
