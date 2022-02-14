
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_filebuf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int *,char const*,int ,int) ;
 int FUNC_5 (char const*,int *,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char const*,int) ;
 int FUNC_8 (char*,char const*) ;

void FUNC_9(void)
{
 git_filebuf VAR_2 = VAR_0;
 const char *VAR_3 = "linkdir", *VAR_4 = "linkdir/link";

 if (!FUNC_6(FUNC_3()))
  FUNC_2();

 FUNC_1(FUNC_7(VAR_3, 0777));

 FUNC_1(FUNC_8("link", VAR_4));

 FUNC_0(FUNC_4(&VAR_2, VAR_4, 0, 0666));

 FUNC_1(FUNC_5(VAR_3, ((void*)0), VAR_1));
}
