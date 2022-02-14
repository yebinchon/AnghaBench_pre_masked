
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 () ;

void FUNC_6(void)
{
 FUNC_1(FUNC_4("symlink", 0777));
 if (FUNC_3("symlink/test"))
  FUNC_2();


 FUNC_5();
 FUNC_0("./symlink/link_to_new.txt", "new.txt");
}
