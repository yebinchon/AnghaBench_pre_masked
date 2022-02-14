
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char* buf; } ;
struct ref_transaction {int dummy; } ;
struct ref_store {int dummy; } ;
struct object_id {int dummy; } ;
typedef enum action_on_err { ____Placeholder_action_on_err } action_on_err ;


 scalar_t__ VAR_0 ;
 struct strbuf VAR_1 ;



 char* FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char const*,char const*,char*) ;
 int FUNC_3 (char const*,char const*,char*) ;
 struct ref_store* FUNC_4 (int ) ;
 struct ref_transaction* FUNC_5 (struct ref_store*,struct strbuf*) ;
 scalar_t__ FUNC_6 (struct ref_transaction*,struct strbuf*) ;
 int FUNC_7 (struct ref_transaction*) ;
 scalar_t__ FUNC_8 (struct ref_transaction*,char const*,struct object_id const*,struct object_id const*,unsigned int,char const*,struct strbuf*) ;
 scalar_t__ FUNC_9 (char const*) ;
 int FUNC_10 (struct strbuf*) ;
 int VAR_2 ;
 int FUNC_11 (char const*,struct object_id const*,struct object_id const*,struct strbuf*) ;

int FUNC_12(struct ref_store *VAR_3, const char *VAR_4,
      const char *VAR_5, const struct object_id *VAR_6,
      const struct object_id *VAR_7, unsigned int VAR_8,
      enum action_on_err VAR_9)
{
 struct ref_transaction *VAR_10 = ((void*)0);
 struct strbuf VAR_11 = VAR_1;
 int VAR_12 = 0;

 if (FUNC_9(VAR_5) == VAR_0) {
  FUNC_1(VAR_3 == FUNC_4(VAR_2));
  VAR_12 = FUNC_11(VAR_5, VAR_6, VAR_7, &VAR_11);
 } else {
  VAR_10 = FUNC_5(VAR_3, &VAR_11);
  if (!VAR_10 ||
      FUNC_8(VAR_10, VAR_5, VAR_6, VAR_7,
        VAR_8, VAR_4, &VAR_11) ||
      FUNC_6(VAR_10, &VAR_11)) {
   VAR_12 = 1;
   FUNC_7(VAR_10);
  }
 }
 if (VAR_12) {
  const char *VAR_13 = FUNC_0("update_ref failed for ref '%s': %s");

  switch (VAR_9) {
  case 129:
   FUNC_3(VAR_13, VAR_5, VAR_11.buf);
   break;
  case 130:
   FUNC_2(VAR_13, VAR_5, VAR_11.buf);
   break;
  case 128:
   break;
  }
  FUNC_10(&VAR_11);
  return 1;
 }
 FUNC_10(&VAR_11);
 if (VAR_10)
  FUNC_7(VAR_10);
 return 0;
}
