
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* path; int mode; int id; } ;
typedef TYPE_1__ git_index_entry ;
typedef int git_index ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__ const*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 int FUNC_5 (int *,TYPE_1__*) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *) ;
 TYPE_1__* FUNC_8 (int *,char*,int ) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int **,int ) ;

void FUNC_11(void)
{
 git_index *VAR_3;
 git_index_entry VAR_4;
 const git_index_entry *VAR_5;

 FUNC_4(FUNC_10(&VAR_3, VAR_2));


 FUNC_3("./filemodes/dummy-file.txt", "new-file\n");
 FUNC_4(FUNC_6(VAR_3, "dummy-file.txt"));
 FUNC_1((VAR_5 = FUNC_8(VAR_3, "dummy-file.txt", 0)));

 FUNC_0(&VAR_4, 0);
 VAR_4.path = "foo";
 VAR_4.mode = VAR_1;
 FUNC_9(&VAR_4.id, &VAR_5->id);
 FUNC_2(FUNC_5(VAR_3, &VAR_4));

 VAR_4.mode = VAR_0;
 FUNC_4(FUNC_5(VAR_3, &VAR_4));

 FUNC_7(VAR_3);
}
