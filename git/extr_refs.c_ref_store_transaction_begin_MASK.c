
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct ref_transaction {struct ref_store* ref_store; } ;
struct ref_store {int dummy; } ;


 int FUNC_0 (struct strbuf*) ;
 struct ref_transaction* FUNC_1 (int,int) ;

struct ref_transaction *FUNC_2(struct ref_store *VAR_0,
          struct strbuf *VAR_1)
{
 struct ref_transaction *VAR_2;
 FUNC_0(VAR_1);

 VAR_2 = FUNC_1(1, sizeof(struct ref_transaction));
 VAR_2->ref_store = VAR_0;
 return VAR_2;
}
