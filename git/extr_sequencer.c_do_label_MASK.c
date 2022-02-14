
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct repository {int dummy; } ;
struct ref_transaction {int dummy; } ;
struct ref_store {int dummy; } ;
struct object_id {int dummy; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 struct ref_store* FUNC_2 (struct repository*) ;
 scalar_t__ FUNC_3 (char*,struct object_id*) ;
 int FUNC_4 () ;
 struct ref_transaction* FUNC_5 (struct ref_store*,struct strbuf*) ;
 scalar_t__ FUNC_6 (struct ref_transaction*,struct strbuf*) ;
 int FUNC_7 (struct ref_transaction*) ;
 scalar_t__ FUNC_8 (struct ref_transaction*,int ,struct object_id*,int *,int ,int ,struct strbuf*) ;
 int FUNC_9 (int ,char*,int ) ;
 int FUNC_10 (struct strbuf*,char*,int,char const*) ;
 int FUNC_11 (struct strbuf*) ;

__attribute__((used)) static int FUNC_12(struct repository *VAR_1, const char *VAR_2, int VAR_3)
{
 struct ref_store *VAR_4 = FUNC_2(VAR_1);
 struct ref_transaction *VAR_5;
 struct strbuf VAR_6 = VAR_0, VAR_7 = VAR_0;
 struct strbuf VAR_8 = VAR_0;
 int VAR_9 = 0;
 struct object_id VAR_10;

 if (VAR_3 == 1 && *VAR_2 == '#')
  return FUNC_1(FUNC_0("illegal label name: '%.*s'"), VAR_3, VAR_2);

 FUNC_10(&VAR_6, "refs/rewritten/%.*s", VAR_3, VAR_2);
 FUNC_10(&VAR_8, "rebase -i (label) '%.*s'", VAR_3, VAR_2);

 VAR_5 = FUNC_5(VAR_4, &VAR_7);
 if (!VAR_5) {
  FUNC_1("%s", VAR_7.buf);
  VAR_9 = -1;
 } else if (FUNC_3("HEAD", &VAR_10)) {
  FUNC_1(FUNC_0("could not read HEAD"));
  VAR_9 = -1;
 } else if (FUNC_8(VAR_5, VAR_6.buf, &VAR_10,
       ((void*)0), 0, VAR_8.buf, &VAR_7) < 0 ||
     FUNC_6(VAR_5, &VAR_7)) {
  FUNC_1("%s", VAR_7.buf);
  VAR_9 = -1;
 }
 FUNC_7(VAR_5);
 FUNC_11(&VAR_7);
 FUNC_11(&VAR_8);

 if (!VAR_9)
  VAR_9 = FUNC_9(FUNC_4(),
      "%s\n", VAR_6.buf);
 FUNC_11(&VAR_6);

 return VAR_9;
}
