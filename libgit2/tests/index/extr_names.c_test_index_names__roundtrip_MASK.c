
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * theirs; int * ours; int * ancestor; } ;
typedef TYPE_1__ git_index_name_entry ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,char*,char*) ;
 int FUNC_4 (int ) ;
 TYPE_1__* FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_8 (int *,char*) ;

void FUNC_9(void)
{
 const git_index_name_entry *VAR_1;

 FUNC_1(FUNC_3(VAR_0, "ancestor", "ours", "theirs"));
 FUNC_1(FUNC_3(VAR_0, "ancestor2", "ours2", ((void*)0)));
 FUNC_1(FUNC_3(VAR_0, "ancestor3", ((void*)0), "theirs3"));

 FUNC_1(FUNC_7(VAR_0));
 FUNC_2(VAR_0);
 FUNC_0(FUNC_4(VAR_0) == 0);

 FUNC_1(FUNC_6(VAR_0, 1));
 FUNC_0(FUNC_4(VAR_0) == 3);

 VAR_1 = FUNC_5(VAR_0, 0);
 FUNC_0(FUNC_8(VAR_1->ancestor, "ancestor") == 0);
 FUNC_0(FUNC_8(VAR_1->ours, "ours") == 0);
 FUNC_0(FUNC_8(VAR_1->theirs, "theirs") == 0);

 VAR_1 = FUNC_5(VAR_0, 1);
 FUNC_0(FUNC_8(VAR_1->ancestor, "ancestor2") == 0);
 FUNC_0(FUNC_8(VAR_1->ours, "ours2") == 0);
 FUNC_0(VAR_1->theirs == ((void*)0));

 VAR_1 = FUNC_5(VAR_0, 2);
 FUNC_0(FUNC_8(VAR_1->ancestor, "ancestor3") == 0);
 FUNC_0(VAR_1->ours == ((void*)0));
 FUNC_0(FUNC_8(VAR_1->theirs, "theirs3") == 0);
}
