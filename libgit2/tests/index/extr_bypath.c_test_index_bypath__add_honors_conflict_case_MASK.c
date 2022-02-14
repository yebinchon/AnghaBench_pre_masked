
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* path; int flags; int mode; } ;
typedef TYPE_1__ git_index_entry ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 int FUNC_5 (int ,TYPE_1__*) ;
 int FUNC_6 (int ,char*) ;
 TYPE_1__* FUNC_7 (int ,char*,int ) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (TYPE_1__*,TYPE_1__ const*,int) ;
 int FUNC_11 (char*,int ) ;

void FUNC_12(void)
{
 const git_index_entry *VAR_3;
 git_index_entry VAR_4;
 int VAR_5 = 0;

 FUNC_0((VAR_3 = FUNC_7(VAR_2, "README.txt", 0)) != ((void*)0));

 FUNC_10(&VAR_4, VAR_3, sizeof(git_index_entry));
 VAR_4.path = "README.txt";
 VAR_4.mode = VAR_0;

 FUNC_4(FUNC_11("submod2/README.txt", VAR_0));

 FUNC_2(FUNC_8(VAR_2, "README.txt"));

 for (VAR_5 = 1; VAR_5 <= 3; VAR_5++) {
  VAR_4.flags = VAR_5 << VAR_1;
  FUNC_2(FUNC_5(VAR_2, &VAR_4));
 }

 FUNC_2(FUNC_9(VAR_2));

 FUNC_3("submod2/README.txt", "Modified but still executable");

 FUNC_2(FUNC_6(VAR_2, "README.txt"));
 FUNC_2(FUNC_9(VAR_2));

 FUNC_0((VAR_3 = FUNC_7(VAR_2, "README.txt", 0)) != ((void*)0));
 FUNC_1(VAR_0, VAR_3->mode);
}
