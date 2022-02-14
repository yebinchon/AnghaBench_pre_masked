
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;


 int FUNC_0 (struct strbuf*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,char*,char const*,char const*) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (struct strbuf*) ;
 int FUNC_5 (struct strbuf*,int,char*) ;
 scalar_t__ FUNC_6 (char const*,char const*) ;

__attribute__((used)) static void FUNC_7(struct strbuf *VAR_0, const char *VAR_1)
{
 const char *VAR_2 = FUNC_3("CONTENT_TYPE");

 if (!VAR_2)
  VAR_2 = "";

 if (FUNC_6(VAR_2, VAR_1)) {
  FUNC_5(VAR_0, 415, "Unsupported Media Type");
  FUNC_4(VAR_0);
  FUNC_0(VAR_0);
  FUNC_2(1,
   "Expected POST with Content-Type '%s',"
   " but received '%s' instead.\n",
   VAR_1, VAR_2);
  FUNC_1(0);
 }
}
