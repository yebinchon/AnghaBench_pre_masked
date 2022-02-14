
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {int dummy; } ;
struct ref_transaction {int state; struct ref_store* ref_store; } ;
struct ref_store {TYPE_1__* be; } ;
struct TYPE_2__ {int (* transaction_abort ) (struct ref_store*,struct ref_transaction*,struct strbuf*) ;} ;


 int FUNC_0 (char*) ;



 int FUNC_1 (struct ref_transaction*) ;
 int FUNC_2 (struct ref_store*,struct ref_transaction*,struct strbuf*) ;

int FUNC_3(struct ref_transaction *VAR_0,
     struct strbuf *VAR_1)
{
 struct ref_store *VAR_2 = VAR_0->ref_store;
 int VAR_3 = 0;

 switch (VAR_0->state) {
 case 129:

  break;
 case 128:
  VAR_3 = VAR_2->be->transaction_abort(VAR_2, VAR_0, VAR_1);
  break;
 case 130:
  FUNC_0("abort called on a closed reference transaction");
  break;
 default:
  FUNC_0("unexpected reference transaction state");
  break;
 }

 FUNC_1(VAR_0);
 return VAR_3;
}
