
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char* buf; } ;
struct ref_transaction {int dummy; } ;
struct object_id {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct strbuf VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 char const VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (struct strbuf*,char const**,struct object_id*,char*,char*,int ) ;
 char* FUNC_3 (struct strbuf*,char const**) ;
 scalar_t__ FUNC_4 (struct ref_transaction*,char*,struct object_id*,struct object_id*,int,int ,struct strbuf*) ;
 int FUNC_5 (struct strbuf*) ;
 int VAR_7 ;

__attribute__((used)) static const char *FUNC_6(struct ref_transaction *VAR_8,
        struct strbuf *VAR_9, const char *VAR_10)
{
 struct strbuf VAR_11 = VAR_2;
 char *VAR_12;
 struct object_id VAR_13, VAR_14;
 int VAR_15;

 VAR_12 = FUNC_3(VAR_9, &VAR_10);
 if (!VAR_12)
  FUNC_0("update: missing <ref>");

 if (FUNC_2(VAR_9, &VAR_10, &VAR_13, "update", VAR_12,
      VAR_0))
  FUNC_0("update %s: missing <newvalue>", VAR_12);

 VAR_15 = !FUNC_2(VAR_9, &VAR_10, &VAR_14, "update", VAR_12,
       VAR_1);

 if (*VAR_10 != VAR_5)
  FUNC_0("update %s: extra input: %s", VAR_12, VAR_10);

 if (FUNC_4(VAR_8, VAR_12,
       &VAR_13, VAR_15 ? &VAR_14 : ((void*)0),
       VAR_7 | VAR_3,
       VAR_6, &VAR_11))
  FUNC_0("%s", VAR_11.buf);

 VAR_7 = VAR_4;
 FUNC_1(VAR_12);
 FUNC_5(&VAR_11);

 return VAR_10;
}
