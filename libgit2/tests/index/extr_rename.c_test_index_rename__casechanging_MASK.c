
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int git_repository ;
struct TYPE_8__ {int member_0; } ;
struct TYPE_9__ {char* path; TYPE_1__ member_0; } ;
typedef TYPE_2__ git_index_entry ;
typedef int git_index ;


 int FUNC_0 (TYPE_2__ const*) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,TYPE_2__*) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 TYPE_2__* FUNC_10 (int *,char*,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int **,int *) ;
 int FUNC_13 (int **,char*,int ) ;
 int FUNC_14 (TYPE_2__*,TYPE_2__ const*,int) ;
 int FUNC_15 (char*,int) ;

void FUNC_16(void)
{
 git_repository *VAR_0;
 git_index *VAR_1;
 const git_index_entry *VAR_2;
 git_index_entry VAR_3 = {0};

 FUNC_15("rename", 0700);

 FUNC_4(FUNC_13(&VAR_0, "./rename", 0));
 FUNC_4(FUNC_12(&VAR_1, VAR_0));

 FUNC_3("./rename/lame.name.txt", "new_file\n");

 FUNC_4(FUNC_7(VAR_1, "lame.name.txt"));
 FUNC_1(1, FUNC_8(VAR_1));
 FUNC_0((VAR_2 = FUNC_10(VAR_1, "lame.name.txt", 0)));

 FUNC_14(&VAR_3, VAR_2, sizeof(git_index_entry));
 VAR_3.path = "LAME.name.TXT";

 FUNC_4(FUNC_6(VAR_1, &VAR_3));
 FUNC_0((VAR_2 = FUNC_10(VAR_1, "LAME.name.TXT", 0)));

 if (FUNC_5(VAR_0, "core.ignorecase"))
  FUNC_1(1, FUNC_8(VAR_1));
 else
  FUNC_1(2, FUNC_8(VAR_1));

 FUNC_9(VAR_1);
 FUNC_11(VAR_0);

 FUNC_2("rename");
}
