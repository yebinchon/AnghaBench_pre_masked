
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
 int FUNC_5 (char*,struct stat*) ;

void FUNC_6(void)
{
 struct stat VAR_0;

 FUNC_3("lstat_regfile", "This is a regular file!\n");

 FUNC_4(FUNC_5("lstat_regfile", &VAR_0));
 FUNC_1(FUNC_0(VAR_0.st_mode));
 FUNC_2(24, VAR_0.st_size);
}
