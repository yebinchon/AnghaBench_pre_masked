
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_buf ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,char,int ,char*) ;
 int FUNC_8 (char*,char*,int) ;
 int FUNC_9 () ;

void FUNC_10(void)
{
 git_buf VAR_1 = VAR_0;
 int VAR_2;
 char VAR_3[2048];

 if (!FUNC_9())
  FUNC_2();

 FUNC_7(&VAR_1, '/', FUNC_3(), "readlink_nonexistent");

 FUNC_4(FUNC_5(&VAR_1), "readlink_dangling", 0);

 VAR_2 = FUNC_8("readlink_dangling", VAR_3, 2048);
 FUNC_1(VAR_2);

 VAR_3[VAR_2] = 0;

 FUNC_0(FUNC_5(&VAR_1), VAR_3);

 FUNC_6(&VAR_1);
}
