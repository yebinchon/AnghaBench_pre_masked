
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {int dummy; } ;
struct ref_transaction {struct ref_store* ref_store; } ;
struct ref_store {TYPE_1__* be; } ;
struct TYPE_2__ {int (* initial_transaction_commit ) (struct ref_store*,struct ref_transaction*,struct strbuf*) ;} ;


 int FUNC_0 (struct ref_store*,struct ref_transaction*,struct strbuf*) ;

int FUNC_1(struct ref_transaction *VAR_0,
       struct strbuf *VAR_1)
{
 struct ref_store *VAR_2 = VAR_0->ref_store;

 return VAR_2->be->initial_transaction_commit(VAR_2, VAR_0, VAR_1);
}
