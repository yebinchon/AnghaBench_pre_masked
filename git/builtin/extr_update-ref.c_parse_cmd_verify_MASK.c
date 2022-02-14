
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct ref_transaction {int dummy; } ;
struct object_id {int dummy; } ;


 int VAR_0 ;
 struct strbuf VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 char const VAR_3 ;
 int FUNC_2 (struct object_id*) ;
 scalar_t__ FUNC_3 (struct strbuf*,char const**,struct object_id*,char*,char*,int ) ;
 char* FUNC_4 (struct strbuf*,char const**) ;
 scalar_t__ FUNC_5 (struct ref_transaction*,char*,struct object_id*,int ,struct strbuf*) ;
 int FUNC_6 (struct strbuf*) ;
 int VAR_4 ;

__attribute__((used)) static const char *FUNC_7(struct ref_transaction *VAR_5,
        struct strbuf *VAR_6, const char *VAR_7)
{
 struct strbuf VAR_8 = VAR_1;
 char *VAR_9;
 struct object_id VAR_10;

 VAR_9 = FUNC_4(VAR_6, &VAR_7);
 if (!VAR_9)
  FUNC_0("verify: missing <ref>");

 if (FUNC_3(VAR_6, &VAR_7, &VAR_10, "verify", VAR_9,
      VAR_0))
  FUNC_2(&VAR_10);

 if (*VAR_7 != VAR_3)
  FUNC_0("verify %s: extra input: %s", VAR_9, VAR_7);

 if (FUNC_5(VAR_5, VAR_9, &VAR_10,
       VAR_4, &VAR_8))
  FUNC_0("%s", VAR_8.buf);

 VAR_4 = VAR_2;
 FUNC_1(VAR_9);
 FUNC_6(&VAR_8);

 return VAR_7;
}
