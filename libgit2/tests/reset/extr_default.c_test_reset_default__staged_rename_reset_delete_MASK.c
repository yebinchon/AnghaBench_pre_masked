
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {char* path; } ;
typedef TYPE_1__ git_index_entry ;
typedef int entry ;
struct TYPE_11__ {char** strings; int count; } ;


 int VAR_0 ;
 TYPE_4__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_4__*,int,int *) ;
 int FUNC_1 (TYPE_1__ const*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,TYPE_1__*) ;
 TYPE_1__* FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,int ,TYPE_4__*) ;
 int FUNC_7 (int *,int ,char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (TYPE_1__*,TYPE_1__ const*,int) ;

void FUNC_10(void)
{
 git_index_entry VAR_4;
 const git_index_entry *VAR_5;
 char *VAR_6[] = { "new.txt" };

 FUNC_8("testrepo2");

 VAR_5 = FUNC_4(VAR_0, "new.txt", 0);
 FUNC_1(VAR_5);
 FUNC_9(&VAR_4, VAR_5, sizeof(VAR_4));

 FUNC_2(FUNC_5(VAR_0, "new.txt"));

 VAR_4.path = "renamed.txt";
 FUNC_2(FUNC_3(VAR_0, &VAR_4));

 VAR_1.strings = VAR_6;
 VAR_1.count = 1;

 FUNC_0(&VAR_1, 0, ((void*)0));

 FUNC_2(FUNC_7(&VAR_3, VAR_2, "HEAD"));
 FUNC_2(FUNC_6(VAR_2, VAR_3, &VAR_1));

 FUNC_0(&VAR_1, 1, ((void*)0));
}
