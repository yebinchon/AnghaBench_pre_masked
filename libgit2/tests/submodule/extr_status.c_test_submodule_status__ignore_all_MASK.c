
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_submodule_ignore_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int FUNC_4 (char*,char*,int,int ,int *) ;
 int FUNC_5 (unsigned int*,int ,char*,int ) ;
 int FUNC_6 (int ,char*,int ) ;
 int FUNC_7 (char*) ;

void FUNC_8(void)
{
 unsigned int VAR_4;
 git_submodule_ignore_t VAR_5 = VAR_2;

 FUNC_7("sm_unchanged");

 FUNC_6(VAR_3, "just_a_dir", VAR_1);
 FUNC_6(VAR_3, "not-submodule", VAR_0);
 FUNC_6(VAR_3, "not", VAR_0);

 FUNC_3(FUNC_5(&VAR_4, VAR_3,"sm_changed_index", VAR_5));
 FUNC_2(FUNC_0(VAR_4));

 FUNC_3(FUNC_5(&VAR_4, VAR_3,"sm_changed_head", VAR_5));
 FUNC_2(FUNC_0(VAR_4));

 FUNC_3(FUNC_5(&VAR_4, VAR_3,"sm_changed_file", VAR_5));
 FUNC_2(FUNC_0(VAR_4));

 FUNC_3(FUNC_5(&VAR_4, VAR_3,"sm_changed_untracked_file", VAR_5));
 FUNC_2(FUNC_0(VAR_4));

 FUNC_3(FUNC_5(&VAR_4, VAR_3,"sm_missing_commits", VAR_5));
 FUNC_2(FUNC_0(VAR_4));

 FUNC_3(FUNC_5(&VAR_4, VAR_3,"sm_added_and_uncommited", VAR_5));
 FUNC_2(FUNC_0(VAR_4));


 FUNC_3(FUNC_5(&VAR_4, VAR_3,"sm_unchanged", VAR_5));
 FUNC_2(FUNC_0(VAR_4));


 FUNC_3(FUNC_4("sm_unchanged", "submod2", 0755, 0, ((void*)0)));
 FUNC_3(FUNC_5(&VAR_4, VAR_3,"sm_unchanged", VAR_5));
 FUNC_2(FUNC_0(VAR_4));


 FUNC_1("sm_changed_head");
 FUNC_3(FUNC_5(&VAR_4, VAR_3,"sm_changed_head", VAR_5));
 FUNC_2(FUNC_0(VAR_4));
}
