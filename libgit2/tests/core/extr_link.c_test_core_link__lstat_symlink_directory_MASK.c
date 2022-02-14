
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
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int ,char*,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,char,int ,char*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (char*,struct stat*) ;
 int FUNC_13 (char*,int) ;
 int FUNC_14 () ;

void FUNC_15(void)
{
 git_buf VAR_1 = VAR_0;
 struct stat VAR_2;

 if (!FUNC_14())
  FUNC_5();

 FUNC_10(&VAR_1, '/', FUNC_6(), "lstat_dirtarget");

 FUNC_13("lstat_dirtarget", 0777);
 FUNC_7(FUNC_8(&VAR_1), "lstat_dirlink", 1);

 FUNC_4(FUNC_12("lstat_dirtarget", &VAR_2));
 FUNC_2(FUNC_0(VAR_2.st_mode));

 FUNC_4(FUNC_12("lstat_dirlink", &VAR_2));
 FUNC_2(FUNC_1(VAR_2.st_mode));
 FUNC_3(FUNC_11(&VAR_1), VAR_2.st_size);

 FUNC_9(&VAR_1);
}
