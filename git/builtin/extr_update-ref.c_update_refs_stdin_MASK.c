
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char* buf; int len; } ;
struct ref_transaction {int dummy; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char const) ;
 char const VAR_1 ;
 char* FUNC_3 (struct ref_transaction*,struct strbuf*,char const*) ;
 char* FUNC_4 (struct ref_transaction*,struct strbuf*,char const*) ;
 char* FUNC_5 (struct strbuf*,char const*) ;
 char* FUNC_6 (struct ref_transaction*,struct strbuf*,char const*) ;
 char* FUNC_7 (struct ref_transaction*,struct strbuf*,char const*) ;
 scalar_t__ FUNC_8 (char const*,char*,char const**) ;
 scalar_t__ FUNC_9 (struct strbuf*,int ,int) ;
 int FUNC_10 (struct strbuf*) ;

__attribute__((used)) static void FUNC_11(struct ref_transaction *VAR_2)
{
 struct strbuf VAR_3 = VAR_0;
 const char *VAR_4;

 if (FUNC_9(&VAR_3, 0, 1000) < 0)
  FUNC_1("could not read from stdin");
 VAR_4 = VAR_3.buf;

 while (VAR_4 < VAR_3.buf + VAR_3.len) {
  if (*VAR_4 == VAR_1)
   FUNC_0("empty command in input");
  else if (FUNC_2(*VAR_4))
   FUNC_0("whitespace before command: %s", VAR_4);
  else if (FUNC_8(VAR_4, "update ", &VAR_4))
   VAR_4 = FUNC_6(VAR_2, &VAR_3, VAR_4);
  else if (FUNC_8(VAR_4, "create ", &VAR_4))
   VAR_4 = FUNC_3(VAR_2, &VAR_3, VAR_4);
  else if (FUNC_8(VAR_4, "delete ", &VAR_4))
   VAR_4 = FUNC_4(VAR_2, &VAR_3, VAR_4);
  else if (FUNC_8(VAR_4, "verify ", &VAR_4))
   VAR_4 = FUNC_7(VAR_2, &VAR_3, VAR_4);
  else if (FUNC_8(VAR_4, "option ", &VAR_4))
   VAR_4 = FUNC_5(&VAR_3, VAR_4);
  else
   FUNC_0("unknown command: %s", VAR_4);

  VAR_4++;
 }

 FUNC_10(&VAR_3);
}
