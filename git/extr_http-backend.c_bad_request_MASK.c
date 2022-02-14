
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct service_cmd {char const* method; } ;


 int FUNC_0 (struct strbuf*) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (struct strbuf*) ;
 int FUNC_3 (struct strbuf*,char*,char*) ;
 int FUNC_4 (struct strbuf*,int,char*) ;
 int FUNC_5 (char const*,char*) ;

__attribute__((used)) static int FUNC_6(struct strbuf *VAR_0, const struct service_cmd *VAR_1)
{
 const char *VAR_2 = FUNC_1("SERVER_PROTOCOL");

 if (VAR_2 && !FUNC_5(VAR_2, "HTTP/1.1")) {
  FUNC_4(VAR_0, 405, "Method Not Allowed");
  FUNC_3(VAR_0, "Allow",
   !FUNC_5(VAR_1->method, "GET") ? "GET, HEAD" : VAR_1->method);
 } else
  FUNC_4(VAR_0, 400, "Bad Request");
 FUNC_2(VAR_0);
 FUNC_0(VAR_0);
 return 0;
}
