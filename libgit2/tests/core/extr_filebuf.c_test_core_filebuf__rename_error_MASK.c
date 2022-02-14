
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_filebuf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,char*,int ,int) ;
 int FUNC_9 (int *,char*,char*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int) ;
 int FUNC_12 (char*,int) ;
 int FUNC_13 (char*,int ) ;

void FUNC_14(void)
{
 git_filebuf VAR_2 = VAR_0;
 char *VAR_3 = "subdir", *VAR_4 = "subdir/test", *VAR_5 = "subdir/test.lock";
 int VAR_6;


 FUNC_5();


 FUNC_4(FUNC_12(VAR_3, 0666));
 FUNC_3(VAR_4, "dummy content");
 VAR_6 = FUNC_13(VAR_4, VAR_1);
 FUNC_0(VAR_6 > 0);
 FUNC_4(FUNC_8(&VAR_2, VAR_4, 0, 0666));

 FUNC_4(FUNC_9(&VAR_2, "%s\n", "libgit2 rocks"));

 FUNC_1(1, FUNC_10(VAR_5));

 FUNC_2(FUNC_7(&VAR_2));
 FUNC_11(VAR_6);

 FUNC_6(&VAR_2);

 FUNC_1(0, FUNC_10(VAR_5));
}
