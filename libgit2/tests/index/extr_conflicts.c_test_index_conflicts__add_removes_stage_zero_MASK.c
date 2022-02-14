
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {char* path; int mode; int id; } ;
typedef TYPE_1__ git_index_entry ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int ,TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_9 (TYPE_1__ const**,TYPE_1__ const**,TYPE_1__ const**,int ,char*) ;
 int FUNC_10 (TYPE_1__ const*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,char*,int ) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (TYPE_1__*,int,int) ;
 int VAR_3 ;

void FUNC_15(void)
{
 git_index_entry VAR_4, VAR_5, VAR_6;
 const git_index_entry *VAR_7[3];

 FUNC_1(FUNC_11(VAR_3) == 8);

 FUNC_14(&VAR_4, 0x0, sizeof(git_index_entry));
 FUNC_14(&VAR_5, 0x0, sizeof(git_index_entry));
 FUNC_14(&VAR_6, 0x0, sizeof(git_index_entry));

 FUNC_5("./mergedrepo/test-one.txt", "new-file\n");
 FUNC_6(FUNC_7(VAR_3, "test-one.txt"));
 FUNC_1(FUNC_11(VAR_3) == 9);

 VAR_4.path = "test-one.txt";
 VAR_4.mode = 0100644;
 FUNC_0(&VAR_4, 3);
 FUNC_13(&VAR_4.id, VAR_0);

 VAR_5.path = "test-one.txt";
 VAR_5.mode = 0100644;
 FUNC_0(&VAR_5, 1);
 FUNC_13(&VAR_5.id, VAR_1);

 VAR_6.path = "test-one.txt";
 VAR_6.mode = 0100644;
 FUNC_0(&VAR_6, 2);
 FUNC_13(&VAR_6.id, VAR_2);

 FUNC_6(FUNC_8(VAR_3, &VAR_4, &VAR_5, &VAR_6));

 FUNC_1(FUNC_11(VAR_3) == 11);

 FUNC_4(((void*)0), FUNC_12(VAR_3, "test-one.txt", 0));

 FUNC_6(FUNC_9(&VAR_7[0], &VAR_7[1], &VAR_7[2], VAR_3, "test-one.txt"));

 FUNC_3(&VAR_4.id, &VAR_7[0]->id);
 FUNC_2(1, FUNC_10(VAR_7[0]));
 FUNC_3(&VAR_5.id, &VAR_7[1]->id);
 FUNC_2(2, FUNC_10(VAR_7[1]));
 FUNC_3(&VAR_6.id, &VAR_7[2]->id);
 FUNC_2(3, FUNC_10(VAR_7[2]));
}
