
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {int dummy; } ;
struct ref_transaction {int state; struct ref_store* ref_store; } ;
struct ref_store {TYPE_1__* be; } ;
struct TYPE_2__ {int (* transaction_finish ) (struct ref_store*,struct ref_transaction*,struct strbuf*) ;} ;


 int FUNC_0 (char*) ;



 int FUNC_1 (struct ref_transaction*,struct strbuf*) ;
 int FUNC_2 (struct ref_store*,struct ref_transaction*,struct strbuf*) ;

int FUNC_3(struct ref_transaction *VAR_0,
      struct strbuf *VAR_1)
{
 struct ref_store *VAR_2 = VAR_0->ref_store;
 int VAR_3;

 switch (VAR_0->state) {
 case 129:

  VAR_3 = FUNC_1(VAR_0, VAR_1);
  if (VAR_3)
   return VAR_3;
  break;
 case 128:

  break;
 case 130:
  FUNC_0("commit called on a closed reference transaction");
  break;
 default:
  FUNC_0("unexpected reference transaction state");
  break;
 }

 return VAR_2->be->transaction_finish(VAR_2, VAR_0, VAR_1);
}
