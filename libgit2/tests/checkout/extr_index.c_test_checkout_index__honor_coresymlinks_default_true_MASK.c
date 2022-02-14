
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (char*,char*,char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 (char*,char*,int) ;
 int FUNC_10 () ;
 int FUNC_11 (char*) ;

void FUNC_12(void)
{
 char VAR_1[VAR_0];
 int VAR_2 = VAR_0;

 FUNC_4(FUNC_8("symlink", 0777));

 if (!FUNC_7("symlink/test"))
  FUNC_5();
 FUNC_10();

 VAR_2 = FUNC_9("./symlink/link_to_new.txt", VAR_1, VAR_2);
 FUNC_1(VAR_2 >= 0);

 VAR_1[VAR_2] = '\0';
 FUNC_2(VAR_2, FUNC_11("new.txt"));
 FUNC_3(VAR_1, "new.txt");
 FUNC_0("./symlink/link_to_new.txt", "my new file\n");
}
