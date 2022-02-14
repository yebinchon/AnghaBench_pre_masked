
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct ref_transaction {int dummy; } ;
struct ref_store {int dummy; } ;
struct files_ref_store {int dummy; } ;


 struct files_ref_store* FUNC_0 (struct ref_store*,int ,char*) ;
 int FUNC_1 (struct files_ref_store*,struct ref_transaction*) ;

__attribute__((used)) static int FUNC_2(struct ref_store *VAR_0,
       struct ref_transaction *VAR_1,
       struct strbuf *VAR_2)
{
 struct files_ref_store *VAR_3 =
  FUNC_0(VAR_0, 0, "ref_transaction_abort");

 FUNC_1(VAR_3, VAR_1);
 return 0;
}
