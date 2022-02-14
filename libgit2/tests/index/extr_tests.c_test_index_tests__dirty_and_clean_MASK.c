
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_repository ;
struct TYPE_4__ {int member_0; } ;
struct TYPE_5__ {char* path; int mode; TYPE_1__ member_0; } ;
typedef TYPE_2__ git_index_entry ;
typedef int git_index ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,TYPE_2__*,char*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int **,int *) ;
 int FUNC_11 (int **,char*,int ) ;

void FUNC_12(void)
{
 git_repository *VAR_1;
 git_index *VAR_2;
 git_index_entry VAR_3 = {0};


 FUNC_1(FUNC_11(&VAR_1, "./myrepo", 0));
 FUNC_1(FUNC_10(&VAR_2, VAR_1));

 FUNC_0(FUNC_3(VAR_2) == 0);
 FUNC_0(!FUNC_5(VAR_2));


 VAR_3.mode = VAR_0;
 VAR_3.path = "test.txt";
 FUNC_1(FUNC_2(VAR_2, &VAR_3, "Hi.\n", 4));
 FUNC_0(FUNC_3(VAR_2) == 1);
 FUNC_0(FUNC_5(VAR_2));


 FUNC_1(FUNC_8(VAR_2));
 FUNC_0(!FUNC_5(VAR_2));


 FUNC_1(FUNC_7(VAR_2, "test.txt"));
 FUNC_0(FUNC_3(VAR_2) == 0);
 FUNC_0(FUNC_5(VAR_2));


 FUNC_1(FUNC_8(VAR_2));
 FUNC_0(!FUNC_5(VAR_2));


 FUNC_1(FUNC_6(VAR_2, 0));
 FUNC_0(!FUNC_5(VAR_2));


 FUNC_1(FUNC_2(VAR_2, &VAR_3, "Hi.\n", 4));
 FUNC_0(FUNC_3(VAR_2) == 1);
 FUNC_0(FUNC_5(VAR_2));

 FUNC_1(FUNC_6(VAR_2, 0));
 FUNC_0(FUNC_5(VAR_2));


 FUNC_1(FUNC_6(VAR_2, 1));
 FUNC_0(!FUNC_5(VAR_2));

 FUNC_4(VAR_2);
 FUNC_9(VAR_1);
}
