
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct ref_transaction {int dummy; } ;
struct ref_store {int dummy; } ;
struct object_id {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct strbuf VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*,struct object_id const*) ;
 int FUNC_2 (char*,int ) ;
 struct ref_store* FUNC_3 (int ) ;
 struct ref_transaction* FUNC_4 (struct ref_store*,struct strbuf*) ;
 scalar_t__ FUNC_5 (struct ref_transaction*,struct strbuf*) ;
 scalar_t__ FUNC_6 (struct ref_transaction*,char const*,struct object_id const*,unsigned int,char const*,struct strbuf*) ;
 int FUNC_7 (struct ref_transaction*) ;
 scalar_t__ FUNC_8 (char const*) ;
 int FUNC_9 (struct strbuf*) ;
 int VAR_2 ;

int FUNC_10(struct ref_store *VAR_3, const char *VAR_4,
      const char *VAR_5,
      const struct object_id *VAR_6,
      unsigned int VAR_7)
{
 struct ref_transaction *VAR_8;
 struct strbuf VAR_9 = VAR_1;

 if (FUNC_8(VAR_5) == VAR_0) {
  FUNC_0(VAR_3 == FUNC_3(VAR_2));
  return FUNC_1(VAR_5, VAR_6);
 }

 VAR_8 = FUNC_4(VAR_3, &VAR_9);
 if (!VAR_8 ||
     FUNC_6(VAR_8, VAR_5, VAR_6,
       VAR_7, VAR_4, &VAR_9) ||
     FUNC_5(VAR_8, &VAR_9)) {
  FUNC_2("%s", VAR_9.buf);
  FUNC_7(VAR_8);
  FUNC_9(&VAR_9);
  return 1;
 }
 FUNC_7(VAR_8);
 FUNC_9(&VAR_9);
 return 0;
}
