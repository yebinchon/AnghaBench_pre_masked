
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (int ) ;
 int VAR_4 ;
 unsigned int FUNC_5 (int ,char*) ;
 int FUNC_6 (char*,char*,int,int ,int *) ;

void FUNC_7(void)
{
 unsigned int VAR_5, VAR_6;

 FUNC_2(
  "submod2/.git/modules/sm_unchanged/info/exclude", "\n*.ignored\n");

 FUNC_4(
  FUNC_6("sm_unchanged/directory", "submod2", 0755, 0, ((void*)0)));
 FUNC_3(
  "submod2/sm_unchanged/directory/i_am.ignored",
  "ignore this file, please\n");

 VAR_5 = FUNC_5(VAR_4, "sm_unchanged");
 FUNC_1(FUNC_0(VAR_5));

 VAR_6 = VAR_1 |
  VAR_2 |
  VAR_0 |
  VAR_3;
 FUNC_1(VAR_5 == VAR_6);
}
