
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_size; } ;
typedef int git_tree ;
typedef int git_patch ;
typedef int git_diff_options ;
typedef int git_diff ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;
 int VAR_1 ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int **,int ,int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int **,int *,int) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*,struct stat*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (char*) ;
 int * FUNC_14 (int ,char*) ;

void FUNC_15(void)
{
 git_diff *VAR_2;
 git_tree *VAR_3;
 git_diff_options VAR_4 = VAR_0;
 struct stat VAR_5;
 git_patch *VAR_6;

 VAR_1 = FUNC_4("attr_index");

 VAR_3 = FUNC_14(VAR_1, "3812cfef3661");



 FUNC_2(FUNC_7(&VAR_2, VAR_1, VAR_3, &VAR_4));
 FUNC_1(2, (int)FUNC_6(VAR_2));
 FUNC_5(VAR_2);



 FUNC_3("attr_index/README.txt", "");
 FUNC_2(FUNC_11("attr_index/README.txt", &VAR_5));
 FUNC_1(0, (int)VAR_5.st_size);

 FUNC_2(FUNC_7(&VAR_2, VAR_1, VAR_3, &VAR_4));
 FUNC_1(3, (int)FUNC_6(VAR_2));

 FUNC_2(FUNC_9(&VAR_6, VAR_2, 1));
 FUNC_8(VAR_6);
 FUNC_5(VAR_2);



 FUNC_2(FUNC_13("attr_index/README.txt"));
 FUNC_0(!FUNC_10("attr_index/README.txt"));

 FUNC_2(FUNC_7(&VAR_2, VAR_1, VAR_3, &VAR_4));
 FUNC_1(3, (int)FUNC_6(VAR_2));
 FUNC_2(FUNC_9(&VAR_6, VAR_2, 1));
 FUNC_8(VAR_6);
 FUNC_5(VAR_2);

 FUNC_12(VAR_3);
}
