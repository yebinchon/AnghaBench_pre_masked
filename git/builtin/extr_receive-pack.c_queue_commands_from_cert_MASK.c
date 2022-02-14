
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char* buf; int len; } ;
struct command {int dummy; } ;


 int FUNC_0 (char*,...) ;
 char* FUNC_1 (char const*,char,int) ;
 int FUNC_2 (char*,int ) ;
 struct command** FUNC_3 (struct command**,char const*,int) ;
 char* FUNC_4 (char*,char*) ;

__attribute__((used)) static void FUNC_5(struct command **VAR_0,
         struct strbuf *VAR_1)
{
 const char *VAR_2, *VAR_3;

 if (*VAR_0)
  FUNC_0("protocol error: got both push certificate and unsigned commands");

 VAR_2 = FUNC_4(VAR_1->buf, "\n\n");
 if (!VAR_2)
  FUNC_0("malformed push certificate %.*s", 100, VAR_1->buf);
 else
  VAR_2 += 2;
 VAR_3 = VAR_1->buf + FUNC_2(VAR_1->buf, VAR_1->len);

 while (VAR_2 < VAR_3) {
  const char *VAR_4 = FUNC_1(VAR_2, '\n', VAR_3 - VAR_2);
  VAR_0 = FUNC_3(VAR_0, VAR_2, VAR_4 ? VAR_4 - VAR_2 : VAR_3 - VAR_2);
  VAR_2 = VAR_4 ? VAR_4 + 1 : VAR_3;
 }
}
