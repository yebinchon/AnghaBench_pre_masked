
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tag {int oid; int name; struct tag* next_tag; } ;
struct strbuf {int buf; } ;
struct ref_transaction {int dummy; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int VAR_1 ;
 struct tag* VAR_2 ;
 struct ref_transaction* FUNC_1 (struct strbuf*) ;
 scalar_t__ FUNC_2 (struct ref_transaction*,struct strbuf*) ;
 int FUNC_3 (struct ref_transaction*) ;
 scalar_t__ FUNC_4 (struct ref_transaction*,int ,int *,int *,int ,char const*,struct strbuf*) ;
 int FUNC_5 (struct strbuf*,char*,int ) ;
 int FUNC_6 (struct strbuf*) ;
 int FUNC_7 (struct strbuf*) ;

__attribute__((used)) static void FUNC_8(void)
{
 static const char *VAR_3 = "fast-import";
 struct tag *VAR_4;
 struct strbuf VAR_5 = VAR_0;
 struct strbuf VAR_6 = VAR_0;
 struct ref_transaction *VAR_7;

 VAR_7 = FUNC_1(&VAR_6);
 if (!VAR_7) {
  VAR_1 |= FUNC_0("%s", VAR_6.buf);
  goto cleanup;
 }
 for (VAR_4 = VAR_2; VAR_4; VAR_4 = VAR_4->next_tag) {
  FUNC_7(&VAR_5);
  FUNC_5(&VAR_5, "refs/tags/%s", VAR_4->name);

  if (FUNC_4(VAR_7, VAR_5.buf,
        &VAR_4->oid, ((void*)0), 0, VAR_3, &VAR_6)) {
   VAR_1 |= FUNC_0("%s", VAR_6.buf);
   goto cleanup;
  }
 }
 if (FUNC_2(VAR_7, &VAR_6))
  VAR_1 |= FUNC_0("%s", VAR_6.buf);

 cleanup:
 FUNC_3(VAR_7);
 FUNC_6(&VAR_5);
 FUNC_6(&VAR_6);
}
