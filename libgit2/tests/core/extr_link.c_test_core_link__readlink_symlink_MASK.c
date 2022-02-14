
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_buf ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ,char*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,char,int ,char*) ;
 int FUNC_9 (char*,char*,int) ;
 int FUNC_10 () ;

void FUNC_11(void)
{
 git_buf VAR_1 = VAR_0;
 int VAR_2;
 char VAR_3[2048];

 if (!FUNC_10())
  FUNC_3();

 FUNC_8(&VAR_1, '/', FUNC_4(), "readlink_target");

 FUNC_1("readlink_target", "This is the target of a symlink\n");
 FUNC_5(FUNC_6(&VAR_1), "readlink_link", 0);

 VAR_2 = FUNC_9("readlink_link", VAR_3, 2048);
 FUNC_2(VAR_2);

 VAR_3[VAR_2] = 0;

 FUNC_0(FUNC_6(&VAR_1), VAR_3);

 FUNC_7(&VAR_1);
}
