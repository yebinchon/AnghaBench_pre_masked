
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct argv_array {int argv; int argc; } ;


 struct argv_array VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct argv_array*,char*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char const*,int ) ;
 int FUNC_3 () ;
 char* FUNC_4 (int ,int *) ;
 int FUNC_5 (char*,char const*) ;
 int FUNC_6 (char const*,char*) ;
 int FUNC_7 (char const*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,char const*,int ,int *,int) ;

int FUNC_10(int VAR_4, const char **VAR_5, const char *VAR_6)
{
 struct argv_array VAR_7 = VAR_0;
 const char *VAR_8 = "argument ";

 if (VAR_4 != 2 || !FUNC_6(VAR_5[1], "-h"))
  FUNC_8(VAR_3);

 if (!FUNC_2(VAR_5[1], 0))
  FUNC_1("'%s' does not appear to be a git repository", VAR_5[1]);

 FUNC_3();


 FUNC_0(&VAR_7, "git-upload-archive");
 for (;;) {
  char *VAR_9 = FUNC_4(0, ((void*)0));
  if (!VAR_9)
   break;
  if (VAR_7.argc > VAR_1)
   FUNC_1("Too many options (>%d)", VAR_1 - 1);

  if (!FUNC_5(VAR_9, VAR_8))
   FUNC_1("'argument' token or flush expected");
  FUNC_0(&VAR_7, VAR_9 + FUNC_7(VAR_8));
 }


 return FUNC_9(VAR_7.argc, VAR_7.argv, VAR_6,
        VAR_2, ((void*)0), 1);
}
