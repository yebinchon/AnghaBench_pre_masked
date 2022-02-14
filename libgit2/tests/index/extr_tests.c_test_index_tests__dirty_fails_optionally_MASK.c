
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_repository ;
struct TYPE_4__ {int member_0; } ;
struct TYPE_5__ {char* path; void* mode; TYPE_1__ member_0; } ;
typedef TYPE_2__ git_index_entry ;
typedef int git_index ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int * FUNC_4 (char*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,TYPE_2__*,char*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int **,int *) ;

void FUNC_11(void)
{
 git_repository *VAR_3;
 git_index *VAR_4;
 git_index_entry VAR_5 = {0};


 VAR_3 = FUNC_4("testrepo");
 FUNC_2(FUNC_10(&VAR_4, VAR_3));


 VAR_5.mode = VAR_1;
 VAR_5.path = "test.txt";
 FUNC_2(FUNC_6(VAR_4, &VAR_5, "Hi.\n", 4));
 FUNC_0(FUNC_8(VAR_4));

 FUNC_2(FUNC_5(VAR_3, ((void*)0)));


 VAR_5.mode = VAR_1;
 VAR_5.path = "test.txt";
 FUNC_2(FUNC_6(VAR_4, &VAR_5, "Hi.\n", 4));
 FUNC_0(FUNC_8(VAR_4));

 FUNC_2(FUNC_9(VAR_2, 1));
 FUNC_1(VAR_0, FUNC_5(VAR_3, ((void*)0)));

 FUNC_7(VAR_4);
 FUNC_3();
}
