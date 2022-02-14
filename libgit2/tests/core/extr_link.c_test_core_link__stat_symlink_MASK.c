
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
 int FUNC_6 (char*,char*,int ) ;
 int FUNC_7 (char*,struct stat*) ;
 int FUNC_8 () ;

void FUNC_9(void)
{
 struct stat VAR_0;

 if (!FUNC_8())
  FUNC_5();

 FUNC_3("stat_target", "This is the target of a symbolic link.\n");
 FUNC_6("stat_target", "stat_symlink", 0);

 FUNC_4(FUNC_7("stat_target", &VAR_0));
 FUNC_1(FUNC_0(VAR_0.st_mode));
 FUNC_2(39, VAR_0.st_size);

 FUNC_4(FUNC_7("stat_symlink", &VAR_0));
 FUNC_1(FUNC_0(VAR_0.st_mode));
 FUNC_2(39, VAR_0.st_size);
}
