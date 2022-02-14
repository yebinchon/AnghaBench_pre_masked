
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 () ;
 char* FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (char) ;
 char* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(const char *VAR_0, const char *VAR_1, void *VAR_2)
{
 static int VAR_3;

 if (VAR_3++)
  FUNC_4('\n');

 FUNC_3("key=%s\n", VAR_0);
 FUNC_3("value=%s\n", VAR_1 ? VAR_1 : "(null)");
 FUNC_3("origin=%s\n", FUNC_1());
 FUNC_3("name=%s\n", FUNC_0());
 FUNC_3("scope=%s\n", FUNC_5(FUNC_2()));

 return 0;
}
