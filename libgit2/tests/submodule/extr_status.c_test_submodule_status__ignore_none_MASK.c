
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int VAR_11 ;
 unsigned int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*,char*,int,int ,int *) ;
 int FUNC_5 (int ,char*,int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;

void FUNC_8(void)
{
 unsigned int VAR_12;

 FUNC_6("sm_unchanged");

 FUNC_5(VAR_11, "just_a_dir", VAR_1);
 FUNC_5(VAR_11, "not-submodule", VAR_0);
 FUNC_5(VAR_11, "not", VAR_0);

 VAR_12 = FUNC_3(VAR_11, "sm_changed_index");
 FUNC_1((VAR_12 & VAR_6) != 0);

 VAR_12 = FUNC_3(VAR_11, "sm_changed_head");
 FUNC_1((VAR_12 & VAR_7) != 0);

 VAR_12 = FUNC_3(VAR_11, "sm_changed_file");
 FUNC_1((VAR_12 & VAR_10) != 0);

 VAR_12 = FUNC_3(VAR_11, "sm_changed_untracked_file");
 FUNC_1((VAR_12 & VAR_9) != 0);

 VAR_12 = FUNC_3(VAR_11, "sm_missing_commits");
 FUNC_1((VAR_12 & VAR_7) != 0);

 VAR_12 = FUNC_3(VAR_11, "sm_added_and_uncommited");
 FUNC_1((VAR_12 & VAR_2) != 0);


 VAR_12 = FUNC_3(VAR_11, "sm_unchanged");
 FUNC_1((VAR_12 & VAR_5) != 0);


 FUNC_2(FUNC_4("sm_unchanged", "submod2", 0755, 0, ((void*)0)));
 VAR_12 = FUNC_3(VAR_11, "sm_unchanged");
 FUNC_1((VAR_12 & VAR_8) != 0);


 FUNC_0("sm_changed_head");
 VAR_12 = FUNC_3(VAR_11, "sm_changed_head");
 FUNC_1((VAR_12 & VAR_4) != 0);


 FUNC_7("sm_changed_head");
 VAR_12 = FUNC_3(VAR_11, "sm_changed_head");
 FUNC_1((VAR_12 & VAR_3) != 0);
}
