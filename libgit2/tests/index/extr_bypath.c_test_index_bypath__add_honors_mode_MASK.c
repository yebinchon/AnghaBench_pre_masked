
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* path; int mode; } ;
typedef TYPE_1__ git_index_entry ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 int FUNC_5 (int ,TYPE_1__*) ;
 int FUNC_6 (int ,char*) ;
 TYPE_1__* FUNC_7 (int ,char*,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_1__*,TYPE_1__ const*,int) ;
 int FUNC_10 (char*,int ) ;

void FUNC_11(void)
{
 const git_index_entry *VAR_2;
 git_index_entry VAR_3;

 FUNC_0((VAR_2 = FUNC_7(VAR_1, "README.txt", 0)) != ((void*)0));

 FUNC_9(&VAR_3, VAR_2, sizeof(git_index_entry));
 VAR_3.path = "README.txt";
 VAR_3.mode = VAR_0;

 FUNC_4(FUNC_10("submod2/README.txt", VAR_0));

 FUNC_2(FUNC_5(VAR_1, &VAR_3));
 FUNC_2(FUNC_8(VAR_1));

 FUNC_3("submod2/README.txt", "Modified but still executable");

 FUNC_2(FUNC_6(VAR_1, "README.txt"));
 FUNC_2(FUNC_8(VAR_1));

 FUNC_0((VAR_2 = FUNC_7(VAR_1, "README.txt", 0)) != ((void*)0));
 FUNC_1(VAR_0, VAR_2->mode);
}
