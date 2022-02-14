
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (char*,struct stat*) ;
 int FUNC_7 () ;

void FUNC_8(void)
{
 struct stat VAR_0;

 if (!FUNC_7())
  FUNC_3();

 FUNC_5("stat_dirtarget", 0777);
 FUNC_4("stat_dirtarget", "stat_dirlink", 1);

 FUNC_2(FUNC_6("stat_dirtarget", &VAR_0));
 FUNC_1(FUNC_0(VAR_0.st_mode));

 FUNC_2(FUNC_6("stat_dirlink", &VAR_0));
 FUNC_1(FUNC_0(VAR_0.st_mode));
}
