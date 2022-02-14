
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ status; int count; } ;
typedef TYPE_1__ status_entry_single ;
typedef int result ;
typedef int git_repository ;
typedef int git_index ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,char*) ;
 int VAR_3 ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int **,int *) ;
 int FUNC_10 (int **,char*,int ) ;
 int FUNC_11 (int *,int ,TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*,int ,int) ;

void FUNC_13(void)
{
 git_repository *VAR_4;
 git_index *VAR_5;
 status_entry_single VAR_6;

 FUNC_4(&VAR_3, "getting_started");

 FUNC_3(FUNC_10(&VAR_4, "getting_started", 0));
 FUNC_2("getting_started/testfile.txt", "content\n");

 FUNC_12(&VAR_6, 0, sizeof(VAR_6));
 FUNC_3(FUNC_11(VAR_4, VAR_2, &VAR_6));
 FUNC_1(1, VAR_6.count);
 FUNC_0(VAR_6.status == VAR_1);

 FUNC_3(FUNC_9(&VAR_5, VAR_4));
 FUNC_3(FUNC_5(VAR_5, "testfile.txt"));
 FUNC_3(FUNC_7(VAR_5));

 FUNC_12(&VAR_6, 0, sizeof(VAR_6));
 FUNC_3(FUNC_11(VAR_4, VAR_2, &VAR_6));
 FUNC_1(1, VAR_6.count);
 FUNC_0(VAR_6.status == VAR_0);

 FUNC_6(VAR_5);
 FUNC_8(VAR_4);
}
