
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_filebuf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char const*,int ,int) ;
 int FUNC_7 (int *,char*,char*) ;
 int FUNC_8 (char const*,int *,int ) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char const*,int) ;
 int FUNC_12 (char*,char const*) ;

void FUNC_13(void)
{
 git_filebuf VAR_2 = VAR_0;
 const char *VAR_3 = "linkdir", *VAR_4 = "linkdir/link";

 if (!FUNC_10(FUNC_3()))
  FUNC_2();

 FUNC_1(FUNC_11(VAR_3, 0777));
 FUNC_1(FUNC_12("target", VAR_4));

 FUNC_1(FUNC_6(&VAR_2, VAR_4, 0, 0666));
 FUNC_1(FUNC_7(&VAR_2, "%s\n", "libgit2 rocks"));

 FUNC_0(1, FUNC_9("linkdir/target.lock"));

 FUNC_1(FUNC_5(&VAR_2));
 FUNC_0(1, FUNC_9("linkdir/target"));

 FUNC_4(&VAR_2);


 FUNC_1(FUNC_6(&VAR_2, VAR_4, 0, 0666));
 FUNC_1(FUNC_7(&VAR_2, "%s\n", "libgit2 rocks"));

 FUNC_0(1, FUNC_9("linkdir/target.lock"));

 FUNC_1(FUNC_5(&VAR_2));
 FUNC_0(1, FUNC_9("linkdir/target"));

 FUNC_4(&VAR_2);
 FUNC_1(FUNC_8(VAR_3, ((void*)0), VAR_1));
}
