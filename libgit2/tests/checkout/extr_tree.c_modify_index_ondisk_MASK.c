
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_repository ;
struct TYPE_4__ {int member_0; } ;
struct TYPE_5__ {int mode; char* path; int id; TYPE_1__ member_0; } ;
typedef TYPE_2__ git_index_entry ;
typedef int git_index ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int *) ;
 int FUNC_7 (int **,int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(void)
{
 git_repository *VAR_1;
 git_index *VAR_2;
 git_index_entry VAR_3 = {0};

 FUNC_0(FUNC_7(&VAR_1, FUNC_8(VAR_0)));
 FUNC_0(FUNC_6(&VAR_2, VAR_1));

 FUNC_0(FUNC_4(&VAR_3.id, "1385f264afb75a56a5bec74243be9b367ba4ca08"));
 VAR_3.mode = 0100644;
 VAR_3.path = "README";

 FUNC_0(FUNC_1(VAR_2, &VAR_3));
 FUNC_0(FUNC_3(VAR_2));

 FUNC_2(VAR_2);
 FUNC_5(VAR_1);
}
