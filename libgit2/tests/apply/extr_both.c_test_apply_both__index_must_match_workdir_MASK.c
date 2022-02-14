
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mode; char* path; int id; } ;
typedef TYPE_1__ git_index_entry ;
typedef int git_index ;
typedef int git_diff ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *,int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,char const*,int ) ;
 int FUNC_6 (int *,TYPE_1__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,char*) ;
 int FUNC_10 (int **,int ) ;
 int FUNC_11 (TYPE_1__*,int ,int) ;
 int VAR_3 ;
 int FUNC_12 (char const*) ;

void FUNC_13(void)
{
 git_diff *VAR_4;
 git_index *VAR_5;
 git_index_entry VAR_6;

 const char *VAR_7 = VAR_0;







 FUNC_0("merge-recursive/asparagus.txt",
     "This is a modification.\n");

 FUNC_2(FUNC_10(&VAR_5, VAR_3));

 FUNC_11(&VAR_6, 0, sizeof(git_index_entry));
 VAR_6.mode = 0100644;
 VAR_6.path = "asparagus.txt";
 FUNC_2(FUNC_9(&VAR_6.id, "06d3fefb8726ab1099acc76e02dfb85e034b2538"));
 FUNC_2(FUNC_6(VAR_5, &VAR_6));

 FUNC_2(FUNC_8(VAR_5));
 FUNC_7(VAR_5);

 FUNC_2(FUNC_5(&VAR_4, VAR_7, FUNC_12(VAR_7)));
 FUNC_1(VAR_2, FUNC_3(VAR_3, VAR_4, VAR_1, ((void*)0)));

 FUNC_4(VAR_4);
}
