
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char* buf; } ;
struct ref_transaction {int dummy; } ;
struct object_id {int dummy; } ;


 int VAR_0 ;
 struct strbuf VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (struct object_id*) ;
 char const VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (struct strbuf*,char const**,struct object_id*,char*,char*,int ) ;
 char* FUNC_4 (struct strbuf*,char const**) ;
 scalar_t__ FUNC_5 (struct ref_transaction*,char*,struct object_id*,int ,int ,struct strbuf*) ;
 int FUNC_6 (struct strbuf*) ;
 int VAR_5 ;

__attribute__((used)) static const char *FUNC_7(struct ref_transaction *VAR_6,
        struct strbuf *VAR_7, const char *VAR_8)
{
 struct strbuf VAR_9 = VAR_1;
 char *VAR_10;
 struct object_id VAR_11;
 int VAR_12;

 VAR_10 = FUNC_4(VAR_7, &VAR_8);
 if (!VAR_10)
  FUNC_0("delete: missing <ref>");

 if (FUNC_3(VAR_7, &VAR_8, &VAR_11, "delete", VAR_10,
      VAR_0)) {
  VAR_12 = 0;
 } else {
  if (FUNC_2(&VAR_11))
   FUNC_0("delete %s: zero <oldvalue>", VAR_10);
  VAR_12 = 1;
 }

 if (*VAR_8 != VAR_3)
  FUNC_0("delete %s: extra input: %s", VAR_10, VAR_8);

 if (FUNC_5(VAR_6, VAR_10,
       VAR_12 ? &VAR_11 : ((void*)0),
       VAR_5, VAR_4, &VAR_9))
  FUNC_0("%s", VAR_9.buf);

 VAR_5 = VAR_2;
 FUNC_1(VAR_10);
 FUNC_6(&VAR_9);

 return VAR_8;
}
