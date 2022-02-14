
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int git_repository ;
struct TYPE_9__ {int on_disk; int index_file_path; } ;
typedef TYPE_1__ git_index ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int *) ;
 int VAR_1 ;
 int FUNC_5 (char*,int,int ) ;
 int FUNC_6 (TYPE_1__*,char*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__**,int ) ;
 int FUNC_10 (TYPE_1__*,int) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (TYPE_1__**,int *) ;
 int FUNC_14 (int **,char*,int ) ;
 int FUNC_15 (int ) ;

void FUNC_16(void)
{
 git_repository *VAR_2;
 git_index *VAR_3;
 git_index *VAR_4;

 FUNC_4(&VAR_1, ((void*)0));

 FUNC_3(FUNC_5("./myrepo", 0777, VAR_0));
 FUNC_2("./myrepo/a.txt", "a\n");
 FUNC_2("./myrepo/b.txt", "b\n");

 FUNC_3(FUNC_14(&VAR_2, "./myrepo", 0));
 FUNC_3(FUNC_13(&VAR_4, VAR_2));
 FUNC_0(0, VAR_4->on_disk);

 FUNC_3(FUNC_9(&VAR_3, VAR_4->index_file_path));
 FUNC_0(0, VAR_3->on_disk);


 FUNC_3(FUNC_6(VAR_4, "a.txt"));
 FUNC_3(FUNC_6(VAR_4, "b.txt"));

 FUNC_1(2, FUNC_7(VAR_4));


 FUNC_3(FUNC_11(VAR_4));
 FUNC_0(1, VAR_4->on_disk);


 FUNC_1(0, FUNC_7(VAR_3));

 FUNC_3(FUNC_10(VAR_3, 1));
 FUNC_0(1, VAR_3->on_disk);

 FUNC_1(2, FUNC_7(VAR_3));


 FUNC_3(FUNC_15(VAR_4->index_file_path));


 FUNC_3(FUNC_10(VAR_3, 1));
 FUNC_0(0, VAR_3->on_disk);
 FUNC_1(0, FUNC_7(VAR_3));

 FUNC_8(VAR_3);
 FUNC_8(VAR_4);
 FUNC_12(VAR_2);
}
