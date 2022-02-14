
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 () ;
 scalar_t__ FUNC_3 (int ,char**) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char*,char const*,char const*) ;
 int FUNC_6 (struct strbuf*,char*,char*) ;
 char* FUNC_7 () ;

__attribute__((used)) static int FUNC_8(int VAR_1, const char **VAR_2, const char *VAR_3)
{
 char *VAR_4 = ((void*)0);
 char *VAR_5 = FUNC_2();
 const char *VAR_6 = ((void*)0);
 char *VAR_7;
 const char *VAR_8;
 struct strbuf VAR_9 = VAR_0;

 if (VAR_1 != 2 && VAR_1 != 3)
  FUNC_0("resolve-relative-url only accepts one or two arguments");

 VAR_8 = VAR_2[1];
 FUNC_6(&VAR_9, "remote.%s.url", VAR_5);
 FUNC_1(VAR_5);

 if (FUNC_3(VAR_9.buf, &VAR_4))

  VAR_4 = FUNC_7();

 if (VAR_1 == 3)
  VAR_6 = VAR_2[2];

 VAR_7 = FUNC_5(VAR_4, VAR_8, VAR_6);
 FUNC_4(VAR_7);
 FUNC_1(VAR_7);
 FUNC_1(VAR_4);
 return 0;
}
