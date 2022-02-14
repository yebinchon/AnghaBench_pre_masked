
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int git_repository ;
typedef int git_oid ;
struct TYPE_3__ {int id; } ;
typedef TYPE_1__ git_index_entry ;
typedef int git_index ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (size_t*,int *,char*) ;
 int FUNC_8 (int *) ;
 TYPE_1__* FUNC_9 (int *,size_t) ;
 int FUNC_10 (int *,char*,int ) ;
 int FUNC_11 (int *,char*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int **,int *) ;
 int FUNC_14 (int **,char*,int ) ;
 int FUNC_15 (char*,int) ;
 int FUNC_16 (char*,char*) ;

void FUNC_17(void)
{
 git_repository *VAR_0;
 git_index *VAR_1;
 size_t VAR_2;
 git_oid VAR_3;
 const git_index_entry *VAR_4;

 FUNC_15("rename", 0700);

 FUNC_4(FUNC_14(&VAR_0, "./rename", 0));
 FUNC_4(FUNC_13(&VAR_1, VAR_0));

 FUNC_0(FUNC_6(VAR_1) == 0);

 FUNC_3("./rename/lame.name.txt", "new_file\n");


 FUNC_4(FUNC_5(VAR_1, "lame.name.txt"));
 FUNC_0(FUNC_6(VAR_1) == 1);

 FUNC_4(FUNC_11(&VAR_3, "d4fa8600b4f37d7516bef4816ae2c64dbf029e3a"));

 FUNC_0(!FUNC_7(&VAR_2, VAR_1, "lame.name.txt"));

 VAR_4 = FUNC_9(VAR_1, VAR_2);
 FUNC_1(&VAR_3, &VAR_4->id);


 FUNC_4(FUNC_10(VAR_1, "lame.name.txt", 0));
 FUNC_0(FUNC_6(VAR_1) == 0);

 FUNC_16("./rename/lame.name.txt", "./rename/fancy.name.txt");

 FUNC_4(FUNC_5(VAR_1, "fancy.name.txt"));
 FUNC_0(FUNC_6(VAR_1) == 1);

 FUNC_0(!FUNC_7(&VAR_2, VAR_1, "fancy.name.txt"));

 VAR_4 = FUNC_9(VAR_1, VAR_2);
 FUNC_1(&VAR_3, &VAR_4->id);

 FUNC_8(VAR_1);
 FUNC_12(VAR_0);

 FUNC_2("rename");
}
