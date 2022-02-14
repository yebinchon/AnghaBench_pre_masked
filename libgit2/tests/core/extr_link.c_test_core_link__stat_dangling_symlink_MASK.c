
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,char*,int ) ;
 int FUNC_3 (char*,struct stat*) ;
 int FUNC_4 () ;

void FUNC_5(void)
{
 struct stat VAR_0;

 if (!FUNC_4())
  FUNC_1();

 FUNC_2("stat_nonexistent", "stat_dangling", 0);

 FUNC_0(FUNC_3("stat_nonexistent", &VAR_0));
 FUNC_0(FUNC_3("stat_dangling", &VAR_0));
}
