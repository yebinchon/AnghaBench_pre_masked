
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; } ;
typedef TYPE_1__ git_stash_apply_options ;
typedef int git_index_entry ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (int *,int ,int ,int ,char*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int const**,int const**,int const**,int ,char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,TYPE_1__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

void FUNC_9(void)
{
 git_stash_apply_options VAR_9 = VAR_0;
 const git_index_entry *VAR_10;
 const git_index_entry *VAR_11;
 const git_index_entry *VAR_12;

 VAR_9.flags = VAR_1;

 FUNC_3("stash/what", "ciao\n");
 FUNC_2(FUNC_5(VAR_7, "what"));
 FUNC_4(((void*)0), VAR_6, VAR_8, 0, "Other commit");

 FUNC_2(FUNC_8(VAR_6, 0, &VAR_9));

 FUNC_1(FUNC_7(VAR_7), 1);
 FUNC_2(FUNC_6(&VAR_10, &VAR_11, &VAR_12, VAR_7, "what"));
 FUNC_0(VAR_6, "how", VAR_2);
 FUNC_0(VAR_6, "who", VAR_3);
 FUNC_0(VAR_6, "when", VAR_5);
 FUNC_0(VAR_6, "why", VAR_4);
}
