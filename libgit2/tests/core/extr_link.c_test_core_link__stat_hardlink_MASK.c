
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_size; int st_mode; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,struct stat*) ;
 int FUNC_8 () ;

void FUNC_9(void)
{
 struct stat VAR_0;

 if (!FUNC_8())
  FUNC_5();

 FUNC_3("stat_hardlink1", "This file has many names!\n");
 FUNC_6("stat_hardlink1", "stat_hardlink2");

 FUNC_4(FUNC_7("stat_hardlink1", &VAR_0));
 FUNC_1(FUNC_0(VAR_0.st_mode));
 FUNC_2(26, VAR_0.st_size);

 FUNC_4(FUNC_7("stat_hardlink2", &VAR_0));
 FUNC_1(FUNC_0(VAR_0.st_mode));
 FUNC_2(26, VAR_0.st_size);
}
