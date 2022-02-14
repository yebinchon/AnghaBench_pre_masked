
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_size; int st_mode; } ;
typedef int git_buf ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int ,char*,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,char,int ,char*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (char*,struct stat*) ;
 int FUNC_14 () ;

void FUNC_15(void)
{
 git_buf VAR_1 = VAR_0;
 struct stat VAR_2;

 if (!FUNC_14())
  FUNC_6();




 FUNC_11(&VAR_1, '/', FUNC_7(), "lstat_target");

 FUNC_4("lstat_target", "This is the target of a symbolic link.\n");
 FUNC_8(FUNC_9(&VAR_1), "lstat_symlink", 0);

 FUNC_5(FUNC_13("lstat_target", &VAR_2));
 FUNC_2(FUNC_1(VAR_2.st_mode));
 FUNC_3(39, VAR_2.st_size);

 FUNC_5(FUNC_13("lstat_symlink", &VAR_2));
 FUNC_2(FUNC_0(VAR_2.st_mode));
 FUNC_3(FUNC_12(&VAR_1), VAR_2.st_size);

 FUNC_10(&VAR_1);
}
